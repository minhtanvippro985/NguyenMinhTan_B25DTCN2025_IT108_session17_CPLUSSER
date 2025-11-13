#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define GREEN   "\x1b"
int main() {
    char password[100];
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

    printf("mat khau: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0'; 

    for (int i = 0; password[i] != '\0'; i++) {
        if (isupper(password[i]))
            hasUpper = 1;
        else if (islower(password[i]))
            hasLower = 1;
        else if (isdigit(password[i]))
            hasDigit = 1;
        else
            hasSpecial = 1; 
    }

    int length = strlen(password);


    if (length >= 8 && hasUpper && hasLower && hasDigit && hasSpecial) {
        printf( GREEN "way to go champ\n");
    } else {
        printf("khong hop le\n");

        if (length < 8)
            printf(" phai co it nhat 8 ky tu\n");
        if (!hasUpper)
            printf("thieu chu hoa A-Z\n");
        if (!hasLower)
            printf("thieu chu thuong a-z\n");
        if (!hasDigit)
            printf("thieu chu so\n");
        if (!hasSpecial)
            printf("thieu ky tu dac biet\n");
    }

    return 0;
}
