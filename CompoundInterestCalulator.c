#include <stdio.h>
#include <math.h>
int main(){

    //Compund Interest Calculator
     
    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompound = 0;
    double total = 0.0;

    printf("Compunt Interest Calculator");

    printf("Enter the principal(P): ");
    scanf("%lf",&principal);

    printf("Enter the interest rate % (r): ");
    scanf("%lf",&rate);
    rate = rate / 100;

    printf("Enter the number of years (t): ");
    scanf("%d",&years);

    printf("Enter # of times compound per year (n): ");
    scanf("%d",&timesCompound);

    total = principal * pow(1 + rate/timesCompound, timesCompound * years );

    printf("After %d years, total will be $%.2lf", years, total);

    return 0;
}