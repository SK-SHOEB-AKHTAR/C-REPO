#include <iostream>
using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         arr[i]=50+rand()%100;
//         cout<<arr[i]<<" ";
//     }
//     for(int i = 0; i < n; i++){
//         cout << arr[i]<<" ";
//     }
// }
// int main(){

//     int arr[]={2,5,7,5,4,3,1};
//     int key=5;
//     int p=0;
//     int size=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i < size; i++){
//         if(key==arr[i]){
//            p++;
//         }
//     }
//     if(p==0)
//     {
//         cout<<"Key not found";
//     }
//     else{
//         cout<<"Key found"<<endl;
//         cout<<"No of occurrence of key element is : "<<p<<endl;
//     }
// }

int main(){
    int n;
    cin>>n;

    int arr[n];
    int key;
    cin>>key;
    int p=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i < size; i++){
        if(key==arr[i]){
        p++;
        }
    }
    if(p==0)
    {
        cout<<"Key not found";
    }
    else{
        cout<<"Key found"<<endl;
        cout<<"No of occurrence of key element is : "<<p<<endl;
    }
}