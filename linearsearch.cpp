#include <iostream>
using namespace std;

// int main(){
//     int n,k;
//     cout<<"Enter the length of arrays: ";
//     cin>>n;

//     cout<<"Enter the key element to be searched: ";
//     cin>>k;

//     int arr[n];

//     cout<<"Enter the elements of array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     cout<<"Elements in a array: "<<endl;
//     for (int i = 0; i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int p=0;
//     for (int i = 0; i<n;i++){
//         if(k==arr[i]){
//             p++;
//         }
//     }
//     if(p==0){
//         cout<<k<<" is not present"<<endl;
//     }
//     else{
//         cout<<k<<" is present"<<endl;
//         cout<<"Number of occurrences of "<<k<<" is "<<p<<endl;
//     }
// }
int main()
{
    int n;
    cout<<"enter the number of pattern";
    cin>>n;

    // for(int i=0;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

















