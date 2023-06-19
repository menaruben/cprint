#include "colors.h"

int main() {
  cprint("green with blue background\n", "", BGRN, "", BLUB); 
  printf("%sThis should be in red color.%s Now blue.%s\n", RED, BLU, CRESET);
  return 0;
}