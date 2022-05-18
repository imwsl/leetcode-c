#include <stdio.h>
#include <stdlib.h>

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
  }

  return 0;
}

int lengthOfLongestSubstring(char* ch) {
  int len = strlen(ch);

  int max_len = 0;
  struct Cell *head = NULL;
  struct Cell *p = NULL;
  
  if (len <= 2) return len;
  
  for (int i = 0; i < len; i ++) {
    
    for (int j = i + 1; j < len; j ++) {
      
    }
  }
  
  return 0;
}

int main() {

  printf("Hello World!!");
}
