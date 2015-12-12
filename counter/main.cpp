#include <iostream>
#include <vector>

using namespace std;
int maxx=0;
int lastvalue=0;
void set(vector<int>& A, int N,int X)
    {
        for ( int i=0;i<N;i++)
            if(A[i]<lastvalue)
                A[i]=lastvalue;
    }

vector<int> solution(int N, vector<int> &A) {
    // write your code in C++11

    vector<int> B(N,0);
    for (int i=0;i<N;i++)
            B.push_back(0);
    for(unsigned int i=0;i<A.size();i++)
        {
            if(A[i]==N+1)
               lastvalue=maxx;

            else
            {   if(B[A[i]-1]<lastvalue)
                    B[A[i]-1]=lastvalue+1;
                else
                    B[A[i]-1]++;
                if(B[A[i]-1]>maxx)
                    maxx=B[A[i]-1];
            }
            for (unsigned int i=0;i<5;i++)
            cout<<B[i];
            cout<<endl;
        }
        set(B,N,maxx);
    return B;
}

int main()
{
    cout << "Hello world!" << endl;
    vector<int> vec1;
    vec1.push_back(3);
    vec1.push_back(4);
    vec1.push_back(4);
    vec1.push_back(6);
    vec1.push_back(1);
    vec1.push_back(4);
    vec1.push_back(4);

    vector<int> vec=solution(5, vec1);
    cout<<"Final Answer: "<<endl;
    for (unsigned int i=0;i<5;i++)
            cout<<vec[i];
    return 0;
}
