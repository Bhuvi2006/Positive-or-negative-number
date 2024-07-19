// Finding Positive or Negative number 
#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a); // "%d"- int , &a to store in a 
    if(a>0)
    {
        printf("The number is positive");
    }
    else if(a==0)
    {
        printf("The number is neither positive nor negative");

    }
    else
    {
        printf("The number is negative");
    }
}
