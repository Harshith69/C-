/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int *marks;
    int n;
    cout<<"enter the number of subjects: ";
    cin >> n;
    marks = new int[n];
    
    cout<<"Enter the marks of "<< n << "subjects:";
    for(int i=0;i<n;i++)
    cin>>marks[i];
    
    int *s=new int;
    for(int i=0;i<n;i++)
    *s+=marks[i];
    
    cout << "Average marks is: "<<(float)*s/n<<"\n";
    return 0;
}
