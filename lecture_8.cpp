#include<iostream>
using namespace std;

int main(){
char ch='a';
cout << endl;
switch (ch){
    case 1: cout << "First" << endl;
           break;
    case '1': cout << "Character ont" << endl;
           break;
    default : cout << "It is default case" << endl;
}
cout << endl;
return 0;
}