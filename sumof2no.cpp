#include <iostream>
using namespace std;


// int solve(int a,int b){
//     int sum=a+b;
//     cout<<"Sum = "<<sum<<endl;
//     return sum;
// }


// int main(){

// int a;
// cin >> a;
// int b;
// cin >> b;
// int sum = 0;

// sum=solve(a,b);
// cout<<sum<<endl;
// }

// void fib(int n){
//     int a=0;
//     int b=1;
//     int sum=0;

//     for(int i=1; i<=n;i++){
//         cout<<a<<" ";
//         sum=a+b;
//         a=b;
//         b=sum;
//         }
//     // cout<<a<<" ";
//     // cout<<b<<" ";
//     // for(int i=3;i<=n;i++){
//     //     sum=a+b;
//     //     cout<<sum<<" ";
//     //     a=b;
//     //     b=sum;
//     // }

// }

// void fib(int n);

// int main(){
//     int n;
//     cin>>n;
//     fib(n);

    // int a=0;
    // int b=1;
    // int sum=0;

    // for(int i=1; i<=n;i++){
    //     cout<<a<<" ";
    //     sum=a+b;
    //     a=b;
    //     b=sum;
    //     }
// }

// void fib(int n){
//     int a=0;
//     int b=1;
//     int sum=0;

//     for(int i=1; i<=n;i++){
//         cout<<a<<" ";
//         sum=a+b;
//         a=b;
//         b=sum;
//         }
// }

// int main(){

//     int n;
//     cin>>n;
//     int f=1;
//     for(int i=1;i<=n;i++){
//         f=f*i;
//     }
//     cout<<"Factorial : "<<f;
// }

// int main(){
//     int j,n,k;
//     cin>>n;
//     k=0;
//     j=n;
//     while(n!=0){
//         n=n/10;
//         k++;

//     }

//     cout<<j<<" is a "<<k<<"-digit number"; 

    // if(k==3){
    //     cout<<j<<"  is a three digt no.:-";
    // }
    // else{
    //     cout<<j<<"  is not a three digit number";
    // }
// int main(){
//     int n,k,m=0;
//     cin>>n;
//     k=n;
//     while(n!=0){
//         m=m*10+(n%10);
//         n=n/10;
//     }
//     cout<<"reverse no = "<<m<<endl;
//     // cout<<k;
//     if(k==m){
//         cout<<"it is a paland"<<endl;
//             }
//     else{
//         cout<<"not a paland";
//     }
// }
// int main(){

//     int n,d,k,s=0;
//     cin>>n;
//     k=n;
//     while(n!=0){
//         d=n%10;
//         s=s+d*d*d;
//         n=n/10;
//     }
//     if(k==s){
//         cout<<"ok";
//     }
//     else{
//         cout<<"not ok ";
//     }
// }

// int main(){
//     char n;
//     cin>>n;
//     if(n=='A'||n=='E'||n=='I'||n=='O'||n=='U'||n=='a'||n=='e'||n=='i'||n=='o'||n=='u'){
//         cout<<"it is a towel";
//     }
//     else{
//         cout<<"it is a consonant";
//     }

    
// }


// int main(){

//     int i,k;
//     cout<<"enter 2 no.: ";
//     cin>>i>>k;
//     int c;
//     cout<<"enter your choice from your choice: ";
//     cin>>c;
//     if(c==1){
//         cout<<"add is= :"<<i+k;
//     }
//     else if(c==2){
//         cout<<"sub is= : "<<i-k;
//     }
//     else if(c==3){
//         cout<<"multy  is= : "<<i*k;
//     }
//     else if(c==4){
//         cout<<"qust is= : "<<i/k;
//     }
//     else if(c==5){
//         cout<<"rem.  is= : "<<i%k;
//     }
//     else {
//         cout<<" invalid input";
//     }

// }

// int main(){

    
//     int c;
//     cout<<"enter your choice from your choice: ";
//     cin>>c;
//     if(c==1){
//         cout<<"mon. :";
//     }
//     else if(c==2){
//         cout<<"tus. :";    }
//     else if(c==3){
//         cout<<"wed.. :";    }
//     else if(c==4){
//         cout<<"thus. :";    }
//     else if(c==5){
//         cout<<"fri. :";    }
//     else if(c==6){
//         cout<<"sat. :";    }
//     else if(c==7){
//         cout<<"sun. :";    }
//     else {
//         cout<<" invalid input";
//     }

// }

int main(){

    
    int c,d;
    cout<<"enter your no.";
    cin>>c>>d;
    int n=(c>d)?c:d;
    cout<<n<<" is greater:";
    // cin>>c>>d;
    // if(c>d ){
    //     cout<<c<<"  is greater : ";
    // }
    // else{
    //     cout<<d<<"  is greater";
    // }

    
}