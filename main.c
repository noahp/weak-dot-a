#include "lib.h"

#include <stdio.h>

// strong definition, overrides weak ones in libs
void lib(void) {
    printf("%s\n", __FILE__);
}

int main(void) {
    printf("lib() was compiled from: ");

    lib();

    return 0;
}
