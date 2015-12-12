#include <iostream>
#include<vector>

using namespace std;



int main()

{

char str[7]={'a','b','c','d','e','f'};
int N=6;
int j=N-1;

    for(int i=0;i<(N/2);i++)
        {
            swap(str[i],str[j]);
            --j;
        }

    cout <<str << endl;
    return 0;
}
