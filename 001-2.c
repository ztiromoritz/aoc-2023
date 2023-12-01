#include <stdint.h>
#include <stdio.h>

struct Trie {
  struct Trie *children[26];
  uint8_t value;
};
typedef struct Trie Trie;

int query(Trie trie, unsigned char *str){
  
}


int main(void) {
  uint8_t array[] = {['a' - 'a'] = 23};
  printf("%d -- %ld", array['a' - 'a'], sizeof(array) / sizeof(uint8_t));

  Trie t_three = { .value = 3};
  Trie t_thre = {.children = {['e' - 'a'] = &t_three}};
  Trie t_thr = {.children = {['e' - 'a'] = &t_thre}};
  Trie t_th = {.children = {['r' - 'a'] = &t_thr}};

  Trie t_two = {.value = 2};
  Trie t_tw = {.children = {['o' - 'a'] = &t_two}};
  Trie t_t = {.children = {['w' - 'a'] = &t_tw, ['h'-'a']=&t_th}};

  Trie t_one = {.value = 1};
  Trie t_on = {.children = {['e' - 'a'] = &t_one}};
  Trie t_o = {.children = {['n' - 'a'] = &t_on}};

  Trie root = {.children = {['o' - 'a'] = &t_o, ['t' - 'a'] = &t_t},
               .value = 0};


}
