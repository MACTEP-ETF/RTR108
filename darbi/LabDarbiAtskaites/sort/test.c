#include <stdio.h>

int main() {
    int x, i, c[101] = { 0 }, max_repeat;

    printf("please enter test scores between 0 and 100\n");

    max_repeat = 0;

    // read the test scores and compute the maximum repeat count
    while (scanf("%d", &x) == 1 && x >= 0 && x <= 100) {
        c[x] += 1;
        if (max_repeat < c[x]) {
            max_repeat = c[x];
        }
    }

    printf("The mode(s) are");

    for (i = 0; i <= 100; i++) {
        if (c[i] == max_repeat) {
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}
