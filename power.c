    #include <stdio.h>
    #include "myMath.h"
    #define E 2.71828
    double ans; 
    int i; 
    
    double Pow(double x, int y)
    {

    double ans =1;
    int i=0;
    if(y>0){
    for(i=0; i<y ; i++)
    {
        ans = ans*x;
    }
        
    }else{
        for(i=0; i<-y ; i++)
    {
        ans = ans*x;
    }
    
    ans = 1.0/ans;
        
    }
    return ans;
    }

    double Exp(int x){

    return Pow(E,x);
    
    }


