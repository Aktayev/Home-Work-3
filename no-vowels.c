// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    string s = get_string("before: \n");
    printf("after: \n");
    for (int i=0; i< strlen(s); i++)
    {
        if (s[i]=='a')
        {
            printf("%c", s[i]=54);
        }
        else if (s[i]== 'e')
        {
            printf("%c", s[i]=51);
        }
        else if (s[i]== 'i')
        {
            printf("%c", s[i]=49);
        }
        else if (s[i]== 'o')
        {
            printf("%c", s[i]=48);
        }
        else if (s[i]== 'u')
        {
            printf("%c", s[i]=117);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
