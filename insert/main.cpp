#include <iostream>

using namespace std;

int main()
{
  int a[7]={5,4,7,3,2,1,9};

  for(int i=0;i < 7;i++)
    {
        for (int j=i;j>0;j--)
        if(a[j]<a[j-1])
            swap(a[j],a[j-1]);


        else
        break;
    }

    for(int i=0;i < 7;i++)
        cout<<a[i]<<endl;
}
