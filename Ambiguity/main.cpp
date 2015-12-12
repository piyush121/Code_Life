#include <iostream>
#include <vector>
using namespace std;
//ostream cout;

class A{
    public:
       int x=1;
 virtual void show(){
cout<<"A";
x=10;
}
};
class B:virtual public A{
    public:
        int y=2;

};
class C:virtual public A
{
public:
    int z=3;
void show(){cout<<"C"<<endl;
cout<<x;}
};
class D: public B,C
{


};

int main()
{
    A* a=new(D);
    a->show();


    return 0;
}
