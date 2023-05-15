#include <stdio.h>

int main() {
    int i;
    int isFirst = 1;
    for (i = 1; i <= 100; i++) {
        if (i == 1 || (i % 2 != 0 && i % 3 != 0 && i % 5 != 0)) {
            if (isFirst) {
                printf("%d", i);
                isFirst = 0;
            } else {
                printf(" %d", i);
            }
        }
    }
    printf("\n");
    return 0;
}
