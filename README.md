# cprint
This repository uses escape characters to print colorful output.

## Example
```c
#include "colors.h"

int main() {
  cprint("green with blue background\n", "", BGRN, "", BLUB);
  printf("%sThis should be in red color.%s Now blue.%s\n", RED, BLU, CRESET);
  
  return 0;}
```
Output:
![output](./imgs/output.png)
