#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char *str) {
char *start = str;
char *end = str + strlen(str) - 1;

while (start < end) {
if (*start != *end) {
return false;
}
start++;
end--;
}
return true;
}

int main() {
char str[100];

printf("Enter a string: ");
scanf("%s", str);

if (isPalindrome(str))
printf("\"%s\" is a palindrome.\n", str);
else
printf("\"%s\" is not a palindrome.\n", str);

return 0;
}
