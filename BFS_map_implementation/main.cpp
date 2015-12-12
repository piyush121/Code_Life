#include <iostream>
#include <deque>
#include <map>

using namespace std;

bool check(char x,char arr[])
{
    for( int k=0; k<5;k++)
        if(x==arr[k])
            return true;
    return false;
}

void bfs(map<char,deque<char> > que, char node)
{

    char visited[5];
    int count=0;
    unsigned int i=0;
    deque<char> deq,deq1;
    deq.push_back(node);

    while (i<deq.size())
    {   //cout<<"deq[i] :  "<<deq[i]<<endl;
            if( check(deq[i],visited))
            {
                cout<<"visited: "<<deq[i]<<endl;
                i++;
            }

            else
                {   deq1=(*(que.find(deq[i]))).second;
                    for(unsigned int j=0;j<deq1.size();j++)
                    {
                        cout<<"pushing :"<<deq1[j]<<endl;
                        deq.push_back(deq1[j]);

                    }

                    cout<<deq[i]<<endl;
                    visited[count]=deq[i];
                    count++;
                    i++;

                }

                }
        for(unsigned int i=0;i<deq.size();i++)
        cout<<deq[i]<<"\t";
    }

int main()
{
    map<char, deque<char> > adjlst;

    deque<char> que1,que2,que3,que4,que5;
    que1.push_back('v');
    que1.push_back('w');
    que2.push_back('x');
    que3.push_back('x');
    que4.push_back('y');

    adjlst.insert(make_pair('s',que1));
    adjlst.insert(make_pair('v',que2));
    adjlst.insert(make_pair('w',que3));
    adjlst.insert(make_pair('x',que4));
    adjlst.insert(make_pair('y',que5));




bfs(adjlst,'s');



    return 0;
}
