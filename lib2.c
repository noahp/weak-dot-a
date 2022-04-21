#include "lib.h"
#include <stdio.h>

__attribute__((weak)) void lib(void) {
    printf("%s\n", __FILE__);
}
