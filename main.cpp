#include <iostream>
using namespace std;
int main() {
    cout<<"Hello world!"<<endl;
    int a,b;

    cout<<"Enter first number : " << endl;
    cin>> a;

    cout<<"Enter second number : "<< endl;
    cin>>b;

    cout<<"You entered "<<a<< "and" <<b <<endl;
    cout<< "The sum of this two number is : "<<a+b<<endl;

    cout<<"The multiplication of this two number is : "<< a*b <<endl;
    if (a>b)
    {
        cout<<"The difference of this two number is : "<< a-b <<endl;
    }
    else {
     cout<<"The difference of this two number is : "<< b-a <<endl;
    }
    float c = a+0.00;
    float d = b+ 0.00;
    cout<< "The division of a/b is : "<< c/d << endl;
    cout<< "The division of b/a is : "<< d/c <<endl;
    return 0;
}