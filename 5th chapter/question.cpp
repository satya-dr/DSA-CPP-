// //Sum of 2 numbers
// #include<iostream>
// using namespace std;
//  int sum(int a,int b)
//     {
//         int sum=a+b;
//         return sum;
//     }
// int main(){
   
  
//         cout<<sum(10,12)<<endl;
//         return 0;
// }


// //Minimum of two numbers
// #include<iostream>
// using namespace std;
//  int minOfTwo(int a,int b)
//     {
//         return (a>b?b:a);
//     }
// int main(){
   
  
//         cout<<minOfTwo(10,12)<<endl;
//         return 0;
// }


// //Sum of numbers from 1 to N
// #include<iostream>
// using namespace std;
//  int sum(int a)
//     {
        
//         int sum=0;
//         for(int i=1;i<=a;i++){
//             sum+=i;
//         }
//         return sum;
//     }
// int main(){
   
//         int n;
//         cout<<"Enter a number: ";
//         cin>>n;

//         cout<<sum(n)<<endl;
//         return 0;
// }


// //Factorial of a number
// #include<iostream>
// using namespace std;
//  int factorial(int n)
//     {
//         int factorial=1;
//         for(int i=1;i<=n;i++){
             
//              factorial*=i;

//         }
//         return factorial;
//         }
     
// int main(){
   
  
//         cout<<factorial(3)<<endl;
//         return 0;
// }


// 


//Sum of digits

// #include<iostream>
// using namespace std;
//  int sumOfDigits(int x)
//     {
//        int digiSum=0;
//        while(x>0){
//         int lastDig=x%10;
//         x=x/10;
//         digiSum+=lastDig;
//        }
//        return digiSum;
//     }
// int main(){
   
//         int x=200;
//         cout<<sumOfDigits(x);
        
//         return 0;
// }




// //Calculate nCr bionomial cofficient for n and r
// #include<iostream>
// using namespace std;

// int factorial(int num){
//         int fact=1;
//         for(int i=1;i<=num;i++){
//                fact*=i;
//         }
//         return fact;
// }
//  int nCrCofficient(int n, int r)
//     {     
//          int nCr=factorial(n)/(factorial(r)*factorial(n-r));
//          return nCr;
//     }
// int main(){
   
//        int n,r;
//        cout<<"Enter n : ";
//        cin>>n;
//        cout<<"Enter r : ";
//        cin>>r;

//        cout<<" Valur of nCr = "<<nCrCofficient(n,r);
//        return 0;
// }




// //WAF to check if a number prime or not
// #include<iostream>
// using namespace std;

// int primeNum(int num){
//         bool isPrime=true;
//         for(int i=2;i<=num-1;i++){
//                if(num%i==0){
//                 isPrime=false;
//                 break;
//                }
//         }
//         if(isPrime==true){
//                 cout<<num<<" is a prime Number";
//         }else{
//                 cout<<num<<" is not a prime Number";
//         }
       
// }
// int main(){
   
//        int n;
//        cout<<"Enter a number : ";
//        cin>>n;
      

//        primeNum(n);
//        return 0;
// }



// //WAF to print all prime numbers from 1 to N

// #include<iostream>
// using namespace std;

// int isPrime(int num){
     

//         if (num<=1){
//                 return false;
//         }
//         for(int i=2;i<=num-1;i++){
//                if(num%i==0){
//                return false;
                
//                }
              
//         }
//         return true;
       
// }

// int primeOneToN(int n){
//         for(int i=2;i<=n;i++){
//                 if(isPrime(i)){
//                         cout<<i<<" ";
//                 }
//         }

// }
// int main(){
   
//        int n;
//        cout<<"Enter a number : ";
//        cin>>n;
      
//       cout<<"All prime Number from 1 TO "<<n<<" are : ";
//        primeOneToN(n);
//        return 0;
// }




//WAF to print nth Fibonacci
#include<iostream>
using namespace std;
 
int fibonacci(int n){
        if(n==0){
                return 0;
        }else if(n==1){
                return 1;
        }

 
        int a=0,b=1 ,fib;

        for(int i=2;i<=n;i++){
              fib=a+b;
              a=b;
              b=fib;
        }

        return fib;

}

int main(){
        int n;
        cout<<"Enter a number: ";
        cin>>n;

        cout<<"Fibonacci serise upto nth term is: "<<fibonacci(n);
}