// // //  Inheritance--> When properties and member functions of base(parent) class are passed on the derived(child)class.
// #include<iostream>
// #include<string>
// using namespace std;

// class Person{
//  public:   
//     string name;
//     int age;

  
// };

// // Child
// class Student :public Person{
//   public:
//       int rollNo;
// };
// // Child of child
// class GrandStudent:public Student{
// public:    
//     string researchArea;
// };

// int main(){
//   GrandStudent s1;
//   s1.name="Satyajit Roy";
//   s1.researchArea="Quantum Physics";

// cout<<s1.name<<endl;
// cout<<s1.researchArea<<endl;

  
// }


// // Multiple inheritance
#include<iostream>
#include<string>
using namespace std;

class Student{
 public:   
    string name;
    int rollNo;

  
};

// Child
class Teacher{
  public:
      string subject;
      double salary;
};
// Child of child
class TA:public Student,public Teacher{

};

int main(){
  TA t1;
    t1.name="Satyajit Roy";
    t1.subject="Math";


cout<<t1.name<<endl;
cout<<t1.subject<<endl;

  
}
