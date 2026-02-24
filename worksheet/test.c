#include <stdio.h>

int main ( void ) {
    for (int i = 0; i < 3; i++) {
    int j = 0;
    while (j < i) {
        printf("Hello\n");
        j++;
        }
    }
    return 0;
}
