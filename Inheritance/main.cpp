#include <iostream>
#include<math.h>

using namespace std;

class A
{ public: void eat(){ cout<<"A";} };


class B: virtual public A
{
};

class C: virtual public A
{

};

class D: public         B,C
{  };
int solution(int X, int Y, int D) {
    // write your code in C++11
    if((Y-X)%D==0)
        return (Y-X)/D;
    else
        return (Y-X)/D+1;
}
int main(){
    A *a = new D();
    a->eat();
    D d;
    d.eat();
    cout<<endl;
    cout<<solution(10,100,20)<<endl;;
}


