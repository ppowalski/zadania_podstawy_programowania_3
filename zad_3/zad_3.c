//
//  zad_3.c
//  
//
//  Created by Student on 18.10.2017.
//
//

#include <stdio.h>

int suma(int);

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d\n", suma(a));
    return 0;
}

int suma(int a)
{
    int suma, i;
    for(i=1; i<=a; i++)
    {
        if(i%2 != 0)
        {
            suma += i;
        }
    }
    return suma;
}
