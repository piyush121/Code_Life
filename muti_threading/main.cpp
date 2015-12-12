#include <iostream>
#include <thread>

using namespace std;

void show()
{

    cout<<"Hello babes"<<endl;
}

int main()
{
    std::thread t1(show);  //t1 starts running
    t1.detach(); //t1 will run freely on its own --> t1 becomes a daemon process
try{
for(int i=0;i<100;i++)
{
    cout<<"From main: "<<i<<endl;
}

    if(t1.joinable())
        t1.join();

}
catch(...){
t1.join();
throw;
}


    return 0;
}
