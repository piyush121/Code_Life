#include <iostream>
void swap(int& a, int& b);

using namespace std;
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}


int partition(int A[],int head,int tail)
{
    int pivot= head;
    int i=head;
    if (head-tail==0)
        return A[0];

        for (int i=head;i<=tail;i++)
        cout<<A[i];
        cout<<endl;
    for(int j=head;j<=tail;j++)
    {  cout<<"entering for loop, a[j] is "<<A[j]<<"and pivot is "<<A[pivot]<<endl;
        if(A[j]< A[pivot])
           {    cout<<"value of pivot is "<<A[pivot]<<" and j is "<<A[j]<<endl;
               i++;
               swap(A[j],A[i]);
               cout<<"swapping... now a[i]="<<A[i]<<endl;
           }
    }
    swap(A[i], A[pivot]);
cout<<"exiting for loop with pivot"<<i<<endl;
    return i;
}

void quicksort(int A[],int head,int tail)
{   //cout<<"a[0] is"<<A[0]<<endl;
    int pivot;

    if (head < tail)
    {

       pivot=partition(A,head,tail);
       quicksort(A,head,pivot-1);
       quicksort(A,pivot+1,tail);

    }
}

int main()
{
    cout << "Hello world!" << endl;
    int B[]={8,6,3,9,1,1};
    for (int i=0;i<6;i++)
    cout<<B[i];
    cout<<"Sorting now..."<<endl;
    quicksort(B,0,5);
    for (int i=0;i<6;i++)
    cout<<B[i];


    return 0;
}
