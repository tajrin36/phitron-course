#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int star = 1;
    int space = n - 1;

    for (int i = 1; i <= n; i++) {
        char ch;
        if (i % 2 != 0) {
            ch = '#';
        } else {
            ch = '-';
        }

        for (int j = 1; j <= space; j++) {
            printf(" ");
        }
        for (int k = 1; k <= star; k++) {
            printf("%c", ch);
        }
        printf("\n");

        star += 2;
        space--;
    }


    star -= 4;
    space = 1;

    for (int i = 1; i < n; i++) {
        char ch;
        if ((n+i) % 2 != 0) {
            ch = '#';
        } else {
            ch = '-';
        }

        for (int j = 1; j <= space; j++) {
            printf(" ");
        }
        for (int k = 1; k <= star; k++) {
            printf("%c", ch);
        }
        printf("\n");

        star -= 2;
        space++;
    }

    return 0;
}


