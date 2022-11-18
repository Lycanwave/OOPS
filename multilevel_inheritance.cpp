#include<bits/stdc++.h>

using namespace std;
    
class Student{
protected:
    int roll_number;
public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student :: set_roll_number(int r){
    roll_number = r;
}

void Student :: get_roll_number(){
    cout<<"The roll number is: "<<roll_number<<endl;
}

class Exam: public Student{
protected:
    float maths;
    float physics;
public:
    void set_marks(float,float);
    void get_marks(void);
};

void Exam :: set_marks(float m1,float m2){
    maths = m1;
    physics = m2;
}

void Exam :: get_marks(){
    cout<<"The marks obtained in Physics are: "<<physics<<endl;
    cout<<"The marks obtained in Maths are: "<<maths<<endl;
    cout<<"The Roll Number: "<<roll_number<<endl;
}


class Result : public Exam{
    float percentage;
public:
    void display(){
        get_roll_number();
        get_marks();
        percentage = (maths + physics)/2;
        cout<<"Your percentage is "<<percentage<<endl;
    }
};


int main(){

    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    Result stud;
    stud.set_roll_number(10);
    stud.set_marks(50,50);
    stud.display();
   
    
    return 0;
}

/*

Answer:

The roll number is: 10
The marks obtained in Physics are: 50
The marks obtained in Maths are: 50
The Roll Number: 10
Your percentage is 50


*/
