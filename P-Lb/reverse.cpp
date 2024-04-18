#include<iostream>
using namespace std;

// void reverse(int arr[],int n){
//     int start =0;
//     int end = n-1;
//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }


// void printArry(int arr[],int n){
//     for(int i=0;i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int arr[6]={1,2,4,6,7,8};
//     int brr[5]={9,0,-2,5,3};
//     reverse(arr,6);
//     reverse(brr,5);
//     printArry(arr,6);
//     printArry(brr,5);

// }
void printd(int arr[],int size){
    for(int i=0;i<size;i++){ 
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swaptwospace(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int even[]={2,4,6,7,9,1,0,3,7,3,4 ,5,7};
    int v = sizeof(even)/sizeof(even[3]);
    swaptwospace(even,v);
    printd(even,v);
    cout<<endl;
    

}