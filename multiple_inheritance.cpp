#include<bits/stdc++.h>

using namespace std;


class A{

public:
    A(){
        cout<<"A is constructor called"<<endl;
    }

};

class B{
public:
    B(){
        cout<<"B is constructor called"<<endl;
    }

};

class C : public A ,public B{
public:
    C(){
        cout<<"C is constructor called"<<endl;
    }

};

int main(){

    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    C c;

    
    return 0;
}
