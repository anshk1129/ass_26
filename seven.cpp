#include<iostream>
using namespace std;
class Box{
int l,b,h;
int volume;
public:
Box(int x,int y,int z){
l=x;
b=y;
h=z;
}
void show(){
    volume=l*b*h;
    cout<<"Volume of box is "<<volume<<endl;
}
};
int main(){
    Box c1(5,10,15);
    c1.show();
    return 0;
}