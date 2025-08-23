

// #include<iostream>
// using namespace std;
// int main(){
    
//     int arr[]={1,3,4,5,6};
//     int size= sizeof(arr)/sizeof(arr[0]);
    
//     // //For loop
//     // for(int i=0;i<size;i++){
//     //     cout<<arr[i]<<endl;
//     // }
    
//     // // For each loop

//     // for(int ele:arr){
//     //     cout<<ele<<endl;
       
//     // }

//     // //while loop
//     // int i=0;
//     // while(i<size){
//     //     cout<<arr[i]<<endl;
//     //     i++;
//     // }


//     //Input taking using for loop
//     char vowels[5];
    
//     // for(int i=0;i<size;i++){
//     //     cin>>vowels[i];
//     // }
//     // for(int i=0;i<size;i++){
//     //     cout<<vowels[i]<<" ";
//     // }
    
//     //Input taking using for each loop
//     for(char &ele:vowels){
//         cin>>ele;
//     }
//     for(int i=0;i<size;i++){
//         cout<<vowels[i]<<" ";
//     }



// }




#include<iostream>
using namespace std;
int main(){
    
    int arr[]={1,3,4,5,6};
    int size= sizeof(arr)/sizeof(arr[0]);
    int end=size-1;
    int st=0;
    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }

    for(int i=0;i<size;i++){
        
        cout<<arr[i]<<" ";
    }




}