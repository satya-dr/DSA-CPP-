// //Pattern printing

// //Q1.number pattern

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// //Q2. Star pattern printing
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// //Q3. Alphabet pattern rinting
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         char ch= 'A';
//         for(int j=1;j<=n;j++){
//             cout<<ch<<" ";
//             ch ++;
//         }
//         cout<<endl;
//     }
// }

// //Q4.
// #include<iostream>
// using namespace std;
// int main(){
//     int n,num=1;
//     cout<<"Enter a number: ";
//     cin>>n;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
// }

// Triangle pattern
// #include<iostream>
// using namespace std;
// int main(){
//     int n;

//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<"* ";

//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;

//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<i+1<<" ";

//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;

//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//          char ch='A';
//         for(int j=0;j<i+1;j++){
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;

//     cout<<"Enter a number: ";
//     cin>>n;
//    for(int i = 0; i < n; i++){
//         char ch = 'A' + i;
//         for(int j = 0; j < i+1; j++){
//             cout << ch<<" ";
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;

//     cout<<"Enter a number: ";
//     cin>>n;
//    for(int i = 0; i < n; i++){

//         for(int j = 0; j < i+1; j++){
//             cout <<j+1<<" ";
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int num =1;
//     cout<<"Enter a number: ";
//     cin>>n;
//    for(int i = 0; i < n; i++){

//         for(int j = 0; j < i+1; j++){
//             cout <<num<<" ";
//             num++;
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//    char ch='A';
//     cout<<"Enter a number: ";
//     cin>>n;
//    for(int i = 0; i < n; i++){

//         for(int j = 0; j < i+1; j++){

//             cout <<ch<<" ";
//              ch++;

//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int num =1;
//     cout<<"Enter a number: ";
//     cin>>n;
//    for(int i = 0; i < n; i++){

//         for(int j = 0; j < i+1; j++){
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++){
//             cout<<i+1;
//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;

//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i = 0; i < n; i++){
//         char ch='A'+i;

//         for(int j = 0; j < i+1; j++){
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++){
//             cout<<ch;

//         }
//         cout << endl;
//     }
// }

//Pyramid pattern
#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter a number: ";
    cin>>n;
    for(int i = 0; i < n; i++){

        for(int j = 0; j < n-i-1; j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<j+1;

        }
        for(int j=i;j>=1;j--){
            cout<<j;

        }
        cout << endl;
    }
}

// // Hollow diamond
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;

//     cout << "Enter a number: ";
//     cin >> n;

//     // TOP
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << "  ";
//         }
//         cout << "*";

//         if (i != 0)
//         {
//             for (int j = 0; j < 2 * i - 1; j++)
//             {
//                 cout << "  ";
//             }
//             cout << "*";
//         }

        

//         cout << endl;
//     }

//     // BOTTOM
//         for (int i = 0; i < n - 1; i++)
//         {
//             for (int j = 0; j < i + 1; j++)
//             {
//                 cout << "  ";
//             }
//             cout << "*";
//             if (i != n - 2)
//             {
//                 for (int j = 0; j < 2 * (n-i) - 5; j++)
//                 {
//                     cout << "  ";
//                 }
//                 cout<<"*";
//             }
//             cout<<endl;
//         }
// }