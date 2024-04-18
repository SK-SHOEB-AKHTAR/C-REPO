#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
//     for(int i=1; i<=n;i++)
//     {
//         for(int j=1; j<=i;j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//      }

//     for(int i=1; i<=n;i++)
//     {
//         for(int j=1; j<= n-i+1;j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
    
//     }
// }
    // char k= 'A';
    //  for(int i=1;i<=n;i++){
        
    //     for(int j=1;j<=n;j++){
            
    //         cout<<k<<" ";
    //         k++;
        
    //     }
        
    //     cout<<endl;
    // }
    //  }
    // char k='A';
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n+1-i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<k<<" ";
    //         k++;
    //     }
    //     cout<<endl;
    // }}



    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n+1-1;j++){
    //         cout<<" ";
    //     }
    //     for(int j=1;j<=n+i;j++){
    //         cout<<j<<" ";
        
    //     }
    //     cout<<endl;
    // }}
// for(int i=1;i<=5;++i){
//     cout<<i<<" ";
//         }}
// int a= 4;
// cout<<++a<<" ";}


// for(int i=1;i<=n;i++){
//     int k=1;
//     for(int j=1;j<=n+1-i;j++){
//         cout<<'#'<<" ";
//         k++;
//     }
//     for(int j=1;j<=2*i-2;j++){
//         cout<<"  ";
//     }
//     k--;
//     for(int j=1;j<=n+1-i;j++){
//         cout<<"*"<<" ";
//         k--;
//     }
//     cout<<endl;
// }




// }



// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<"  ";
//     }
//     // int k=i;
//     for(int j=i;j>=1;j--){
//         cout<<j<<" ";
//         // k--;
//     }
//     cout<<endl;
// }}

// 1                 1 
// 1 2             2 1 
// 1 2 3         3 2 1 
// 1 2 3 4     4 3 2 1 
// 1 2 3 4 5 5 4 3 2 1 

// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<j<<" ";
//     }
//     for(int j=1;j<=2*(n-i);j++){
//         cout<<"  ";
//     }
//     for(int j=i;j>=1;j--){
//         cout<<j<<" ";
//     }
//     cout<<endl;
    
// }}

// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4     4 3 2 1 
// 1 2 3         3 2 1 
// 1 2             2 1 
// 1                 1 

// for(int i=1;i<=n;i++){
//     int l=1;
//     for(int j=1;j<=n+1-i;j++){
//         cout<<l<<" ";
//         l++;
//     }
//     for(int j=1;j<=2*i-2;j++){
//         cout<<"  ";
//     }

//     // for(int j=n-i+1;j>=1;j--){
//     //     cout<<j<<" ";
//     // }
//     l--;
//     for(int j=1;j<=n+1-i;j++){
//         cout<<l<<" ";
//         l--;
//     }
//     cout<<endl;    
// }}

// A B C D E F 
// H I J K L 
// N O P Q 
// S T U 
// W X 
// Z 

// char k='A';
// for(int i=1;i<=n;i++){
//     if(i==1){
//         for(int j=1;j<=n+1-i;j++){
//         cout<<k<<" ";
//         k++;
//         }
//     }
//     else{
//     k++;
//     for(int j=1;j<=n+1-i;j++){
//         cout<<k<<" ";
//         k++;
//     }
//     }
//     cout<<endl;
//     }
// }


// * * * * * * 
//   * * * * * * 
//     * * * * * * 
//       * * * * * * 
//         * * * * * * 
//           * * * * * * 

// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i-1;j++){
//         cout<<"  ";

//     }
//     for( int j=1; j<=n;j++){
//         cout<<"* ";
//     }
//     cout<<endl;

//     }
//     }


//           1   
//         c   d   
//       2   3   4   
//     e   f   g   h   
//   5   6   7   8   9   
// i   j   k   l   m   n   

// char l=99;
// int k =1;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<"  ";
        
//     }
//     if(i%2==1){
//         for(int j=1;j<=i;j++){
//             cout<<k<<"   ";
//             k++;
//         }
//         }
//     else{
//         for(int j=1; j<=i;j++){
//             cout<<l<<"   ";
//             l++;
//         }
//     }
//     cout<<endl;
//     }
// }

// * * * * * 
// *       * 
// *       * 
// *       * 
// * * * * * 

// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         if(i==1||i==n||j==1||j==n){
//             cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
//     }
//     cout<<endl;
// }
// }

// * * * * * 
//  * * * *
// * * * * * 
//  * * * *
// * * * * * 

// for(int i=1;i<=n;i++){
//     if(i%2==1){
//         for(int j=1;j<=n;j++){
//             cout<<"* ";
//         }
//     }
//         else{
//             for(int j=1; j<=n-1;j++)
//             cout<<" *"; 
//         }
//     cout<<endl;
// }
// }

// 1                 1 
// 1 2             2 1 
// 1 2 3         3 2 1 
// 1 2 3 4     4 3 2 1 
// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4     4 3 2 1 
// 1 2 3         3 2 1 
// 1 2             2 1 
// 1                 1 

// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<j<<" ";
//     }
//     for(int j=1;j<=2*(n-i);j++){
//         cout<<"  ";
//     }
//     for(int j=i;j>=1;j--){
//         cout<<j<<" ";
//     }
//     cout<<endl;
    
// }
// for(int i=1;i<=n;i++){
//     int l=1;
//     for(int j=1;j<=n+1-i;j++){
//         cout<<l<<" ";
//         l++;
//     }
//     for(int j=1;j<=2*i-2;j++){
//         cout<<"  ";
//     }

//     // for(int j=n-i+1;j>=1;j--){
//     //     cout<<j<<" ";
//     // }
//     l--;
//     for(int j=1;j<=n+1-i;j++){
//         cout<<l<<" ";
//         l--;
//     }
//     cout<<endl;    
// }
// }

// 1                 1 
// 1 2             2 1 
// 1 2 3         3 2 1 
// 1 2 3 4     4 3 2 1 
// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4     4 3 2 1 
// 1 2 3         3 2 1 
// 1 2             2 1 
// 1                 1 

for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<j<<" ";
    }
    for(int j=1;j<=2*(n-i);j++){
        cout<<"  ";
    }
    for(int j=i;j>=1;j--){
        cout<<j<<" ";
    }
    cout<<endl;
    
}
for(int i=2;i<=n;i++){
    int l=1;
    for(int j=1;j<=n+1-i;j++){
        cout<<l<<" ";
        l++;
    }
    for(int j=1;j<=2*i-2;j++){
        cout<<"  ";
    }

    // for(int j=n-i+1;j>=1;j--){
    //     cout<<j<<" ";
    // }
    l--;
    for(int j=1;j<=n+1-i;j++){
        cout<<l<<" ";
        l--;
    }
    cout<<endl;    
}
}