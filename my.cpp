// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     char k='A';
//     for (int i = 1; i <=n; i++) {
//         for (int j = 1; j <=n+1-i; j++) {
//             cout <<k<<" ";
//             k++;
//     }
//     cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main() {
//     cout<<"Enter a number : ";
//     int n;
//     cin >> n;
//     char kk='A' ;
    
//     for (int i = 1; i <=n; i++) {
//             for (int j = 1; j <=i+1; j++) {
//             cout<<kk<<" ";
//             kk++;
//     }
//     kk--;
//     cout<<endl;
//     }    
// }

#include<iostream>
using namespace std;

int main() {
    cout<<"Enter a number : ";
    int n;
    cin >> n;
     
    for (int i = 1; i<=n; i++) {
            for (int j = 1; j<=i-1; j++) {
                cout<<"  ";    
            }
        char k='A'-1+n;

            for (int j = 1; j<=n+1-i; j++) {
                cout<<k<<" ";
                k--;
            }
        
    cout<<endl;
    } 
    }

