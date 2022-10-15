#include<iostream>
using namespace std;
class Complex{
int a,b;
public:
void setdata(int x,int y){
    a=x;b=y;
}
void showdata(){
    cout<<"Real part = "<<a<<" Imaginary part = "<<b<<endl;
}
Complex add(Complex c){
  Complex temp;
  temp.a=a+c.a;
  temp.b=b+c.b;
  return temp;
}
};
int main(){

    Complex c1,c2,c3;
    c1.setdata(10,11);
    c2.setdata(12,13);
    c3=c1.add(c2);
    c3.showdata();
    return 0;

}