#include<iostream>
#include<vector>
using namespace std;
int main(){

    // // //  // v.push_back(element): it is related to start position
    // // //  //  v.resize(6);
    // // //  //  v.pop_back(6);
    // // //  //  v.insert(position, element);
    // // //  //  v.begin(): First element
    // // //  //  v.end(): last element
    // // //  //  v.erase(position): it is related to start/end position
    // // //  //  v.clean(): delete all elements
//     // vector<datatype> vectot_name;
//     vector<int> v;
//     cout<<"Size : "<<v.size()<<endl;
//     cout<<"Size : "<<v.capacity()<<endl;

//     // for Element push : Insert a new element in end posituin
//     // v.push_back(1);
//     //  cout<<"Size : "<<v.size()<<endl;
//     // cout<<"Size : "<<v.capacity()<<endl;


//     // v.push_back(2);
//     //  cout<<"Size : "<<v.size()<<endl;
//     // cout<<"Size : "<<v.capacity()<<endl;


//     // v.push_back(3);
//     //  cout<<"Size : "<<v.size()<<endl;
//     // cout<<"Size : "<<v.capacity()<<endl;


//     // v.push_back(4);
//     //  cout<<"Size : "<<v.size()<<endl;
//     // cout<<"Size : "<<v.capacity()<<endl;

//     v.resize(6);
//      cout<<"Size : "<<v.size()<<endl;
//     cout<<"Capacity : "<<v.capacity()<<endl;
//     v.push_back(4);
//      cout<<"Size : "<<v.size()<<endl;
//     cout<<"Size : "<<v.capacity()<<endl;
    
//     // For element delete: Delete from end position
//     v.pop_back();
//     cout<<"Size : "<<v.size()<<endl;
//     cout<<"Capacity : "<<v.capacity()<<endl;
//     v.pop_back();
//     cout<<"Size : "<<v.size()<<endl;
//    cout<<"Capacity : "<<v.capacity()<<endl;





// Loops for Vectors
 vector<int> v;

 for(int i=0;i<5;i++){
    int ele;
    cout<<i+1<<" Element : ";
    cin>>ele;
    v.push_back(ele);

 }
cout<<"Elemets of the array: { ";
 for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<" }"<<endl;

   v.insert(v.begin()+2,99);
    // For each loop
    cout<<"Elemets of the array: { ";
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<" }"<<endl;
    
     v.erase(v.end()-2);
    // While Loop
    cout<<"Elemets of the array: { ";
    int i=0;
    while(i<v.size()){
        cout<<v[i++]<<" ";
    }
    cout<<"}";


}