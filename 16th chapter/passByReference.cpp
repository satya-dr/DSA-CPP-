#include<iostream>
using namespace std;
// void changeA(int* ptr){ // Pass by reference using Pointer
//      *ptr=20;
// }
// int main(){
//     int a=10;
//      changeA(&a);
//      cout<<"inside main fxn: "<<a<<endl;//20

void changeA(int &b){ // Pass by reference using Alias
     b=20;
}
int main(){
    int a=10;
     changeA(a);
     cout<<"inside main fxn: "<<a<<endl;//20
}