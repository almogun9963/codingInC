#include <stdio.h>
#include "myMath.h"
int main()
{
    double i;
    double ans;
    double secondAns;
    //first answer
    printf ("Input a number: ");
    scanf("%le", &i);
    ans = Exp((int)i) + Pow(i , 3) - 2;
    printf ("the value of f(x) = e^x + x^3 - 2 at the point %f" ,i);
    printf(" is: %0.4f" , ans );
    //second answer
    printf ("\n\nInput a number: ");
    scanf("%le", &i);
    ans = mul(3 , i) + mul(Pow(i , 2) , 2);
    printf("the value of f(x) = 3x + 2X^2 at the point %f" , i);
    printf(" is: %0.4f" , ans);
    //thrid answer
    printf ("\n\nInput a number: ");
    scanf("%le", &i);
    secondAns = mul(Pow(i , 3) , 4);
    ans = div(secondAns , 5) - mul(i , 2);
    printf("the value of f(x) = (4x^3)/5 -2x  at the point %f" , i);
    printf(" is: %0.4f" , ans);
}