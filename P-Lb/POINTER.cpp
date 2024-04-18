#include<iostream>
using namespace std;

void sum(int *a, int *b){
    cout<<(*a)++<<" "<<(*b)++<<endl;  //8 10
    cout<<"sum = "<<*a+*b<<endl;  //sum = 20  9 11
    printf("%d",*a);

}
void mult(int &a, int &b){
    cout<<a++<<" "<<b++<<endl; // 9 11
    cout<<a*b<<endl;  //10 12 120
}

int main(){
    int a,b;
    // cin>>a>>b;  //a=8,b=10;
    scanf("%d ""%d",&a,&b);
    sum(a,b);  //9 11
    // mult(a,b);
    // cout<< a<<" "<<b <<endl;  //9 11;
    int *p=&a;
    // cout<<&a<<endl;//address of a
    // cout<<&p<<endl;//address of p;
    // cout<<p<<endl;//adrress of a
    // cout<<*p;//vlue of a;


    



}