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



// Count the number of occurences of a particular element X
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int key;
    int count=0;
    for(int i=0;i<5;i++){
        int ele;
        cout<<"enter "<<i<<" element: ";
        cin>>ele;

        v.push_back(ele);
    }
       cout<<"Enter key Value: ";
       cin>>key;

    for(int i=0;i<v.size();i++){
        if(v[i]==key){
            count++;
        }
    }
    cout<<"Number of occurences: "<<count;

}