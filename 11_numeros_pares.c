#include <stdio.h>
int main(void) {
    int i;
    for (i = 2; i <= 100; i += 2) {
        printf("%d ", i);
        if (i % 20 == 0) printf("\n");
    }
    return 0;
}
