#include<iostream>
using namespace std;

int main() {
    // int n=rand()%100;
    // cout<<n<<endl;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     a[i]=rand()%100;
    //     cout<<a[i]<<" ";
    // }

    // int n;
    // cin>>n;
    // cout<<endl;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;
    // cout<<endl;5
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i+1;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

int n;
    cin>>n;
    cout<<endl;
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<"    ";
        }
        for(int j=1;j<=n-i+1;j++){
            if(k<=9){
            cout<<"0"<<k<<"  ";
            }
            else{
                cout<<k<<"  ";
            }
            k++;
        }
        k--;
        cout<<endl; 
}
}
//         k=k+2;
//         for(int j=1;j<=i-1;j++){
//             cout<<k<<" ";
//             k++;5
//         }
//         cout<<endl;
//     }
//     for(int i=1;i<n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"  ";
//         }
//         int k=n-i;
//         for(int j=1;j<=n-i;j++){
//             cout<<k<<" ";
//             k--;
//         }
//         k=k+2;
//         for(int j=1;j<=n-1-i;j++){
//             cout<<k<<" ";
//             k++;        }
//         cout<<endl;
//     }
// }