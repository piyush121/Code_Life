#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

unordered_set<int> myset;
int solution(int X, vector<int> &A) {
    // write your code in C++11
    for(unsigned int i=0;i<A.size();i++)
        {myset.insert(A[i]);
        for(int j=1;myset.find(j)!=myset.end();j++)
                if(j==X)
                    return i;
        }
    return -1;
}

int main()
{
    int arr[5]={};
    cout << "Hello world!" << endl;
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(1);
    vec.push_back(4);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(5);
    vec.push_back(4);

    cout<<solution(4,vec) ;
    return 0;
}
