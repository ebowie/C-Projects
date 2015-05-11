// code is in c++ , we'll need to convert it to C.

//This is the first part of the project.
// I finally managed to work out the code perfectly so it guesses the correct number
// Next step is to create the linked list



#include <iostream>
using namespace std;

int main(){
    int x;
    int a;
    int b;
    int c;
    string status;


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
    if (status == "Lower"){


           x = a;
            a = b;
            b = a -(abs(x-(a-1))/2);
            c = a+(abs(x-(a-1))/2);
            cout<<i+1<<". "<<a<<" ----> Higher, Lower, or Correct ?";
            cin >> status;

            }

    else if (status == "Higher"){
            x = a;
            a = c;
            b = x + (abs(a-(x-1))/2);
            c = a + (abs(a-(x-1))/2);
            cout<<i+1<<". "<<a<<" ----> Higher, Lower, or Correct ?";
            cin>>status;


            }
    else {
        cout<<"END!";
        i=9;
    }

}


    cout<<"\n\n\n";
    return 0;}
