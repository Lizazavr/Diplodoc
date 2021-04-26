#include <stdio.h>
#include <math.h>
#include <inttypes.h>
#include "myfunc.h"
#include "abc.h"

solution abc(double a, double b, double c){
    solution help;
    help.d = help.r = 0;
    help.d = b*b-4*a*c;
    if(help.d>0){
    help.x=(-b+sqrt(help.d))/(2*a);
    help.x1=(-b-sqrt(help.d))/(2*a);
    help.r=2;
    printf("%f\n%f\n",help.x,help.x1);
    return help;
    }
    else if(help.d==0){
    help.x=(-b)/(2*a);
    help.r=1;
    printf("%f\n",help.x);
    return help;
    }
    else if(help.d<0){
    printf("Корней нет\n");
    return help;
    }
    return help;
}
