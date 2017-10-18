//
//  zad_8.c
//  
//
//  Created by Student on 18.10.2017.
//
//

#include <stdio.h>

int silnia(int);

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d\n", silnia(a));
    return 0;
}

int silnia(int a)
{
    if(a == 0) return 1;
    else return silnia(a-1)*a;
}
