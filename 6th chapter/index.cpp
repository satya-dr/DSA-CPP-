// //Decimal Number to Binary Number
// #include<iostream>
// using namespace std;
// int decToBi(int n){
//     int ans=0;
//     int pow=1;//10^0=1
//     while(n>0){
//         int remender=n%2;
//         n=n/2;
//         ans+=(remender*pow);
//         pow=pow*10;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;

//     for(int i=1;i<=n;i++){

//         cout<<"Binary of "<<i<< " is : "<<decToBi(i)<<endl;
//     }

// }


//Binary to Decimal
#include<iostream>
using namespace std;
int bianryToDecimal(int num){
    int ans=0;
    int pow=1;//2^0=1
    while(num>0){
        int rem=num%10;
        num/=10;
        ans+=(rem*pow);
        pow*=2;
    }

    return ans;


}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    cout<<"Decimal of "<<n<<" is : "<<bianryToDecimal(n);
}