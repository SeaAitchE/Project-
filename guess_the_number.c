#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int number,guess,no_guess=1;
srand(time(NULL));
number=rand()%15+1;
printf("guess the number between 1 to 15\n");
do
{
    scanf("%d", &guess);
    if (guess>number)
    {
        printf("lower number \n");
    }
    else if (guess<number)
    {
        printf("higher number \n");
    }
    else
    {
        printf("you guessed it in %d attempts\n", no_guess);
    }
    no_guess++;
    
} while (guess!=number);
switch(no_guess-1){
    case 1 : printf("GOD level , are you ryuk???");
    break ;
    case 2 : printf("Only 2 guesses ???? legend");
    break ;
    case 3 : printf("meh!");
    break ;
    case 4 : printf("pfft....!!");
    break ;
    case 5 : printf("even saitama's enemies have better luck than you");
             printf("\n NOOOOOOOOB ;)");
    break ;
    default :
    {printf("this game ain't for you little kiddo > _ < ");
    printf("\n NOOOOOOOOB ;)");}
    
}
return 0;
}
