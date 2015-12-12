#include <iostream>
#include <vector>

using namespace std;
void sorts(vector<int>&);

int main()
{
    vector<int> newvec;
    newvec.push_back(10);
    newvec.push_back(9);
    newvec.push_back(8);
    newvec.push_back(7);
    newvec.push_back(6);
    newvec.push_back(5);
    //newvec.push_back(100);
    for ( unsigned int i=0;i< newvec.size();i++)
        cout<<newvec[i]<<endl;
    sorts(newvec);
    for ( unsigned int i=0;i< newvec.size();i++)
        cout<<newvec[i];

    return 0;
}

void sorts(vector<int>& vec)
{       int index=0;
    for (unsigned int i=0;i< vec.size();i++)
        {   index=i;
            for(unsigned int j=i;j< vec.size();j++)
            if(vec[j]<vec[i])
               index=j;
        swap(vec[i],vec[index]);
        }

}
