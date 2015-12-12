#include <iostream>

using namespace std;

void bsort(int A[],int N)
{
for(int i=0;i<N;i++)
        for(int j=1;j<N;j++)
            if(A[j]<A[j-1])
                swap(A[j],A[j-1]);

}

void ssort(int A[], int N)
{

    for(int i=0;i<N;i++)
            for(int j=i+1;j<N;j++)
                if(A[i]>A[j])
                    swap(A[i],A[j]);
}

void isort(int A[], int N)
{

    for(int i=0;i<N;i++)
            for(int j=i;j>0;j--)
                if(A[j-1]>A[j])
                    swap(A[j-1],A[j]);
}
int main()
{
    cout << "Hello world!" << endl;
    int arr[10]={9,5,6,7,10,5,4,3,2,1};
    isort(arr,10);
    for(int j=0;j<10;j++)
        cout<<arr[j];
    return 0;
}
