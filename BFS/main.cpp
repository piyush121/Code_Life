#include <iostream>
#include <queue>

using namespace std;

struct mylist
{
    char key;
    mylist* next;
    mylist(char x)
    {
        key=x;
        next=NULL;
    }
};

bool check(char x,char arr[])
{
    for( int i=0; i<5;i++)
        if(x==arr[i])
            return true;
    return false;
}

void bfs(mylist adjlst[], char node)
{

    char explored[5];
    int count=0;
    int i=0;

    while (i<4)

    {   mylist* ptr=&adjlst[i];
        while (ptr!=NULL)
        {
        if(check(ptr->key,explored))
            ptr=ptr->next;
        else
        {cout<<ptr->key<<endl;
        explored[count]=ptr->key;
        count++;
        ptr=ptr->next;
        }
        }
        i++;
    }

    for(int i=0;i<4;i++)
        cout<<explored[i]<<"\t";
}

int main()
{
mylist adjlst[4]={'s','w','v','x'};
adjlst[0].next=new mylist('v');
adjlst[0].next->next=new mylist('w');

adjlst[1].next=new mylist('x');
adjlst[2].next=new mylist('x');

bfs(adjlst,'s');



    return 0;
}
