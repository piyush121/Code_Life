#include <iostream>
#include<vector>

using namespace std;

int main()
{
    string x="2536745";
    string y="12345678";
    int LCS[x.length()+1][y.length()+1];

    for (unsigned int i=0;i<=y.length()+1;i++)
        LCS[0][i]=0;
    for (unsigned int i=0;i<=x.length()+1;i++)
        LCS[i][0]=0;


    vector<char> str;
    for (int i=0;i<x.length();i++)
        for (int j=0;j<y.length();j++)
           {
             if(x[i]==y[j])
                {LCS[i+1][j+1]=1+LCS[i][j];
                str.push_back(x[i]);
                }
            else
                LCS[i+1][j+1]=max(LCS[i][j+1],LCS[i+1][j]);
           }

    for(unsigned int i=0;i<=x.length();i++)
    {   cout<<endl;
        for(unsigned int j=0;j<=y.length();j++)
            cout<<LCS[i][j];
    }
cout<<"\n\nLongest subsequence: "<<endl;
for (vector<char>::iterator itr=str.begin();itr<str.end();itr++)
    cout<<*itr;
    return 0;
}
