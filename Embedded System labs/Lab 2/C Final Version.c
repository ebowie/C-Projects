#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int getNUM();       //First part of the project
int main()
{

struct node {
    char data[50];
  struct  node* link;
    };

struct node* head;
struct node* t;
struct node* n;
char word[50];

int p;
p = getNUM();

n = ( struct node* ) malloc (sizeof( struct node));//check this
head = n;
 //creating and filling the linked list
int i;
for(i=0 ; i<p ; i++){

    printf("Enter word %d: ",i+1);
    scanf("%s",&word);
    strcpy (n->data , word);
    t = n;
    n = ( struct node* ) malloc (sizeof( struct node));
    t->link =n;
    }

    //start sorting process

           //third part of project
struct node* temp[p];
int z;
for(z=0;z<p;z++){
struct node* temp[z];}          //this loop creates p number of node pointers

temp[0] = head;

int y;
for(y=1;y<p+1;y++){             //this loop assigns each node a node variable
    temp[y] = temp[y-1]->link;
}

char x[50];
int zz;
int q;
    for (zz=0;zz<p;zz++){
    for (q=0;q<p;q++){              //this loop sorts the data alphebetically
//if (temp[q+1]->data > temp[q]->data)
if ( (strcmp(temp[q+1]->data, temp[q]->data )== 1)) {

       strncpy( x , temp[q]->data,50);
        strncpy (temp[q]->data , temp[q+1]->data,50);
        strncpy (temp[q+1]->data , x,50);
   }}}



    printf("\n\n");
    printf("sorted: \n");
   int aa;          //displays sorted data
   int u=0;
    for(aa=p-1;aa>-1;aa--){
            u++;
        printf("%d. %s \n",u,temp[aa]->data);
    }
    return 0;}





    int getNUM(){

    //start guess number func.
    int x;
    int a;
    int b;
    int c;
    char status[50];
    int number;

    a =50;
    b =25;
    c =75;
    x =0;
     printf("1. %d ----> Higher, Lower, or Correct ?",a);
    scanf("%s", &status);
int i=1;
while (i<8){
        i = i +1;

   if ( (strcmp(status, "lower" )== 0)){


            x = a;
            a = b;
            b = a -(abs(x-(a-1))/2);
            c = a+(abs(x-(a-1))/2);
           printf("%d. %d ----> Higher, Lower, or Correct ?",i,a);

			scanf("%s", &status);

            }

    else if ((strcmp(status, "higher" )== 0)){
            x = a;
            a = c;
            b = x + (abs(a-(x-1))/2);
            c = a + (abs(a-(x-1))/2);
            printf("%d. %d ----> Higher, Lower, or Correct ?",i,a);
			scanf("%s", &status);;


            }
    else if ((strcmp(status, "correct" )== 0)){

        number = a;
    }
    else {
        printf("END!");
        i=9;
    }

}


    printf("\n\n\n");
    printf("%d words: ",number);

    //end guess number func.
    // start the linked list here:
printf("\n\n\n");

    return number;


}
