
// //Q1. marks grading system

// #include<iostream>
// using namespace std;
// int main(){

//     int marks;
//     cout<<"Enter Your marks: "<<endl;
//     cin>>marks;

//     if(marks>=90){
//         cout<<"Grade A\n";
//     }else if(marks<90 && marks>=80){
//          cout<<"Grade B\n";
//     }else{
//          cout<<"Grade C\n";
//     }

//     return 0;
// }

// //Q2.Uppercase LowerCase find

// #include<iostream>
// using namespace std;
// int main(){

//     char ch;
//     cout<<"Enter A character: ";
//     cin>>ch;

//     if(ch>=65 && ch<=90){
//         cout<<"Uppercase";
//     }else{
//         cout<<"Lowercase";
//     }

//     return 0;
// }

// // Q3. Sum of all numbers from 1 to n
// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;
//     int sum=0;
//     cout << "Enter a number: ";
//     cin>>n;
    
//     for(int i=0;i<=n;i++){
//         sum+=i;
//     }
//     cout<<sum;


//     return 0;
// }

// //Q4. Sum of all odd numbers from 1 to n
// //Method 1:-
// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;
//     int sum=0;
//     cout << "Enter a number: ";
//     cin>>n;
    
//     for(int i=1;i<=n;i++){
//        if(i%2!=0){
//         sum+=i;
//        }
//     }
//     cout<<sum;
   

//     return 0;
// }


// //Method 2:-
// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;
//     int sum=0;
//     cout << "Enter a number: ";
//     cin>>n;
    
//     for(int i=1;i<=n;i+=2){
//         sum+=i;
//     }
//     cout<<sum;


//     return 0;
// }


// //Q5. Find the number is prime or not
// // method 1
// #include<iostream>
// using namespace std;
// int main(){
//     int n=7;
//     bool isPrime= true;
//     for(int i=2;i<=n-1;i++){
//         if(n%i==0){
//             isPrime=false;
//             break;
//         }
//     }

// if(isPrime== true){
//     cout<<n<<" is a prime Number";
// }else{
//     cout<<n<<" is not a prime Number";
// }

// }

// // mehod 2
// #include<iostream>
// using namespace std;
// int main(){
//     int n=7;
//     bool isPrime= true;
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             isPrime=false;
//             break;
//         }
//     }

// if(isPrime== true){
//     cout<<n<<" is a prime Number";
// }else{
//     cout<<n<<" is not a prime Number";
// }

// }

// //Q6. Sum of all numbers from 1 to N which is divisible by 3
// #include<iostream>
// using namespace std;
// int main(){


//     int n, sum =0;
//     cout<<"Enter a number: ";
//     cin>>n;
   
//     for(int i=1;i<=n;i++){
//         if(i%3==0){
//             sum +=i;
//         }
//     }
//     cout<<sum;

// }

//Q6. Factorial of a number N.
#include<iostream>
using namespace std;
int main(){


    int n, res =1;
    cout<<"Enter a number: ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
           res *= (n-1);
    }
    cout<<res;

}


