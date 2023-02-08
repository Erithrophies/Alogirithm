#include<bits/stdc++.h>

using namespace std;

void printlist(int *p, int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<"Index of "<<i<<" is "<<p[i]<<endl;
    }
}

void selectionsort(int *A, int n)
{
    for(int i = 0; i<n ;i++)
    {
        int imin = i;
       for(int j = i+1; j<n; j++)
      {
           if(A[j]<A[imin])
           {
               imin = j;
           }
            swap(A[imin],A[i]);
      }
    }

}
int main()
{
    int n = 7000;
    int *a = new int[n];

    ifstream fin("sorted7k.txt");
    for(int i = 0; i<n; i++)
    {
        fin>>a[i];
    }
    printlist(a,n);
    selectionsort(a,n);
    cout<<"after sorting"<<endl;
    printlist(a,n);

    ofstream fout("7k.txt");
    srand(time(0));
//    int n = 7000;

    for(int i = 0; i<n; i++)
    {
        fout<<a[i]<<endl;
    }
    return 0;
}



