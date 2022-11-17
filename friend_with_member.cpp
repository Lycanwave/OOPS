#include<bits/stdc++.h>

using namespace std;

class Complex;

class Calculator{

public: 
 
    int add(int a,int b){
        return a+b;
    }

    int sumRealComplex(Complex,Complex);
    int sumCompComplex(Complex,Complex);

};

class Complex{
    int a,b;
    //Individual declaration
    // friend int Calculator :: sumRealComplex(Complex,Complex);
    // friend int Calculator :: sumCompComplex(Complex,Complex);

    //Declaring the entire calculator class
    friend class Calculator;
public:
    
    void setNumber(int n1,int n2){
        a = n1;
        b = n2;   
    }

   

    void printNumber(){
        cout<<"Your Number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

int Calculator :: sumRealComplex(Complex o1,Complex o2){
    return o1.a + o2.a;
}

int Calculator :: sumCompComplex(Complex o1,Complex o2){
    return o1.b + o2.b;
}


int main(){

    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    Complex o1,o2;
    o1.setNumber(1,4);
    o2.setNumber(5,7);
    Calculator calc;

    int res = calc.sumRealComplex(o1,o2);
    cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
    int resc = calc.sumCompComplex(o1,o2);
    cout<<"The sum of Complex part of o1 ans o2 is "<<resc<<endl;

    return 0;
}
