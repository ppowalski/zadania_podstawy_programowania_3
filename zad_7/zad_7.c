//
//  zad_7.c
//  
//
//  Created by Student on 18.10.2017.
//
//

#include <stdio.h>

int argument(int);

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d\n", argument(a));
    return 0;
}

int argument(int a)
{
    if(a <= 0 || a == 10)
    {
        return 0;
    }
    else return 2*argument(a-1)+argument(a-2) + 5;
}
