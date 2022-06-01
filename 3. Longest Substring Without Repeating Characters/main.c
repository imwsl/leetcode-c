#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cell {
  char ch;
  struct Cell* next;
};

int length_of_cell_list(struct Cell* l) {
  int len = 0;
  while(l != NULL) {
    len ++;
    l = l->next;
  }

  return len;
}

int is_char_in_cell_list(struct Cell* l, char ch) {
  if (NULL == l) return 0;
  struct Cell* p = l;

  while(NULL != p) {
    if (p->ch == ch) return 1;
    p = p->next;
  }

  return 0;
}

void free_cell_list(struct Cell* l) {
  struct Cell *p = l;
  struct Cell *curr_p = l;
  
  while(NULL != p) {
    
    p = p->next;
    free(curr_p);
    curr_p = p;
  }
}

int lengthOfLongestSubstring(char* s) {
  int len = strlen(s);

  int max_len = 0;
  struct Cell *head = NULL;
  struct Cell *p = NULL;
  
  if (len == 0) return 0;
  if (len == 1) return 1;
  if (len == 2) {
    if (s[0] == s[1]) return 1;
    else {
      return 2;
    }
  }
  
  for (int i = 0; i < len; i ++) {
    
    if (NULL == head) {
      head = (struct Cell*)malloc(sizeof(struct Cell));
      head->ch = s[i];
      head->next = NULL;
      p = head;
    }

    for (int j = i + 1; j < len; j ++) {
      
      if (0 == is_char_in_cell_list(head, s[j])) {
        
        struct Cell* temp = (struct Cell*)malloc(sizeof(struct Cell));
        temp->ch = s[j];
        temp->next = NULL;
        p->next = temp;
        p = temp;
      } else {
        break;
      } 
    }

    if (NULL != head) {

      int temp_len = length_of_cell_list(head);
      max_len = (max_len > temp_len) ? max_len : temp_len;

      free_cell_list(head);
      head = NULL;
      p = NULL;
    }
  }

  return max_len;
}

int main() {
  char* s = "abcabcbb";
  printf("len = %d\n", lengthOfLongestSubstring(s));

  s = "bbb";
  printf("len = %d\n", lengthOfLongestSubstring(s));

  s = "pwwkew";
  printf("len = %d\n", lengthOfLongestSubstring(s));

   s = "w";
  printf("len = %d\n", lengthOfLongestSubstring(s));

  s = "ww";
  printf("len = %d\n", lengthOfLongestSubstring(s));

  s = "aab";
  printf("len = %d\n", lengthOfLongestSubstring(s));

  return 0;
}
