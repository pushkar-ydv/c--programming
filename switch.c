#include <stdio.h>
int main(){

    char dayofWeek = '\0';

    printf("Enter a day of the week(M, T, W, R, F, S, U): ");
    scanf("%c",&dayofWeek);

    switch(dayofWeek){
        case 'M':
        printf("It is Monday.");
        break;
        case 'T':
        printf("It is Tuesday.");
        break;
        case 'W':
        printf("It is Wednesday."); 
        break;
        case 'R':
        printf("It is Tursday.");
        break;
        case 'F':
        printf("It is Friday.");
        break;
        case 'S':
        printf("It is Saturday.");
        break;
        case 'U':
        printf("It is Sunday.");
        break;
        default:
        printf("Please only enter a character (M, T, W, R, F, S, U)");
    }
    

    return 0;
}