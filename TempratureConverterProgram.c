#include <stdio.h>
int main(){
    
    char choice = '\0';
    float farhenheit = 0.0f;
    float celsius = 0.0f;

    printf("Temprature Conversion Program\n");
    printf("C. Celsius to Farhenheit\n");
    printf("F. Farhenheit to Celsius\n");
    printf("Is the temp in Celsius (C) or Farhenheit (F)?: ");
    scanf("%c",&choice);

    if(choice == 'C'){
        printf("Enter the temperature in celsius: ");
        scanf("%f", &celsius);
        farhenheit = (celsius * 9/5) + 32;
        printf("%.1f Celsius is equal to %.1f Farhenheit", celsius, farhenheit);
    }
    else if(choice == 'F'){
        printf("Enter the temperature in farhenheit: ");
        scanf("%f",&farhenheit);
        celsius = (farhenheit - 32) * 5 / 9;
        printf("%.1f Farhenheit is equal to %.1f Celsius", farhenheit, celsius);
    }
    else{
        printf("Invlaid choice! please select C or F.");
    }

    return 0;
}