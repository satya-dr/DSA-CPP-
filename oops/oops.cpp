#include<iostream>
#include<string>
using namespace std;

class teacher{
private:

double salary;
public:
// Properties
string name;
       string dept; 
       string subject;

    //    Method/Member functions
    void changeDept(string newDept){
            dept = newDept;
    }

    // Setter
    void setSalary(double s){
        salary =s;
    }

    //Getter 
    double getSalary(){
        return salary;
    }

};

class Accouunts{
private:    
   double balance;
   string passsword;
public:   
    string accountId;
    string username;
};

int main(){
    teacher t1;
    t1.name="Satyajit Roy";
    t1.dept="CSE";
    t1.subject="Mathemetics";
    t1.setSalary(30000);


    cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;
}
