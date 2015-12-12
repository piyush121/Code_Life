#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++11
        int maxx=0;
        int index=0;
        int sum=A[0];
        int cnt=INT_MAX;
    for(unsigned int i=1;i<A.size();i++)
        {
        if(A[i-1]>A[i]  and cnt>=2 and maxx<sum/cnt)
            {
            maxx=sum/cnt;
            index=i-cnt+1;
            cout<<"index 1st loop is "<<index<<endl;
            cout<<"value of i "<<i<<endl;
            sum=A[i];
            cnt=1;
            }
        else
            {
            sum=A[i];
            cnt=1;
            }

        if(A[i]>A[i-1] and maxx<(sum/cnt) and cnt >=2)
            {
            maxx=sum/cnt;
            index=i-cnt+1;
            cout<<"index is 2nd loop "<<index<<endl;
            sum=A[i];
            cnt=1;


            }
        else
            {
            sum=A[i];
            cnt=1;
            }
        if(A[i]==A[i-1])
            sum=sum+A[i];
            cnt++;
        }
    return index;

}

int main()
{
    vector<int> vec1;
    vec1.push_back(4);
    vec1.push_back(2);
    vec1.push_back(2);
    vec1.push_back(5);
    vec1.push_back(1);
    vec1.push_back(5);
    vec1.push_back(8);
    int x = solution(vec1);

    cout<<"Final Answer: "<<x<<endl;

    return 0;
}
