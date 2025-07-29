//Decimal Number to Binary Number
#include<iostream>
using namespace std;
int decToBi(int n){
    int ans=0;
    int pow=1;
    while(n>0){
        int remender=n%2;
        n=n/2;
        ans+=(remender*pow);
        pow=pow*10;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    for(int i=1;i<=n;i++){

        cout<<"Binary of "<<i<< " is : "<<decToBi(i)<<endl;
    }

}