#include <iostream>
#define R 3
#define C 6

using namespace std;


void spiralPrint(int m, int n, int a[R][C])
{
   int i=0,j=0,k=0;
    while(j<n)
        {cout<<a[i][j]<<"\t";
        j++;}
        j--;
    while(i<m)
        {cout<<a[i][j]<<"\t";
        i++;}
        i--;
    while(j>=0)
    {
        cout<<a[i][j]<<"\t";
        j--;
    }
    j++;
    while(i>=0)
        {cout<<a[i][j]<<"\t";
        i--;}
        i++;
        m=m-2;
        n=n-2;

}

/* Driver program to test above functions */
int main()
{
    int a[R][C] = {
                  {1,  2,  3,  4,  5,  6},
                  {7,  8,  9,  10, 11, 12},
                  {13, 14, 15, 16, 17, 18}
    };

    spiralPrint(R, C, a);
    return 0;
}
