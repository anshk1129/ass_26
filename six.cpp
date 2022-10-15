#include<iostream>
using namespace std;
class Student{
int id;
char str[20];
public:
Student(int x){
    cout<<"Enter the name of student"<<endl;
    cin.getline(str,20);
    id=x;

}
void show(){
    cout<<"\nDetail of student "<<endl;
    cout<<"id = "<<id<<endl<<"Name = "<<str;
}
};
int main(){
    Student s1(1),s2(2);
    s1.show();
    s2.show();
    return 0;
}