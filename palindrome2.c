#include <stdio.h>
#include <string.h>
int main() {
    char string1[20];
    int i, length;
    int flag = 0;
    char *start, *end;
    printf("Enter a string: ");
    scanf("%s", string1);
    length = strlen(string1);
    start = string1;
    end = string1 + length - 1;
    for (i = 0; i < length / 2; i++) {
        if (*start != *end) {
            flag = 1;
            break;
        }
        start++;
        end--;
    }
    if (flag) {
        printf("%s is not a palindrome\n", string1);
    } else {
        printf("%s is a palindrome\n", string1);
    }

    return 0;
}