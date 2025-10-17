#include <stdio.h>
#include<string.h>
void happyBirthday(char name [], int age){

    printf("\nHAPPY BIRTHDAY TO YOU!");
    printf("\nHAPPY BIRTHDAY TO YOU!");
    printf("\nHAPPY BIRTHDAY dear %s!", name);
    printf("\nHAPPY BIRTHDAY TO YOU!");
    printf("\nYOU are %d years old!", age);

}

int main(){

    char name[50] = "";
    int age = 0;
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    
    printf("Enter your age: ");
    scanf("%d",&age);

    happyBirthday(name, age);

    return 0;
}