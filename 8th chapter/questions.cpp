
// //Sum of all element of a array

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10];
//     int sum =0;
//     int size=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<size;i++){
//         cout<<"Enter "<<i+1<<" number: ";
//         cin>>arr[i];
//     }
//     for(int i=0;i<size;i++){
//         sum+=arr[i];
//     }
//     cout <<sum<<endl;


// }

// // Find the maximum value of all elements in the array
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter array size: ";
//     cin>>n;
//     int arr[n];
//     int size=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<size;i++){
//         cout<<"Enter "<<i+1<<" number: ";
//         cin>>arr[i];
//     }
//     int max=arr[0];
//     for(int i=0;i<size;i++){
//        if(arr[i]>=max){
//         max=arr[i];
//        }
//     }
//     cout <<max<<endl;


// }



// // Linear search 
// #include<iostream>
// using namespace std;
// int main(){

//     int arr[]={1,2,3,4,5};
//     int key=3;
//     int ans=-1;
//     for(int i=0;i<5;i++){
//         if(arr[i]==key){
//             ans=i;
//             break;
//         }
//     }
//     cout<<ans+1;
// }

// Single number 
#include<iostream>
using namespace std;
int main(){

    int arr[]={1,2,1,2,5};
    int key=3;
    int ans=0;
    for(int val:arr){
        ans=ans^val;
    }
    cout<<ans;
}