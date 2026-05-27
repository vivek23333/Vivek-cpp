//  #include<iostream>
//  using namespace std;
// // struct student{
// //     string name;
// //     int standard;
// //     int roll;
// //     float gpa;
// // };
// // void school(student s){
// //     cout<<s.name<<"\n"<<"standard is "<<s.standard<<"\n"<<"roll is "<<s.roll<<"\n"<<"gpa is "<<s.gpa<<endl;
// // }
// // int main(){
// //     student mystduent = {"Aman",8,28,47.5};
// //     school(mystduent);
// //}
// int main (){
// string name;

// string vname[10];
// string sname[20];
// cout<<"Enter your  name of frnds : "<<endl;
// for(int i=1;i<=10;i++){
//     cin>>name;
//     if(name[0]== 's'){
//         cout<<"name is starting from s letter : " <<name<<endl;
//         cout<<"Enter next friends name : "<<endl;
//     }
//     else if(name[0]=='v'){
//         cout<<"Name is startimng from v letter : "<<name<<endl;
//         cout<<"Enter next friends name : "<<endl;
//         }
//     else{
//         cout<<"enter next friend name : "<<endl;
//         }   
// }
// for (int i = 0; i <  10; i++) {
//   cout << vname[i] << "\n";
// }
// for(int i=0;i<5;i++){
//     cout<<sname[i]<<"\n";
//   }
//  }

// // Database

// // Write 
// // Read
// // Read

#include<iostream>
using namespace std;
void function(int x,int y){
    cout<<x+y;
}
int main(){
    int n,m;
    cout<<"Enter number1 :" <<"enter number2 "<<endl;
    cin>>n>>m;
    int a = function(n,m);
    cout<<a;


}