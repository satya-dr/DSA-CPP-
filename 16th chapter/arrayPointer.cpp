#include<iostream>
using namespace std;

int main(){
    //Array Pointer
    // int arr[]={1,2,3,4,5};
    // cout<< *arr <<endl;

    //Pointer Arithmetic
    // Increament and Decreament
    int a=10;
    int* ptr=&a;

    cout<<ptr<<endl;
    ptr++;   // Increament
    cout<<ptr<<endl;
    ptr--; //Decreament
    cout<<ptr<<endl;

    // Add  
    int arr[]={1,2,3,4,5};

    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    cout<<*(arr+3)<<endl;
    //subtract ptr--> int(ptr1)-int(ptr2)=>no of blocks of type(int)

    // int* ptr2;
    // int* ptr1=ptr2+2;
    // cout<<ptr1-ptr2<<endl;//2
     

    // Compare(<,>,==,!=,<=,>=)
    int* ptr1;
    int* ptr2;
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;
    cout<<(ptr1>ptr2)<<endl;

}