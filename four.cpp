#include<iostream>
using namespace std;
class Counter{
static int count;
public:
Counter(){
    count++;
    cout<<"Called for object no "<<count<<endl;
}
};
int Counter::count=0;
int main(){
    Counter c1,c2,c3,c4;
    return 0;
    
}