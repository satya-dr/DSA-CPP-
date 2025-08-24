// // Polymorphism--> Polymorphism is the ability of objects to take on different forms or behaves in different ways depending on the context in which they are used
// // 1.Compile time Polymorphism 2. Run time Polymorphism


// // // Compile time Polymorphism:- 1. Function time overloading
// #include<iostream>
// #include<string>
// using namespace std;

// class Print{
// public:
// // Interger type function
//    void show(int x){
//     cout<<"Print: "<<x<<endl;
//    }
// //    Character type function
//    void show(char ch){
//     cout<<"Print: "<<ch<<endl;
//    }
      
// };
// int main(){
// Print p1;
// p1.show('$');
// }


// // Run time Polymorphism:- 1. Function  overriding
#include<iostream>
#include<string>
using namespace std;

class Parent{
public:
// Interger type function
   void getInfo(){
    cout<<"Parent class\n";
   }  

   virtual void hello(){
    cout<<"Hello from Parents\n";
   }
};

class Child{

 public:   
    void getInfo(){
        cout<<"Child class\n";
    }
     void hello(){
     cout<<"Hello from Child\n";
    }
}; 
int main(){
Child c1;
c1.hello();
}


// // Run time Polymorphism:- 1.  Virtual Function  