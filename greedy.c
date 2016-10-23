#include <stdio.h>
#include <cs50.h>
#include <math.h>


//prototype or smth like that...need to check what that means
float validFloat();

int main(void)
{
    float owe_dollar = validFloat();
    float owe_cent = owe_dollar * 100; //convert to cents
    int owe_cent_int = round(owe_cent);    //make remain an int
   
    int counter = 0; //counts amount of coins
    
    while(owe_cent_int > 0)
    {
        if (owe_cent_int >= 25)     //quarters are 25 cents
        {
            owe_cent_int = owe_cent_int - 25;
        }
        else if (owe_cent_int >= 10)     //dimes are 10 cents
        {   
            owe_cent_int = owe_cent_int - 10;
        }
        else if (owe_cent_int >= 5)  //nickels are 5 cents 
        {
            owe_cent_int = owe_cent_int - 5;
        }
        else if (owe_cent_int >= 1)
        {
            owe_cent_int = owe_cent_int - 1;
        }
        else
        {
            break;
        }
        counter++;
    } //close while
    printf("%d\n", counter);
}   //close main

//getting valid user input in dollars
float validFloat(void)
{
    float owe_dollar;
    printf("O hai! ");
    do
    {
        printf("How much change is owed?\n");
        owe_dollar = GetFloat();
    }while(owe_dollar < 0);
    
    return owe_dollar;
} //close validFloat