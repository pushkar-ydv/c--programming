#include <stdio.h>
#include <string.h>
int main(){
    //shoping cart program

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f; 

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price for each item?: ");
    scanf("%f",&price);
    printf("how many would you like?: ");
    scanf("%d",&quantity);

    total = price * quantity;
    
    printf("\nyou have bought %d %s\n", quantity, item);
    printf("The total is: %c%.2f", currency, total);


    return 0;
}
    