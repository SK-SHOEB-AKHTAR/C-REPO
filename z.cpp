#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char k='A';
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(i==1||i==n||j+i==n+1){
                if(k==91){
                    k='A';
                }
                cout << k<<" ";
                k++;
            }
            else {
                cout << "  ";
            }
        }
        cout<<endl;
    }
}