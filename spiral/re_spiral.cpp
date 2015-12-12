#include<iostream>
#define n 3
#define m 6
using namespace std;
int main()
{
    int a[n][m] = {
                  {1,  2,  3,  4,  5,  6},
                  {7,  8,  9,  10, 11, 12},
                  {13, 14, 15, 16, 17, 18}
    };
    int b=0,c=0,d=n,e=m;
    while(b<=n/2||c<=m/2||d<=n/2||e>=m/2)
    {
        if(e-1>c)
        {
            for(int i=c;i<=e-1;i++)
            {
                cout<<a[b][i]<<endl;
            }
            b++;
        }
        if(d-1>b)
        {
            for(int i=b;i<=d-1;i++)
            {
                cout<<a[i][e-1]<<endl;
            }
            e--;
        }
        if(e-1>c)
        {
            for(int i=e-1;i<=c;i--)
            {
                cout<<a[d-1][i];
            }
            d--;
        }
        if(d-1>b)
        {
            for(int i=d-1;i<=b;i--)
            {
                cout<<a[c][i];
            }
            c++;
        }
    }
    return 0;
}
