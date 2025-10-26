
/*Q89 (Strings)
Count frequency of a given character in a string*/
#include <stdio.h>
int main()
{
    char str[100], ch;
    int i, count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);
    // Count frequency of the given character
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("Frequency of '%c': %d\n", ch, count);
    return 0;
}