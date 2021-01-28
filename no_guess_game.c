#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,nguess = 1;
    srand(time(0));
    number = rand()%20 + 1;//generate reandom number
    // printf("The random number is %d\n", number);

do
{
    printf("Guess the number bw 1 to 20\n");
    scanf("%d",&guess);
    if(guess>number){
        printf("Opps! Lower number please\n");
    }
    else if (guess<number)
    {
        printf("Opps! Higher number please\n");
    }
    else
    {
        printf("Hurrey! You are correct guessed it in %d attempts\n ", nguess);
    }
    nguess++;


} while (guess!=number);

 
    return 0 ;
}
