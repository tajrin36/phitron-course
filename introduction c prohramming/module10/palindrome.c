#include <stdio.h>
#include <string.h>

int main() {
    char s[1001], reverse[1001];
    fgets(s, 1001, stdin);
    int length = strlen(s);

    // Copy s to reverse
    for (int i = 0; i < length; i++) {
        reverse[i] = s[i];
    }
    reverse[length] = '\0';

    // Reverse the string s (in-place swap)
    int i = 0, j = length - 1;
    if (s[j] == '\n') {
        j--; // skip newline
    }
    while (i < j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }

    // Compare s (now reversed) with reverse (original)
    int count = 1;
    for (int i = 0; i < length; i++) {
        if (s[i] == '\n' && reverse[i] == '\0') break; // handle newline safely
        if (s[i] != reverse[i]) {
            count = 0;
            break;
        }
    }

    if (count == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
