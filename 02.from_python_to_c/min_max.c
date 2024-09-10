#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int first = 1;
    int val, maxval, minval;
    char input[100];

    while (fgets(input, 100, stdin) != NULL) {
        if (strcmp(input, "done") == 0) {
            break;
        }

        val = atoi(input);

        if (first || val > maxval) {
            maxval = val;
        }
        if (first || val < minval) {
            minval = val;
        }
        first = 0;
    }

    printf("Maximum %d\n", maxval);
    printf("Minimum %d\n", minval);
}
