/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;
struct stud{
    float sub1;
    float sub2;
    float sub3;
    float sub4;
    float sub5;
    float sub6;
    void input(){
        cout<<"enter the marks"<<endl;
        cin>>sub1>>sub2>>sub3>>sub4>>sub5>>sub6;
    }
    void average(){
        cout<<"the average marks is"<<endl;
        int avg=(sub1+sub2+sub3+sub4+sub5+sub6)/6.0;
        cout<<avg<<endl;
    }
};
void func(stud &b){
    b.average();
}
int main(){
    stud s;
    s.input();
    func(s);

}
