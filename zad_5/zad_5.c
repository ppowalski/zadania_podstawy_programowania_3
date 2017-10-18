//
//  zad_5.c
//  
//
//  Created by Student on 18.10.2017.
//
//

#include <stdio.h>

int fib(int);

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d\n", fib(a));
    return 0;
}

int fib(int a)
{
    if(a<=1)
    {
        return a;
    }
    else
    {
        return fib(a-1)+ fib(a-2);
    }
}
