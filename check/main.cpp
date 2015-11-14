#include <iostream>
#include<deque>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int arr[5]={1,2,3,4,5};
    int* ptr;

    ptr=&arr[2];
    //cout<<*ptr;

    deque<char> dque;
    dque.push_back('s');
    dque.push_back('t');
    dque.push_back('u');
    dque.push_back('v');
    dque.pop_front();
    cout<<dque[0]<<endl<<dque.size();
    return 0;
}
