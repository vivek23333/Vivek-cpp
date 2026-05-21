// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//      int n;
//     cout<<"enter number1 : ";
//     cin>>a;
//     cout<<"enter number2 : ";
//      cin>>b;
//     cout<<"enter n (+,-,/,*) : ";
//     cin>>n;
//     if(n=='+'){
//         cout<<" number is "<<a+b<<endl;
//     }
//     else if(n=='-'){
//         cout<<" number is "<<a-b<<endl;
//     }
//     else if(n=='*'){
//         cout<<" number is "<<a*b<<endl;
//     }
//     else if(n=='/'){
//         cout<<" number is "<<a/b<<endl;
//     }
//     else{
//         cout<<"invalid";
//     }
    
// }
#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch(op) {
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 / num2;
            else
                cout << "Division by zero not allowed";
            break;
        default:
            cout << "Invalid operator";
    }

    return 0;
}