//
//  zad_2.c
//  
//
//  Created by Student on 18.10.2017.
//
//

#include <stdio.h>

void dzielniki(int);

int main()
{
    int a;
    scanf("%d", &a);
    dzielniki(a);
    return 0;
}

void dzielniki(int a)
{
    int i;
    printf("Dzielniki: \n");
    for(i=a; i>0; i--)
    {
        if(a%i == 0)
        {
            printf("%d\n", i);
        }
    }
}
