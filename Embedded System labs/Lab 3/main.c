#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <Windows.h>
#include <signal.h>
int input;

void sigintHandler(int sig_num)
{
    /* Reset handler to catch SIGINT next time.
       Refer http://en.cppreference.com/w/c/program/signal */
    signal(SIGINT, sigintHandler);
    printf("\n Enter input number \n");
    scanf("%d", &input);
}
int main()
{
    signal(SIGINT,sigintHandler);
   char trainAstisk [50] ={'*','*','*','*','*'};
   int i;

    int j;
    int k =0;
printf("To start the train push one the buttons\n");
printf("1:Button to go Forward\n");
printf("2:Button to stop\n");
printf("3:Button to go reverse\n");
scanf("%d",&input);

switch(input){

case 1:
   while(input == 1){
    for(i = 0; i<50; i++){
    printf("%c",trainAstisk[i]);

    }
    printf("\n");
    printf("LCD: Forward");


    for(j = 50; j>=0;j--){

        if(trainAstisk[j] == '*'){
            trainAstisk[j+1] = trainAstisk[j];
            trainAstisk[j]=0;
            if(trainAstisk[50] == '*'){
                trainAstisk[0] = trainAstisk[50];
                trainAstisk[50]=0;
            }
        }
    }
Sleep(100);

system("cls");
    if(input != 1){
        break;
    }

   }

   break;
case 2:
    break;



}
    return 0;
}
