#include<stdio.h>
#include<math.h>
#define pi 3.14
int main() {
    float sum,term,x,degree;
    int i;
    printf("Enter the value in Degrees : ");
    scanf("%f",&degree);
    x=degree*(pi/180);
    //initializing
    sum=0;
    term=x;
    sum=term;
    i=3;
    while(fabs(term)>0.0001) {
        term=(-term*x*x)/(i*(i-1));
        sum=sum+term;
        i+=2;
    }
    printf("The Sine Value According to Taylor's Series for %f degree is %f\n",degree,sum);
    printf("The Sine Value According to System Library for %f degree is %f",degree,sin(x));
    return 0;
}