// // Find the first occurence of an element X in a given array:-

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     for(int i=0;i<6;i++){
//         int ele;
//         cout<<"Enter "<<i+1<<" element: "<<endl;
//         cin>>ele;
//         v.push_back(ele);
//     }
//     int key=4,ans=-1;

//     // // Method 1
//     // for(int i=0;i<v.size();i++){
//     //     if(v[i]==key){
//     //         ans=i;
//     //     }
//     // }

//     // Method 2
//     for(int i=v.size()-1;i>=0;i--){
//         if(v[i]==key){
//             ans=i;
//             break;
//         }
//     }
//     cout<<"Last "<<key<<" found in index no. : "<<ans<<endl;
// }



// // Count the number of occurences of a particular element X
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     int key;
//     int count=0;
//     for(int i=0;i<5;i++){
//         int ele;
//         cout<<"enter "<<i<<" element: ";
//         cin>>ele;

//         v.push_back(ele);
//     }
//        cout<<"Enter key Value: ";
//        cin>>key;

//     for(int i=0;i<v.size();i++){
//         if(v[i]==key){
//             count++;
//         }
//     }
//     cout<<"Number of occurences: "<<count;

// }


// // Count the number of elements strictly greater than value X
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     for(int i=0;i<5;i++){
//         int ele;
//         cout<<"Enter "<<i+1<<" element: ";
//         cin>>ele;
//         v.push_back(ele);
//     }
//     int key=4,count=0;
//     for(int i=0;i<v.size();i++){
//         if(v[i]>key){
//            count++;
//         }
//     }
//     cout<<count;
// }


// // Check the given array is Sorted or not
// #include<iostream>
// using namespace std;
// int main(){
//     bool sorted=true;
//     int arr[]={5,3,4,56,66,77};
//     for(int i=0;i<6;i++){
//         if(arr[i]<arr[i+1]){
//             sorted=false;
//         }
//     }
//     if(sorted==true){
//         cout<<"This array is sorted !";
//     }else if(sorted==false){
//         cout<<"This array is not sorted !";

//     }
// }



// Find the difference between the sum of elements at even indices - sum of elements at odd indices
#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,8,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int odd_sum=0;
    int even_sum=0;
    for(int i=0;i<size;i++){
        if(i%2==0){
            even_sum+=arr[i];
        }else{
            odd_sum+=arr[i];
        }
    }

    cout<<"Difference: "<<even_sum-odd_sum;
}