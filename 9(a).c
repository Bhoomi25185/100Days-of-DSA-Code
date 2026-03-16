//Mirror the Code Name
#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    int i, length;

    printf("Enter a name: ");
    scanf("%s", name);

    length = strlen(name);

    printf("Mirror of the name: ");

    for(i = length - 1; i >= 0; i--) {
        printf("%c", name[i]);
    }

    return 0;
}