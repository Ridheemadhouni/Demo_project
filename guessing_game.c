#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int random_num = (rand()% 100) +1;
    int num ;
    int attempt = 0;
    int won = 0;
    printf("============ Number Guessing Game ===========\n");
    printf("Guess a number between 1 and 100\n");
    while(1){

    printf("enter your number: ");
     if(scanf("%d", &num) != 1) {
    printf("Invalid input!\n");
    break;
    }
    attempt++;
    if(num<random_num){
        printf("tooo low!!\n");
    }else if(num>random_num){
        printf("too high!!!\n");
    }else{
        printf("correct guess!!!\n");
        printf("total number of attempt is : %d \n",attempt);
        won = 1;
        break;
        
    }
    
 } if (won){
    if(attempt <= 5){
    printf("Excellent!!!\n");
     } else if(attempt <= 10){
    printf("Good job!!!\n");
       }  else {
    printf("Keep practicing!!!!\n");
       } }
    return 0;
}