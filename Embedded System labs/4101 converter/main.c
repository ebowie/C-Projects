#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int getNUM();
#define string_length 50
int main()
{
//typedef struct node node;
struct node {
    char data[50];
    struct node* link;
    };

struct node* head;
struct node* t;
struct node* n;
char *word[50];//  check this

int p = getNUM();

n = malloc( sizeof(struct node));//check this
head = n;
int i;
for(i=0;i<p;i=i+1){

    printf("Enter word %d %s",i+1,": ");
    scanf("%s",&word);
    n->data = word;
    t = n;
    n =malloc( sizeof(struct node));//check this
    t->link =n;


   // cout<<"Value "<<i+1<<": "<<t->data<<endl;


}  // end inputting strings

//start sorting process
int z;
struct node* temp[p];
for( z=0;z<p;z++){
struct node* temp[z];}          //this loop creates p number of node pointers

temp[0] = head;
//temp[1] = temp[0]->link;
//temp[2] = temp[1]->link;
int y;
for( y=1;y<p+1;y++){             //this loop assigns each node a node variable
    temp[y] = temp[y-1]->link;
}char *x[50];
int zz;
int q;
int aa;
    for ( zz=0;zz<p;zz++){
    for ( q=0;q<p;q++){              //this loop sorts the data alphebetically
if (temp[q+1]->data > temp[q]->data)
    {   x = temp[q]->data;
        temp[q]->data = temp[q+1]->data;
        temp[q+1]->data = x;
    }}}printf("\n");
    printf("sorted:\n");             //displays sorted data
    for( aa=p-1;aa>-1;aa--){
    printf("%d %s",aa+1,". ",temp[aa]->data,"/==\n");
    }
printf("\n\n");

    return 0;
}

int getNUM(){

    //start guess number func.
    int x;
    int a;
    int b;
    int c;
    char *status[50];
    int number;

    a =50;
    b =25;
    c =75;
    x =0;
     printf("%d %s 1. ",a," ----> Higher, Lower, or Correct ?");
    scanf("%s",&status);
int i=0;
while (i<9){
        i++;
//cout<<"                x = "<<x<< " a = "<<a<<" b = "<<b<<" c = "<<c<<"\n";
    if ((status == "Lower")||(status == "lower") || (status =="l")|| (status == "L")){


            x = a;
            a = b;
            b = a -(abs(x-(a-1))/2);
            c = a+(abs(x-(a-1))/2);
            printf("%d %s",i+1,". ",a," ----> Higher, Lower, or Correct ?");
			scanf("%s",&status);

            }

    else if ((status == "Higher")||(status == "higher")||(status =="h") ||(status == "H")){
            x = a;
            a = c;
            b = x + (abs(a-(x-1))/2);
            c = a + (abs(a-(x-1))/2);
            printf("%d %s",i+1,". ",a," ----> Higher, Lower, or Correct ?");
            scanf("%s",&status);


            }
    else if ((status =="correct") || (status == "Correct") || (status == "c") || (status == "C")){

        number = a;
    }
    else {
        printf("END!");
        i=9;
    }

}


    printf("\n\n\n");
    printf("%d",number," words: ");

    //end guess number func.
    // start the linked list here:
printf("\n\n\n");
    return number;}
