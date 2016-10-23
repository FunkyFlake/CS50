#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//starting points for ascii alphabet
#define UPPER 65
#define LOWER 97

int keygetter();

int main(int argc, string argv[])
{
    //check for correct main input
    if(argc != 2)
    {
        printf("Bad input, try again like this: ./caesar keystring\n");
        return 1;
    }
    for(int x = 0, y = strlen(argv[1]); x < y; x++)
    {
        if(!(isalpha(argv[1][x])))
        {
            printf("Please enter letters only!\n");
            return 1;
            break;
        }
    }
    
    string uinput = argv[1];
    string enc = GetString();
    
    int k;
    //cycles for encription of every letter
    for(int i = 0, p = 0, n = strlen(enc); i < n; i++, p++)
    {
        k = keygetter(p, uinput);
        //encrypts for uppercase letter
        if(isupper(enc[i]) && isalpha(enc[i]))
        {
            if((enc[i] + k) >= UPPER && (enc[i] + k) <= UPPER + 25)
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
        //prints spaces and symbols in encription
        else
        {
            printf("%c",enc[i]);
            p--;
        }
    } //close for
    printf("\n");
    return 0;
} //close main

int keygetter(int p, string uinput) 
{
    int k;
    int m = strlen(uinput);
    p = p % m;
    int a = uinput[p];
    if(a >= UPPER && a <= UPPER + 25)
    {
        k = (a - UPPER) % 26;
    }
    else
    {
        k = (a - LOWER) % 26;
    }
    return k;
}