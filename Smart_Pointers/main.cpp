#include <iostream>
#include <vector>

using namespace std;

void fun(int (*arr)[5]){
cout<<*(*arr+4)<<endl;};

int main()
{
    cout << "Hello world!" << endl;



vector<int> v={1,2,3,4,5,6};
for ( auto it = v.begin(); it != v.end(); ++it )
    cout<<*it<<endl;

int a[5]={1,2,3,4,5};

fun(&a);

    return 0;
}
