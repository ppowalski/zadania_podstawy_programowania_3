//
//  zad_4.c
//  
//
//  Created by Student on 18.10.2017.
//
//

#include <stdio.h>

void kwadraty(int);

int main()
{
    int a;
    scanf("%d", &a);
    kwadraty(a);
    return 0;
}

void kwadraty(int a)
{
    int i;
    for(i=1; i<a; i++)
    {
        if(i%2 != 0)
        {
            printf("%d\n", i*i);
        }
    }
}
