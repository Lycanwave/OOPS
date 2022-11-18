#include<bits/stdc++.h>

using namespace std;

//Base class.
class Employee{    

public:
    int id;
    float salary;
    Employee(int id){
        this->id = id;
        salary  = 34.0;
    }

    Employee(){}
};

//Derived Class


class Programmer : Employee {
    //class Programmer : Employee;
    //Default visibility mode is private;
    //private members(Base class) are never inherited;
public:

    Programmer(int id){
        this->id = id;
        //cout<<id<<endl;
    }

    int languageCode = 9;

    void getData(){
        cout<<id<<endl;
    }

};

int main(){

    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    Employee emp_1(1),emp_2(2);

    cout<<emp_1.salary<<endl;
    cout<<emp_2.salary<<endl;

    Programmer skill(10);
    cout<<skill.languageCode<<endl;
    skill.getData();
    

    
    return 0;
}
