#include<iostream>
#include<string>
using namespace std;
// class car {
//     public:
//     string name;
//     int price;
// };
// int main(){
//     car c1;
//     c1.name = "Honda";
//     c1.price = 170000;

//     car c2;
//     c2.name = "Tata";
//     c2.price = 200000;

//     car c3;
//     c3.name = "Tiago";
//     c3.price = 30000000;

//     cout<< "c1" << c1.name << "\n" << c1.price << endl;
//     cout << "c2" << c2.name << "\n" << c2.price << endl;
//     cout << "c3" << c3.name << "\n" << c3.price << endl;
// }

// class car {
//     public:
//     string name;
//     float price;
//     int year;
// };
// int main(){
//     car c1;
//     cout <<"Enter car name for c1 : "  << endl;
//     cin>>c1.name;
//     cout<<"Enter price for car1 : " << endl;
//     cin>>c1.price;
//     cout<<"Enter price for year c1 : " << endl;
//     cin>>c1.year;

//     car c2;
//     cout<<"Enter car name for c2 : " << endl;
//     cin>>c2.name;
//     cout<<"Enter price for car2 : " << endl;
//     cin>>c2.price;
//     cout<<"Enter price for year c2 : " << endl;
//     cin>>c2.year;

//     car c3;
//     cout<<"Enter car name for c3 : " << endl;
//     cin>>c3.name;
//     cout<<"Enter price for car3 : " << endl;
//     cin>>c3.price;
//     cout<<"Enter price for year c3 : " << endl;
//     cin>>c3.year;


//     cout<< "c1" << c1.name << "\n" << c1.price << c1.year << endl;
//     cout << "c2" << c2.name << "\n" << c2.price << c2.year << endl;
//     cout << "c3" << c3.name << "\n" << c3.price << c3.year << endl;

// }
// class rectangle{
//     public:
//     int length;
//     int breadth;
// };
// void react(rectangle r){
//     cout<<" area of rectrangle is : " << r.length * r.breadth << endl;
// }
// int main(){
//     rectangle r;

//     cout<<"Enter value for length : " << endl;
//     cin>>r.length;

//     cout<<"Enter value  breadth " << endl;
//     cin>>r.breadth;
//     react(r);
// }
// class employee {
//     public:
//     string id;
//     int salary;
// };
// void empl(employee e ){
//     cout<< " Data of employee is : " << e.id << "\n " << e.salary << endl;
// }
// int main(){
//     employee e;

//     cout<<"Enter employee id : " << endl;
//     cin>>e.id;

//     cout<<" Enter employee salary : " << endl;
//     cin>>e.salary;
//     empl(e);
// }
// class time{
//     public:
//     int hours;
//     int minute;
//     int seconds;
// };
// void clock( time t){
//     cout<<" Time is : " << t.hours<< " : " << t.minute << " : " << t.seconds <<"\n";
// }
// int  main(){
//     time t;
//     cout<<" Enter hour : " << endl;
//     cin>>t.hours;
//     cout<<"Enter minute : " << endl;
//     cin>>t.minute;
//     cout<<"Enter seconds : " << endl;
//     cin>>t.seconds;
//     clock(t);
// }
//class book {
//     public:
//     string name;
//     string title;
//     int price;
// };
// void ebook(book b){
//     cout<<"Name of book author is : " << b.name <<  " : " << b.title << " : " << b.price << endl;
// }
// int main(){
//     book b;
//     cout<<"Enter name : " << endl;
//     cin>>b.name;
//     cout<<"Enter titel : " << endl;
//     cin>>b.title;
//     cout<<"Enter book price : " << endl;
//     cin>>b.price;
//     ebook(b);
// }
// class student{
//     public:
//     string name;
//     int roll;

//     student(){
        
//     }
//     student (string name , int roll){
//         this->name = name;
//         this->roll=roll;
//     }
// };
// void stu(student s){
//     cout<<"name of student : " << " Name is " <<  s.name << " roll is  " << s.roll <<  endl;
// }
// int main(){
//     student s;
//     cout<<"Enter student name : " << endl;
//     cin>>s.name;
//     cout<<"Enter student roll  : " << endl;
//     cin>>s.roll;
//     stu(s);
// }
class car{
    public:
    string brand;
    int price;

    car(){

    }
     car(string b , int p){
        brand = b;
        price = p;
    }
};
void  carc(car c){
    cout<<c.brand << " " << c.price << endl;
}
int main(){
    car c;
    cout<<" Enter brand name : " << endl;
    cin>>c.brand;

    cout<<" Enter car price : " << endl;
    cin>>c.price;
    carc(c);
}

