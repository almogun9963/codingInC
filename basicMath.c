#include <stdio.h>
//add float to floar
float add(float x , float y)
{
    return x + y;
}

//minus float from float
float sub(float x , float y)
{
    return x - y;
}

//mulitpy double with int
double mul(double x , int y)
{
    return y*x; 
}

//divide a number with a number
double div(double x, int y)
{
    if(y==0)
    {
        printf("can't divide number with \n" );
        return 0;
    }
    return x/y;
}

