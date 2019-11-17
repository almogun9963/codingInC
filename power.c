#include <stdio.h>
#define e 2.71828;
// power between 2 numbers
double Pow(double x , int y) 
{
    double z = 1;
    if(y < 0)
    {
        y = y * -1;
        for (int i = 0; i < y; i++) 
        {
            z = z * x;   
        }
        return 1/z;
    }
    else
    {
        for (int i = 0; i < y; i++) 
        {
            z = z * x;   
        }
        return z;
        
    }
    
}
//e^x
double Exp(int x)
{
    double z = 1;
    if(x < 0)
    {
        x = x * -1;
        for (int i = 0; i < x; i++) 
        {
            z = z * e;   
        }
        return 1/z;
    }
    else
    {
        for (int i = 0; i < x; i++) 
        {
            z = z * e;   
        }
        return z;
        
    }
    
}

