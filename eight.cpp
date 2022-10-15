#include<iostream>
using namespace std;
class Bank{
int principal,year;
float roi,si;
public:
Bank(int x,float r,int y){
principal=x;
roi=r;
year=y;
}
void cal_si(){
    si=(principal*roi*year)/100;
}
void display(){
    cout<<"Simple interest is "<<si<<endl;
}
};
int main(){
    Bank b1(10,20.03f,123);
    b1.cal_si();
    b1.display();
    return 0;
}