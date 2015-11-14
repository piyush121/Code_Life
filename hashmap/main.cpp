#include <iostream>
#include "hash.h"
using namespace std;

const int TABLE_SIZE = 131;
bool flag=true;

struct keyval
{
    string key="empty";
    int val=0;
    keyval* nxt=NULL;
};

int hashval(string str)
{
    int hash=0;
        for (unsigned int i=0;i<str.length();i++)
    {
        hash=hash + str[i];

    }
    cout<<hash<<endl;
    return hash%TABLE_SIZE;
}
void input(keyval table[])

{
    string str;
    string choice;
    int marks;
    cout<<"please input the name and marks"<<endl;
    cin>>str>>marks;
    int index=hashval(str);
    keyval *curr=&table[index];
    while (curr->key != "empty")
    {
        curr=curr->nxt;
    }
    keyval* newkey= new keyval;
    curr->key=str;
    curr->val=marks;
    curr->nxt=newkey;

    cout<<"Input to hash table done"<<endl;
    cout<<"Location: "<<index<<endl<<"item: "<<curr->key<<endl;
    cout<<"Type yes for more input"<<endl;
    cin>>choice;
    if(choice=="no")
    {
        flag=false;
    }
}

void print(keyval table[])
{   keyval *curr=&table[0];
    for( int i=0;i<TABLE_SIZE;i++)
    {
        while(curr->key!="empty")
        {
            cout<<"name: "<<curr->key<<endl<<"marks: "<<curr->val<<endl;
            curr=curr->nxt;
            if(curr->key!="empty")
                cout<<"Going to next list item at table index: "<<i<<endl;
        }
        curr=&table[i];

    }
}

int main()
{
    keyval table[TABLE_SIZE];
    while(flag==true)
    {
      input(table);
    }

print(table);


}
