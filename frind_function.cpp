#include<iostream>
using namespace std;
class k;
class d{
    private:
    int i=50;
    public:
    friend void monark(d,k) ;
};
class k{
    private:
    int i=100;
    public:
    friend void monark(d , k);
};
void monark(d r11,k r21)
{
    int sum;
    sum=(r21.i)+(r11.i);
    cout<<"sum="<<sum;
}
int main()
{
    d obj1;
    k obj2;
    monark(obj1 , obj2);
    return 0;

}
