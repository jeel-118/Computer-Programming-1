#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[] = "PrOgrAM";
    int i;

    printf("Original String: %s\n", str);


    for (i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    printf("Lowercase String: %s\n", str);

    return 0;
}
