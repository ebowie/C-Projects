// final step: convert to c code.
#include <iostream>
using namespace std;

int getNUM();

int main(){

struct node {
    string data;
    node* link;
    };

node* head;
node* t;
node* n;
string word;

int p = getNUM();

n = new node;
head = n;
for(int i=0;i<p ;i++){

    cout<<"Enter word "<<i+1<<": ";
    cin>>word;
    n->data = word;
    t = n;
    n = new node;
    t->link =n;


   // cout<<"Value "<<i+1<<": "<<t->data<<endl;


}  // end inputting strings

//start sorting process

node* temp[p];
for(int z=0;z<p;z++){
node* temp[z];}          //this loop creates p number of node pointers

temp[0] = head;
//temp[1] = temp[0]->link;
//temp[2] = temp[1]->link;

for(int y=1;y<p+1;y++){             //this loop assigns each node a node variable
    temp[y] = temp[y-1]->link;
}string x;/*
if (temp[0]->data > temp[1]->data) cout << "a bigger";
string x;

if (temp[1]->data < temp[0]->data)
    {   x = temp[0]->data;
        temp[0]->data = temp[1]->data;
        temp[1]->data = x;
    }
if (temp[2]->data < temp[1]->data)
    {   x = temp[1]->data;
        temp[1]->data = temp[2]->data;
        temp[2]->data = x;
    }*/
    for (int zz=0;zz<p;zz++){
    for (int q=0;q<p;q++){              //this loop sorts the data alphebetically
if (temp[q+1]->data > temp[q]->data)
    {   x = temp[q]->data;
        temp[q]->data = temp[q+1]->data;
        temp[q+1]->data = x;
    }}}cout<<endl;
    cout<<"sorted: "<<endl;             //displays sorted data
    for(int aa=p-1;aa>-1;aa--){
    cout<<aa+1<<". "<<temp[aa]->data<<endl;
    }
cout<<endl<<endl;

    return 0;}



    int getNUM(){

    //start guess number func.
    int x;
    int a;
    int b;
    int c;
    string status;
    int number;

    a =50;
    b =25;
    c =75;
    x =0;
     cout<<"1. "<<a<<" ----> Higher, Lower, or Correct ?";
    cin>>status;
int i=0;
while (i<9){
        i++;
//cout<<"                x = "<<x<< " a = "<<a<<" b = "<<b<<" c = "<<c<<"\n";
    if ((status == "Lower")or(status == "lower") or (status =="l")or (status == "L")){


           x = a;
            a = b;
            b = a -(abs(x-(a-1))/2);
            c = a+(abs(x-(a-1))/2);
            cout<<i+1<<". "<<a<<" ----> Higher, Lower, or Correct ?";
            cin >> status;

            }

    else if ((status == "Higher")or(status == "higher") or (status =="h") or (status == "H")){
            x = a;
            a = c;
            b = x + (abs(a-(x-1))/2);
            c = a + (abs(a-(x-1))/2);
            cout<<i+1<<". "<<a<<" ----> Higher, Lower, or Correct ?";
            cin>>status;


            }
    else if ((status =="correct") or (status == "Correct") or (status == "c") or (status == "C")){

        number = a;
    }
    else {
        cout<<"END!";
        i=9;
    }

}


    cout<<"\n\n\n";
    cout<<number<<" words: ";

    //end guess number func.
    // start the linked list here:

    cout<<endl<<endl<<endl;
    return number;}
