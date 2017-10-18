//
//  zad_9.c
//  
//
//  Created by Student on 18.10.2017.
//
//

#include <stdio.h>

int argument(int);
int potega_2(int);

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d\n", argument(a));
    return 0;
}

int potega_2(int a)
{
    if(a == 1)
    {
        return 2;
    }
    else
    {
        return (potega_2(a-1)) * 2;
    }
}

int argument(int a)
{
    if(a == 0) return 1;
    else if(a%2 == 0)
    {
        if(a == 1)
        {
            return 2;
        }
        else
        {
            return ((potega_2(a-1)) * 2) - 5;
        }
    }
    else
    {
        if(a == 1)
        {
            return 2;
        }
        else
        {
            return (potega_2(a-1)) * 2;
        }
    }}
