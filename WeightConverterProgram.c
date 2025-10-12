#include <stdio.h>
int main(){

    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d",&choice);

    if(choice == 1){
        // Kilograms to Pounds
        printf("Enter the weight in kilogrms: ");
        scanf("%f",&kilograms);
        pounds = kilograms * 2.2062;
        printf("%.2f kilograms is equal to %.2f pounds", kilograms, pounds);
    }
    else if(choice == 2){
        // Pounds to Kilograms
        printf("Enter the weight in pound: ");
        scanf("%f",&pounds);
        kilograms = pounds / 2.2062;
        printf("%.2f pounds is equal to %.2f kilograms", pounds, kilograms);
    }
    else{
        printf("Invalid choice! please enter 1 or 2.\n");
    }

    return 0;
}