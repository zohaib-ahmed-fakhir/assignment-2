#include <stdio.h>
#include <conio.h>

void main() {
    char username[20];
    char password[20];
	printf("\t================ LOGIN PAGE ===============\n");
    printf("\n\n\t\t     Enter username: ");
    scanf("%19s", username);

    printf("\t\t     Enter password: ");
    scanf("%19s", password);

    if (strcmp(username, "admin") == 0 && strcmp(password, "1234") == 0) {
        printf("\t\t     Login Successful\n");
    } else {
        printf("\t\t     Login Failed\n");
    }
	printf("\n\n\t===========================================\n\n\n\n\n\n\n");
}


