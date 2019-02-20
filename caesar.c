#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])

{
    if (argc != 2)
    {
        printf("print the key \n");
        return 1;
    }

    int key = atoi(argv[1]);

    string p = get_string("get your sentence to code \n");

    for (int i = 0, n = strlen(p); i < n; i++)
    {
        if (isupper (p[i]))
        {
            printf("%c", (char) (((p[i] - 65 + key) % 26) + 65));
        }
        else if (islower (p[i]))
        {
            printf("%c", (char) (((p[i] - 97 + key) % 26) + 97));
        }
        else
        {
            printf("%c", p[i]);
        }

    }

printf("\n");

}
