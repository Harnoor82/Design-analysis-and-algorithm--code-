//Write a program using a while loop that repeatedly asks the user to enter the password and stops only when the correct password is entered. Finally, display "Login successful!"

#include <stdio.h>
#include <string.h>

int main()
{
    char password[20];

    while (1)
    {
        printf("Enter password: ");
        scanf("%s", password);

        if (strcmp(password, "12345") == 0)
        {
            break;
        }

        printf("Wrong password! Try again.\n");
    }

    printf("Login successful!");

    return 0;
}



//Password:- 12345 
