//
//  zad_6.c
//  
//
//  Created by Student on 18.10.2017.
//
//

#include <stdio.h>

int potega_2(int);

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d\n", potega_2(a));
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
