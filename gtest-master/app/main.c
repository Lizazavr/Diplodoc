#include <stdio.h>

#include "myfunc.h"
#include "abc.h"

int main()
{
    printf("Hello World!\n");

    double a,b,c;
    printf("Введите a,b,c: \n");
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    printf("(%lf)*x*x+(%lf)*x+(%lf)=0\n",a,b,c);

    abc(a,b,c);

    return myfunc(2);
}

