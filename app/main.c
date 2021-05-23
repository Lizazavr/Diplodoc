#include <stdio.h>

#include "myfunc.h"
#include "abc.h"

int main()
{
    printf("Hello World!\n");
//что-то
    double a=0,b=0,c=0;
    printf("Введите a,b,c: \n");
    if((scanf("%lf",&a)==1)&&
    (scanf("%lf",&b)==1)&&
    (scanf("%lf",&c)==1)){
    printf("(%lf)*x*x+(%lf)*x+(%lf)=0\n",a,b,c);
    }else{
        printf("Failed to read integer.\n");
    }

    abc(a,b,c);

    return myfunc(2);
}

