#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//starting points for ascii alphabet
#define UPPER 65
#define LOWER 97

int main(int argc, string argv[])
{
    //check for correct main input
    if(argc != 2)
    {
        printf("Bad input, try again like this: ./caesar x");
        return 1;
    }
    else
    {
        int k = atoi(argv[1]);
        k = k % 26;
        string enc = GetString();
        
        //cycles for encription of every letter
        for(int i = 0, n = strlen(enc); i < n; i++)
        {
            //encrypts for uppercase letter
            if(isupper(enc[i]) && isalpha(enc[i]))
            {
                if((enc[i] + k) >= UPPER && (enc[i] + k) <= UPPER +25)
                {
                    enc[i] = enc[i] + k;
                    printf("%c", enc[i]);
                }
                else
                {
                    enc[i] = enc[i] + k - 26;
                    printf("%c", enc[i]);
                }
            }
            //encrypts for lowercase letter
            else if(islower(enc[i]) && isalpha(enc[i]))
            {
                if((enc[i] + k) >= LOWER && (enc[i] + k) <= LOWER +25)
                {
                    enc[i] = enc[i] + k;
                    printf("%c", enc[i]);
                }
                else
                {
                    enc[i] = enc[i] + k - 26;
                    printf("%c", enc[i]);
                }
            }
            //prints spaces in encription
            else
            {
                printf("%c",enc[i]);
            }
        }
        printf("\n");
    }
    return 0;
}