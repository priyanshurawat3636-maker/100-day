/*Q88 (Strings)
Replace spaces with hyphens in a string.*/
#include <stdio.h>
int main()
{
    char str[100];
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Replace spaces with hyphens
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
    printf("Modified string: %s", str);
    return 0;
}