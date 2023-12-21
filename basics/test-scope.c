#include <stdio.h>
int main() {
  int x = 0;
loop: // loop has function scope
  x++;
  printf("%d\n", x);
  if (x < 5) {
    goto loop; // can jump to loop
  }
}
