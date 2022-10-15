#include<iostream>
using namespace std;
class Cube{
int side;
int volume;
public:
Cube(int x){
side=x;
}
void show(){
    volume=side*side*side;
    cout<<"Volume of cube is "<<volume<<endl;
}
};
int main(){
    Cube c1(5);
    c1.show();
    return 0;
}