//
//  zad_1.c
//  
//
//  Created by Student on 18.10.2017.
//
//

#include <stdio.h>

float pole(float, float);

int main()
{
    float a, b;
    printf("Podaj wymiary a i b: ");
    scanf("%f %f", &a, &b);
    printf("%f\n", pole(a, b));
    return 0;
}

float pole(float a, float b)
{
    return (a*b)/2;
}
