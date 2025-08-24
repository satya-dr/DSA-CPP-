#include<iostream>
#include<string>
using namespace std;
// // Static for Functins
void fun(){
   // // int x=0;
    static int x=0;
    cout<<"x: "<<x<<endl;
    x++;
}

// // Static for class
class A{
public:
    int x;
    void incX(){
        x++;
    }    
};
int main(){
// fun();
// fun();
// fun();

A obj;
obj.x=0;
cout<<obj.x<<endl;
obj.incX();
cout<<obj.x<<endl;

}
