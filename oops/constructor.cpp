#include<iostream>
#include<string>
using namespace std;
//  // Constructor -> Three types of Constructor=> 1. Non-parameterised, 2. parameterised, 3. Copy
class Teacher{
private:
double salary;

public:
    // Constructor Function 

    // // Non-parameterised Constructor
    // Teacher(){ 
    //   dept="Computer science";
    // }
    
    // parameterised Constructor
    Teacher(string name,string dept, string subject, double salary ){ 
      this->name=name;
      this->dept=dept;
      this->subject=subject;
      this->salary=salary;
    }

    // Copy Constructor--> There are 2 type of copy  Constructor=> 1. Shall copy 2. Deep copy
    Teacher(Teacher &origObj){ // pass by reference 
        cout<<"I am a copy Constructor"<<endl;
        this->name=origObj.name;
        this->dept=origObj.dept;
        this->subject=origObj.subject;
        this->salary=origObj.salary;

    }

// Properties
       string name;
       string dept; 
       string subject;

    //    Method/Member functions
    void changeDept(string newDept){
            dept = newDept;
    }
   void getInfo(){
    cout<<"name: "<<name<<endl;
    cout<<"Subject: "<<subject<<endl;
   }

};


int main(){
    Teacher t1("Satyajit Roy","Computer science","Mathemetics",2000); 
    // t1.getInfo();
    Teacher t2(t1); // copy Constructor -invoke
    t2.getInfo();

}
