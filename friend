#include<bits/stdc++.h>

using namespace std;

class Complex{
    int a,b;
public:
    
    void setNumber(int n1,int n2){
        a = n1;
        b = n2;   
    }

    friend Complex sumComplex(Complex o1,Complex o2); //Declaring that the sum complex is friend of complex
                                                      //It will help to access the private member of Complex Class.

    void printNumber(){
        cout<<"Your Number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

Complex sumComplex(Complex o1,Complex o2){

    Complex o3;
    o3.setNumber(o1.a+o2.a , o1.b+o2.b);
    return o3;
}



int main(){

    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    Complex c1,c2,sum;
    c1.setNumber(1,4);
    c1.printNumber();

    c2.setNumber(5,8);
    c2.printNumber();

    sum = sumComplex(c1,c2);
    sum.printNumber();
    
    return 0;
}


/*Properties of friend function

1. Not in the scope of class.
2. Since it is not in the scope of the class, it cannot be called from the
    object of that class. (c1.sumComplex() is invalid).
3. Can be invoked without the help of any Object.
4. Usually contains the object as argument.
5. can be declared inside public and private sector of the class.
6. It cannot access the member function.
*/
