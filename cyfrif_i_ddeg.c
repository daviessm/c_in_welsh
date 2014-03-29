#include "welsh.h"
#include "stdio.h"

cyf prif() {
  cyf x = 0;
  am (x = 0; x <= 10; x++) {
    os (x == 2) parhewch;
    brintf("%d\n", x);
    os (x > 5) torri;
  }

  wneud {
    x--;
    brintf("%d\n", x);
  } tra (x > 0);
  dychwelyd 0;
}
