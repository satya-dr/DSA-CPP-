// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"hello";

//     return 0;
// } 

// // Input in C++
// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"Enter Your Age"<<endl;
//     cin>>age;
//     cout<<"Your age is: "<<age<<endl;
//     return 0;
// } 

// //Operators=> Arithmethic, Relational Logical

// #include<iostream>
// using namespace std;
// int main(){
//     //Arithmetic=> +, -, *, /, %,
//     int a=10, b=3;
//     cout<<"sum: "<<a+b<<endl;
//     cout<<"Difference: "<<a-b<<endl;
//     cout<<"Multiply: "<<a*b<<endl;
//     cout<<"Devide: "<< (float)a/b<<endl;
//     cout<<"Modilo: "<<a%b<<endl;

//     //Operational=> <, >, <=, >=, ==, !=
//     cout<< (3<5) <<endl; //True-> 1
//     cout<< (3>5) <<endl; //False-> 0

//     //Logical=> OR(||) , AND(&&) , NOT(!)
//     cout<< ((3<1) || (3<5)) << endl; // 1st condition False 2nd Condituon True => for OR loical ans is:  1
//     cout<< ((3<1) && (3<5)) << endl; // 1st condition False 2nd Condituon True => for AND loical ans is:  0


//     return 0;
// } 


//Unary Operators->Increment++,  Decrement--

#include<iostream>
using namespace std;
int main(){
    // //Increment 
    // //post inrement (a++)
    // int a=10;

    // int b= a++;//work->update
    // cout<<"b: "<<b<<endl;//10
    // cout<<"a: "<<a<<endl;//11

    // //Pre increrement (++a) 
    // int c=10;

    // int d= ++c;//update -> work
    // cout<<"d: "<<d<<endl;//11
    // cout<<"c: "<<c<<endl;//11


     //Decremrnt 
    //post Decremrnt (a--)
    int a=10;

    int b= a--;//work->update
    cout<<"b: "<<b<<endl;//10
    cout<<"a: "<<a<<endl;//9

    //Pre Decremrnt (a) 
    int c=10;

    int d= --c;//update -> work
    cout<<"d: "<<d<<endl;//9
    cout<<"c: "<<c<<endl;//9


    return 0;
} 
