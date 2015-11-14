#include <iostream>
#include<list>
#include<array>
#include<map>

using namespace std;
//static int instance_counter=0;
class MyInterface
{
public:
  // Empty virtual destructor for proper cleanup
  virtual ~MyInterface() {}

  virtual void Method1() = 0;
  virtual void Method2() = 0;
};


class MyAbstractClass
{
public:
  virtual ~MyAbstractClass();

  virtual void Method1();
  virtual void Method2();
  void Method3();

  virtual void Method4(); // make MyAbstractClass not instantiable
};
int main()
{
    int** p;
    int key = 101;
    int* q = &key;
    p=&q;
    map<int,string> mymap;
    mymap.insert(pair<int,string>(4,"piyush"));
     mymap.insert(pair<int,string>(1,"Ajay"));
     int r[10];
     r[1]=key;
     q=&r[1];
     cout<<r[0]<<endl;
     delete[] r;


//MyAbstractClass *a=new MyAbstractClass;
cout<< "Final byee "<<endl<<**p<<endl<<mymap[1]<<endl<<mymap.size()<<endl;

for(map<int,string>::iterator itr= mymap.begin();itr!=mymap.end();itr++)
    cout<<itr->first<<": "<<itr->second<<endl;
    return 0;
}
