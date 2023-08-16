#include<iostream>
using namespace std;



int addition (int a ,int b){

int sum = a + b;
return sum ;
}



int substraction (int a , int b){

int difference = a -b;
return difference;

}



int multiplication (int a ,int b){

int product = a *b;
return product;

}


int division (int a ,int b ){

    int quotient= a/b;
    return quotient;
}


int main(){


cout<<"What would you like to do ? +,-,* or /";
char sym;
cin>>sym;
if ( sym == '+'){
 cout<<"What would you like to add ";
 int a ;
 int b;
 cin>>a;
 cin>>b;
 cout<<addition(a,b);
}
else if ( sym == '-'){
 cout<<"What would you like to subtract ";
 int a ;
 int b;
 cin>>a;
 cin>>b;
 cout<<substraction(a,b);
}
else if ( sym == '*'){
 cout<<"What would you like to multiply ";
 int a ;
 int b;
 cin>>a;
 cin>>b;
 cout<<multiplication(a,b);
}


else if ( sym == '/'){
 cout<<"What would you like to divide";
 int a ;
 int b;
 cin>>a;
 cin>>b;
 cout<<division(a,b);
}

else {
    cout<< "Wrong operator";
}
}