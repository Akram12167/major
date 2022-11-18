#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 100 

int check_special(char str[]) {
int i, flag = 0;
for (i = 0; i < strlen(str); i++) {
if ((str[i] >= '!' && str[i] <= '/') || (str[i] >= ':' && str[i] <= '@') ||
(str[i] >= '[' && str[i] <= '`') || (str[i] >= '{' && str[i] <= '~')) {
flag = 1;
break;
}
}

if (flag == 1)
return 1;
else
return 0;
}

int main()
{
char password[MAX_SIZE];
int i;

printf("Enter your password: ");
scanf("%s", password);
if (strlen(password) < 8) {
printf("Error: Password must be 8 characters long.\n");
} else if (!check_special(password)) {
printf("Error: Password must contain at least one special character.\n");
} else {
printf("Re-enter your password: ");
scanf("%s", password);
if (strcmp(password, password) == 0) {
printf("You know what? You can be a great programmer. Keep Coding!");
} else {
printf("Error: Incorrect password");
}
}

return 0;
}
