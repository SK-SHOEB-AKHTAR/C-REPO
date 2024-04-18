#include<iostream>
using namespace std;

// int bst(int arr[],int s,int e, int k){
//         int mid = s+(e-s)/2;
//     if(s<=e){
//         if(arr[mid]==k){
//             return mid;
//         }
//         if(arr[mid]>k){
//             return bst(arr,s,mid-1,k);
//         }
//         if(arr[mid]<k){
//             return bst(arr,mid+1,e,k);
//         }
//     }
//     return -1;
// }

// int main() {

//     int n;
//     cin>>n;
//     int arr[n];
//     int key;
//     cin>>key;

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int result = bst(arr,0,n-1,key);
//     if(result==-1){
//         cout<<"key is not found"<<endl;
//     }
//     else{
//         cout<<"key is found at index "<<result<<endl;
//     }
//     return 0;
// }

