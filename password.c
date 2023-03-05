// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool valid(string password);

bool hasDownChar(string password)
{
   int y = strlen(password);
    for (int t=0; t<y; t++)
    {
        if ((int)password[t]>=97 && (int)password[t]<=122)
        {
            return 1;
        }

    }
    return 0;
}

bool hasUpChar(string password)
{
    int N = strlen(password);
    for (int k=0; k<N; k++)
    {
        if ((int)password[k]>=65 && (int)password[k]<=90)
        {
            return 1;
        }

    }
    return 0;
}

bool hasSymbol (string password)
{
    int N = strlen(password);
    for (int j=0; j<N; j++)
    {
        if ((int)password[j]>=33 && (int)password[j]<=47)
        {
            return 1;
        }

    }
    return 0;
}

bool hasnumber(string password)
{
    int N = strlen(password);
    for (int i=0; i<N; i++)
    {
        if ((int)password[i]>=48 && (int)password[i]<=59)
        {
            return 1;
        }

    }
    return 0;
}


int main(void)
{
   string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below

bool valid(string password)
{
    if (hasnumber(password) && hasSymbol(password) && hasUpChar(password) && hasDownChar(password))
    {
        return true;
    }

    return false;
}
