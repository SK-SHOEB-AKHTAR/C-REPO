// // #include <bits/stdc++.h> 
// // #include <iostream>
// // using namespace std;

// // int main() {
// //     //Write your code here
// //     int a,b,c;
// //     cin>>a>>b>>c;
// //     if(a>b&&a>c){
// //         cout<<"p"<<endl;
// //         cout<<a;
// //     }
// //     else if(b>(a,c)){
// //         cout<<b;
// //     }
// //     else if(c>(b,a)){
// //         cout<<c;
// //     }

// //     return 0;
// // }
// #include <bits/stdc++.h> 
// #include <iostream>
// using namespace std;

// int main() {
//     //Write your code here
//     int x,y;
//     cin>>x>>y;
//     if(x>0&&y>0){
//         cout<<"1st Quadrant";
//     }
//     else if(x<0&&y>0){
//         cout<<"2nd Quadrant";
//     }
//     else if (x<0&&y<0){
//         cout<<"3rd Quadrant";
//     }
//     else if(x>0&&y<0){
//         cout<<"4th Quardant";
//     }
    
//     else if(x==0&&y==0){
//         cout<<"Origin";
//     }
//     else if(x==0){
//         cout<<"y axis";
//     }
//     else{
//         cout<<"x axis";
//     }


//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     //Write your code here
//     int n;
//     cin>>n;
//     int sum =0;
//     for(int i=2;i<=n;i++){
//       if (i % 2 == 0) {
//         sum = sum + i;
//       }
//     }
//     cout<<sum;

//     return 0;
// }

// #include <bits/stdc++.h> 

// #include <iostream>

// using namespace std;

 

// int main() {

//     //Write your code here

//     int x,i,n,pro=1;

//     cin>>x>>n;

//     if( x==0 && n==0)

//         cout<<"1";

//     else if (x!=0 && n==0)

//         cout<<"1";

//     else

//     {

//         for(i=0;i<n;i++)

//         {

//             pro*=x;

//         }

//         cout<<pro;

//     }

 

//     return 0;

// }

#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int x,n,y=1;
    cin>>x>>n;
    for(int i=1;i<=n;i++){
        y=y*x;
    }
    // cout<<pow(x,n);
    cout<<y;

    return 0;
}