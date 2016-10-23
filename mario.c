#include <stdio.h>
#include <cs50.h>

int validInt();
int main(void)
{
    int h = validInt();  //get height
    if(h!=0)
    {
        for(int i=0; i<h; i++)  //print height rows
        {
            for(int j=0; j <= (h-2-i); j++)
            {
            printf(" ");
            }   //close for space
            for(int k=0; k<(i+2); k++)
            {
            printf("#");
            }   //close for #
            printf("\n");
        }   //close height print
    }   //close if
}   //close main

int validInt()
{
    int v;
    do{
        printf("height ");
        v = GetInt();
    }while(v < 0 || v > 23);
    return v;
}