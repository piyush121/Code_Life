#include <iostream>
#include<string>

using namespace std;

struct node
{
    int data;
    node* next;
};

int fib(int n)
{
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}

int main()
{

    string str="piyush";
   // static int r = 0;
int *ptr=NULL;
int a[5] = {1,2,3,4,5};
ptr=a;
*ptr=100;

string &str1=str;


cout<<ptr[0]<<endl<<str[5]<<endl;

node base,base1;
node* ptr1;
base.data=100;
base1.data=101;
base.next=&base1;
ptr1=&base;

cout<<ptr1->next->data<<endl;



  int n = 9;
  cout<<fib(n)<<endl;;

    return 0;
}
