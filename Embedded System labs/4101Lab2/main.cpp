#include <iostream>

using namespace std;
int guessNum;
#define number 50;
#define number2 25;
#define number3 75;
#define number4 13;

#define one 1;
#define two 2;
#define three 3;
#define four 4;
#define five 5;
#define six 6;
#define seven 7;
#define eight 8;


int fifty = number;
int twentyFive = number2;
int seventyFive = number3;
int input;
int storage;
int num = number;
int count = 1;

int getCount();

int one1 = one;
int two2 = two;
int three3 = three;
int four4 = four;
int five5= five;
int six6 = six;
int seven7 = seven;
int eight8 = eight;
int thirdteen = number4;


struct node {
    int x;
    node *next;
};

int main()
{
 node *mainNode;
 node *nextNode;

 mainNode = new node;
 mainNode-> next=0;
 mainNode-> x=number;

 nextNode = mainNode;
  if ( nextNode != 0 ) {
    while ( nextNode->next != 0)
      nextNode = nextNode->next;
  }
cout<<"User enter a guess number for the computer."<<endl;
cin>>guessNum;

do {





cout<<"Question:"<<count + 1<<endl;
cout<<num<<":is it lower,higher, or correct?"<<endl;
cout<<"1. Lower"<<endl;
cout<<"2. Higher"<<endl;
cout<<"3. Correct"<<endl;
cin>>input;

   num = getCount();

if(input != three3){
nextNode->next = new node;
  nextNode = nextNode->next;
  nextNode->next = 0;
  nextNode->x = num;
}

}while(input != three3);
cout<<"Good Job Number is:"<<storage<<endl;
nextNode = mainNode;
while ( mainNode != NULL ) {
  cout<< nextNode->x<<endl;;
  nextNode = nextNode->next;
}
nextNode = mainNode;
while ( nextNode != NULL ) {
        nextNode->x=0;

  nextNode = nextNode->next;
}

return 0;
}



 int getCount()
 {
     count++;
    int numChange;
    switch(input){
case 1:
        if(count == two2){
            numChange = twentyFive;
        }
        else if(count == three3){
             numChange = num - thirdteen;
        }
        else if(count == four4){
         numChange = num - six6;
        }
        else if(count == five5){
            numChange = num - three3;
        }
        else if ( count == six6){
            numChange = num - two2;
        }
        else if(count == seven7)
        {
            numChange = num -one1;

        }

    break;
case 2:
        if(count == two2){
            numChange = seventyFive;
        }
        else if(count == three3){
             numChange = num + thirdteen;
        }
        else if(count == four4){
         numChange = num + six6;
        }
        else if(count == five5){
            numChange = num + three3;
        }
        else if ( count == six6){
            numChange = num + two2;
        }
        else if(count == seven7)
        {
            numChange = num +one1;

        }

    break;
case 3:
    break;
default:;
}
if(input != three3){
storage = numChange;
}
 return storage;


}
