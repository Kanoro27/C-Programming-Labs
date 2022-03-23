#include<stdio.h>
#include<math.h>

int main() {
    float a,b,c,disc,r1,r2,rp,ip;
    printf("Enter the coefficients a, b and c : ");
    scanf("%f""%f""%f",&a,&b,&c);
    if (a==0) {
        printf("Coefficient of this variable cannot be Zero");
        printf("\nPlease try again later...");
        return 1;
        }
        disc=b*b-(4*a*c);
        if (disc==0) {
          printf("The Roots are Real and Equal\n");
          r1=r2=-b/(2*a);
          printf("The two roots are r1=r2=%.2f\n",r1);
        }
        else if (disc>0) {
          printf("The Roots are Real and Distinct\n");
          r1=(-b+(sqrt(disc))/(2*a));
          r2=(-b-(sqrt(disc))/(2*a));
          printf("the roots are r1=%.2f and r2=%.2f",r1,r2);
        }
        else {
          printf("The Roots are Imaginary\n");
          rp=-b/(2*a);
          ip=sqrt(-disc/(2*a));
          printf("The Root r1=%.2f+i%.2f\n",rp,ip);
          printf("The Root r2=%.2f-i%.2f",rp,ip);

        }
}