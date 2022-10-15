#include<iostream>
using namespace std;
class Time{
 int hr,min,sec;
 public:
 void setTime(int x,int y,int z){
    hr=x;
    min=y;
    sec=z;
 }
 void showtime(){
    cout<<hr<<"hr "<<min<<"min "<<sec<<"sec"<<endl;
 }
 void normalize(){
    min=min+sec/60;
    sec=sec%60;
    hr=hr+min/60;
    min=min%60;
 }
 Time add(Time T){
   Time t1;
   t1.hr=hr+T.hr;
   t1.min=min+T.min;
   t1.sec=sec+T.sec;
   t1.normalize();
   return t1;
 }
};
int main(){
    Time t1,t2,t3;
    t1.setTime(10,45,45);
    t2.setTime(11,45,56);
    t3=t1.add(t2);
    t3.showtime();
    return 0;
}