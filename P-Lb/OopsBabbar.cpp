#include<iostream>
using namespace std;

class shoeb {
    
    private:
    int helth;
    char level;

    // xyz.level='a';
    public:
    int getHelth(){
        return helth;
    }
    char getLevel(){
        return level;
    }
    void setHelth(int h){
        helth=h;
    }
    void setLevel(char ch){
        level=ch;
    }
};

int main(){
    shoeb xyz;
    cout<<"Health : "<<xyz.getHelth()<<endl;
    cout<<"Health : "<<xyz.getLevel()<<endl;

    xyz.setHelth(40);
    xyz.setLevel('a');

    cout<<"Health is : "<<xyz.getHelth()<<endl;
    cout<<"Health is : "<<xyz.getLevel()<<endl;

    return 0;

};