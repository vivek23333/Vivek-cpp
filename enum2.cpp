#include<iostream>
using namespace std;
    enum level{
        low =25,
        medium,
        high,
    };
    int main(){
        enum level myvar = medium;
        switch(myvar){
            case 25:
            cout<<"Low level ";
            break;
            case 26:
            cout<<"medium level";
            break;
            case 27:
            cout<<"High level ";
            break;
        }
    }
    
