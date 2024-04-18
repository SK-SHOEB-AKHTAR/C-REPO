#include<iostream>
using namespace std;

// int Binary_search(int arr[],int size,int key){
//     int start =0;
//     int end = size - 1;
//     int mid = (start + end)/2;
//     while(start <=end){
//         if(arr[mid]==key){
//             return mid;
//         }
//         if(key>=arr[mid]){
//             start = mid+1;

//         }
//         else{
//             end = mid-1;
//         }
//         mid = (start+end)/2;
//     }
//     return -1;
// }


// int main(){
//     int even[6]={1,2,4,6,7,8};
//     int odd[5]={8,6 ,5,4 ,3};
//     int  index =  Binary_search(even,6,22);
//     cout<<"index of 7 is : "<<index<<endl;

//     int  indexodd =  Binary_search(odd,5,55);
//     cout<<"indexodd of 7 is : "<<indexodd<<endl;

// }
int factors(int arr[],int n,int key){
    int s=0, e=n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        mid=s+(e-s)/2;

    }
    return ans;

}

int main(){
    int even[5]={1,2,3,3,6};

    cout<<"first occurence of 3 is "<<factors(even,5,3)<<endl;
    return 0;

}