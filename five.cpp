#include<iostream>
using namespace std;
class Date{
int date,month,year;
public:
Date(int x,int y,int z){
date=x;
month=y;
year=z;
}
void show(){
    cout<<"---------------Date is --------------"<<endl;
    cout<<date<<"-"<<month<<"-"<<year<<endl;
}
};
int main(){
    Date c1(5,12,2022);
    c1.show();
    return 0;
}