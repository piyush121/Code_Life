#include<iostream>
#define n 6
#define m 3
using namespace std;
int main()
{
    int a[m][n] = {
                  {1,  2,  3,  4,  5,  6},
                  {7,  8,  9,  10, 11, 12},
                  {13, 14, 15, 16, 17, 18}
    };
int k=0,l=0,i=0,j=0,h=n,r=0;

    while (l<m-1)
    {
        for(i=l;i<(h-1);i++)
            cout<<a[k][i]<<endl;
        k=i;
        cout<<"value of r "<<r<<endl;
        for(j=r;j<m-1;j++)
            cout<<a[j][k]<<endl;
        k=j;
        for(i=h-1-r;i>l;i--)
            cout<<a[k][i]<<endl;
        k=i;
        for(j=m-1-r;j>r;j--)
            cout<<a[j][k]<<endl;
        l++;
        k=j+1;
        h--;
        r++;
    }
    return 0;
}
