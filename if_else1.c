#include <stdio.h>
int main(){

     int age;

     printf("Enter your age: ");
     scanf("%d",&age);
     
     if(age >= 65){
        printf("You are a senior citizen");
    }
     else if(age>=18){
        printf("You are an adult");
     }
     else if(age == 0){
        printf("You are a new born");
     }
     else if(age < 0){
        printf("you haven't been born yet");
     }
     else{
        printf("You are a child");
     }
    return 0;
}
