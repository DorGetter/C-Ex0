    #include <stdio.h>
    #include "myMath.h"
    #define E 2.71828

    int main(){

    float ans;
    float x;
    printf("\nHello and welcome! \nFollow the instructions to get the results\n");

    printf("please enter a real number: ");
    scanf("%f", &x);
    printf("\n");

    printf("\t i) This function will calculate f(x) = e^x + x^3 - 2 \n");
    ans = sub(add(Pow(E,x),Pow(x,3.0)),2);
    printf("\t ans: %0.4f \n",ans);

    printf("\tii) This function will calculate f(x) = 3x + 2x^2 \n");
    ans = add(mul(x,3),mul(Pow(x,2),2));
    printf("\t ans: %0.4f \n",ans);

    printf("\t iii) This function will calculate f(x) = (4x^3)/5 -2x \n");
    ans = sub(div(mul(Pow(x,3),4),5),mul(x,2));
    printf("\t ans: %0.4f \n",ans);

    return 0;
    }
