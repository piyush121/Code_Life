#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <unordered_map>

using namespace std;
unordered_map<int,int> mymap;
unordered_map<int,int> mymap1;
string tmp;

void PFF(string file)
{
    string str;
    int page,num_page;
    int last_page_fault=0;
    int counter=0;
    int freq=2;
    ifstream infile;
	infile.open(file);
	getline(infile,str);        //Skipping first line and storing the max number of pages process requires.
    istringstream(str)>>num_page;
	while(!infile.eof()) // To get you all the lines.
        {
	        getline(infile,str);
	        istringstream(str)>>page;// Saves the line in value.
	        cout<<"Searching page:"<<page<<endl;// Prints our value.

	        if(mymap.find(page)!=mymap.end())
                {
                    mymap[page]=1;
                    ++counter;              // increasing timer.
                    cout<<"Page number: "<<page<<" found"<<endl;

                }
            else
            {   cout<<"Page number: "<<page<<" not found"<<endl;
                if(counter - last_page_fault >= freq)       // Checking PFF condition.
                  {
                     cout<<"Page fault frequency: "<<counter - last_page_fault<<endl;
                     for(unordered_map<int,int>::iterator itr=mymap.begin();itr!=mymap.end();)
                       {
                        if(itr->second==0)
                            mymap.erase(itr++);
                        else
                           {
                             itr->second=0;
                             itr++;
                           }

                       }
                    mymap[page]=1;
                    last_page_fault=counter;
                    ++counter;
                  }
                else
                {   mymap[page]=1;
                    last_page_fault=counter;
                    ++counter;

                }
             }

        }

infile.close();

}

void VSWS(string file)
{
    int num_page,page;
    int counter;
    int M=3,L=8,Q=3;
    int page_faults=0;
    string str;

    ifstream infile;
	infile.open(file);
	getline(infile,str);        //Skipping first line and storing the max number of pages process requires.
    istringstream(str)>>num_page;
	while(!infile.eof()) // To get you all the lines.
        {
	        getline(infile,str);
	        istringstream(str)>>page;// Saves the line in value.
	        cout<<"Searching page:"<<page<<endl;// Prints our value.

	         if(mymap1.find(page)!=mymap1.end())
                {
                    mymap1[page]=1;
                    ++counter;              // increasing timer.
                    cout<<"Page number: "<<page<<" found"<<endl;

                }
            else
            {
                page_faults++;
                if(page_faults<Q and counter<L)
                {
                    mymap1[page]=1;
                    ++counter;
                }
                else
                {
                    if(page_faults>=Q and (counter>=M and counter<=L))
                    {
                        counter=0;
                        page_faults=0;
                        for(unordered_map<int,int>::iterator itr=mymap.begin();itr!=mymap.end();)
                       {
                        if(itr->second==0)
                            mymap.erase(itr++);
                        else
                           {
                             itr->second=0;
                             itr++;
                           }

                       }
                    }

                    else
                    {
                        counter=0;
                        page_faults=0;
                        for(unordered_map<int,int>::iterator itr=mymap.begin();itr!=mymap.end();)
                            itr->second=0;


                    }
                }

            }

        }
}

int main(int argc, const char *argv[])

{   string str= argv[1];
    cout<<"Filename: "<<str<<endl;
    //PFF(str);
    VSWS(str);
    cout<<"\nFinal process pages in memory"<<endl;

    for(unordered_map<int,int>::iterator itr=mymap1.begin();itr!=mymap1.end();itr++)
        cout<<itr->first<<" -> "<<itr->second<<endl;


    return 0;
}
