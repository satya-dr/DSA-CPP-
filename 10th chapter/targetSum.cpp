// // Find the total number of pairs in the array whose sum is equal to the given value X.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[]{4, 3, 6, 7, 1};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int targetSum = 7;
//     int pairs = 0;
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] + arr[j] == targetSum)
//             {
//                 pairs++;
//             }
//         }
//     }

//     cout <<"Number of possible pairs is : "<< pairs;
// }

// // Find the total number of tripletes in the array whose sum is equal to the given value X.
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[]={3,1,2,0,1,6};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int targetSum=6;
//     int ans=0;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             for(int k=j+1;k<size;k++){
//                  if(arr[i]+arr[j]+arr[k]==targetSum){
//                     ans++;
//                  }
//             }
//         }
//     }
//     cout<<ans;
// }


// // Array Manipulation
// // Find the unique number in a given array where all the elements are being repeated twice with one value being unique.
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={2,4,2,1,3,5,1,3};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int unique=4;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(arr[i]==arr[j]){
//                  arr[i]=arr[j]=-1;
//             }
//         }
//     }

    
//      cout<<"The unique number(s) is: ";
//     for(int i=0;i<size;i++){
//         if(arr[i]!=-1){
//            cout<<arr[i]<<" ";
//         }
//     }

// }


// //Find the second largest element in a given array.
// #include<iostream>
// #include <limits.h>

// using namespace std;
   
// int largestInd(int arr[], int size){
//       int max=INT_MIN;
//       int larInd;
//       for(int i=0;i<size;i++){
//         if(arr[i]>max){
//             max=arr[i];
//             larInd=i;
//         }
//       }
//       return larInd;
// }
// int main(){
//     int arr[]={2,4,2,4,3,2,44,4};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int indexOfLarEle=largestInd(arr,size);

//     cout<<arr[indexOfLarEle]<<endl;

//     int larEle=arr[indexOfLarEle];
    
//     for(int i=0;i<size;i++){
//         if(arr[i]==larEle){
//             arr[i]=-1;
//         }
//     }
//     int sec_lar_ind=largestInd(arr,size);
//     cout<<arr[sec_lar_ind]<<" ";
// }

// // Method 2
// //Find the second largest element in a given array.
// #include<iostream>
// #include <limits.h>

// using namespace std;
   
// int sec_lar(int arr[], int size){
//       int max=INT_MIN;
//       int sec_max=INT_MIN;
      
//       for(int i=0;i<size;i++){
//         if(arr[i]>max){
//             max=arr[i];
           
//         }
//       }
//       for(int i=0;i<size;i++){
//         if(sec_max<arr[i] && arr[i] != max){
//             sec_max=arr[i];
//         }
//       }

//       return sec_max;
// }
// int main(){
//     int arr[]={2,4,2,4,3,2,44,4};
//     int size=sizeof(arr)/sizeof(arr[0]);
   
//     cout<<sec_lar(arr, size)<<" ";
// }

// Rotate the given array 'a' by k steps where k is a non negative number
#include<iostream>
using namespace std;
int main(){
    int arr[]={3,2,1,4,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int n=size;
    int k=2;
    int arr1[n];
    for(int i=size;i>n-k;i--){
            //  arr1[]=arr[i];
    }
}