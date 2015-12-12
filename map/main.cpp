#include <iostream>
#include<vector>
#include<list>
#include<unordered_set>
#include<unordered_map>
#include <map>



using namespace std;

int main()
{
 vector<int> vec;
 vec.push_back(10);
 vec.push_back(1);

vector<int>::iterator itr=vec.begin();
vector<int>::iterator itr1=vec.end();

  cout<<*(itr1-1)<<endl<<*itr<<endl;

  list<int> mylist;
  mylist.push_front(10);
  mylist.push_back(100);

  list<int>::iterator itr2=mylist.begin();
  mylist.insert(itr2,50);


  for(itr2=mylist.begin();itr2!= mylist.end();itr2++)
    cout<<*itr2<<endl;

unordered_map<char,string> myset={{'b',"blue"},{'g',"green"},{'y',"yellow"}};
//unordered_map<string>::const_iterator itr3=myset.find('green');
cout<<myset['g']<<endl;

myset['r']="red";
cout<<myset['r']<<endl;
}
