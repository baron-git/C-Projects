#include "binclude.h"


int main() {
  BSTRUCT_SLL_DELETE(13);

    
  for (int i = 1; i < 12; i++) {
    BSTRUCT_SLL_INSERT(i);
  }
  BSTRUCT_SLL_TRAVERSE();
  BSTRUCT_SLL_SEARCH(10);
  BSTRUCT_SLL_DELETE(13);
  return 0;
}