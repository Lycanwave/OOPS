#include<bits/stdc++.h>

using namespace std;

class Person{

public: 
    Person(int x){
        cout<<"Person: "<<x<<endl;
    }
    Person(){
        cout<<"Person: default"<<endl;
    }
};

class Faculty : public Person{

public:
    Faculty(int x):Person(x){
        cout<<"Faculty: "<<x<<endl;
    }
    Faculty(){
        cout<<"Faculty: default"<<endl;
    }
};

class Student : public Person{

public:
    Student(int x):Person(x){
        cout<<"Student: "<<x<<endl;
    }
    Student(){
        cout<<"Student: default"<<endl;
    }
};

class TA : public Faculty , public Student{
public:
    TA(int x):Student(),Faculty(){
        cout<<"TA: "<<x<<endl;
    }
};

int main(){

    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif


    TA ta1(10);

    cout<<endl;

    Student s1(10);
    
    return 0;
}
