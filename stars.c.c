
#include <stdio.h>

int main() {
    int rows, i, j, space, star;

    rows = 4;

    space = rows - 1;
    star = 1;


    for (i = 1; i <= (rows * 2-1); i++) {
        for (j = 1; j <= space; j++) {
            printf(" ");
        }
        for (j = 1; j <= star; j++) {
            printf("*");
        }
        printf("\n");

        if (i < rows) {
            space--;
            star += 2;
        } else {
            space++;
            star -= 2;
        }
    }

    return 0;
}
