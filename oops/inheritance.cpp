// //  Inheritance--> When properties and member functions of base(parent) class are passed on the derived(child)class.
#include<iostream>
using namespace std;

class Person{
 public:   
    string name;
    int age;

   // Parent
    Person(string name, int age){
        this->name=name;
        this->age=age;
    }

   
     
};

// Child
class Student :public Person{
  public:
      int rollNo;
      Student(string name,int age,int rollNo): Person( name, age){
        this->rollNo=rollNo;
      }
      void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll No: "<<rollNo<<endl;

      }  
};


int main(){
  Student s1("Satyajit Roy",20,10);
  s1.getInfo();
}
