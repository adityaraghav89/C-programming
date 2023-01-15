#include <stdio.h>
int main() {
    char str[1000], ch;
int count = 0;
printf("Enter a string: ");
    gets(str, sizeof(str), stdin);
printf("Enter a character to find itsfrequency: ");
scanf("%c", &ch);
    for (inti = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
            ++count;
    }
printf("Frequency of %c = %d", ch, count);
    return 0;
}

