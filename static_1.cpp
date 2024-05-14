#include<iostream>
using namespace std;
class A
{

    int a;
    static int b;
public:
    A(int x,int y)
    {
        x=a;
        y=b;
    }
    void u()
    {

        cout<<"\n"<<a<<"\n"<<b;
    }
    static u1()
    {

        cout<<b;
    }
};
int A::b=0;
int main()
{
    A obj1(10,50),obj2(100,500);
    obj1.u();
    obj2.u();
    A::u1();
    obj1.u();
        return 0;
}
