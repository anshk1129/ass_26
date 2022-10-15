#include<iostream>
using namespace std;
class StaticCount{
static int count;
public:
StaticCount(){
    increment_count();
}
void increment_count(){
    count++;
    cout<<"Called for object no "<<count<<endl;
}
};
int StaticCount::count=0;
int main(){
    StaticCount c1,c2,c3;
    return 0;
    
}