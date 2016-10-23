#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("minutes: ");
    int m = GetInt();
 
    int b = (m * 1.5 * 128)/16;
    printf("bottles: %i\n", b);
}
