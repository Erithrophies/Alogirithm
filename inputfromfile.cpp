#include<bits/stdc++.h>

using namespace std;

void printlist(int *p, int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<p[i]<<endl;
    }
}

void bubblesort(int *A, int n)
{
    for(int k = 0; k<n ;k++)
    {
       for(int i = 0;i<=n-2; i++)
      {
           if(A[i]>A[i+1])swap(A[i],A[i+1]);
      }
    }

}
int main()
{
    int n = 10;
    int *a = new int[n];

    ifstream fin("10.txt");
    for(int i = 0; i<n; i++)
    {
        fin>>a[i];
    }
    printlist(a,n);
    bubblesort(a,n);
    cout<<"after sorting"<<endl;
    printlist(a,n);
    return 0;
}


