#include<bits/stdc++.h>
using namespace std;

printlist(int *p,int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<p[i]<<endl;;
    }
    //cout<<endl;
}

void mergelist(int *A, int l, int m, int r)
{
    int n1 = m - l+1;
    int n2 = r - m;

    int *L = new int[n1];
    int *R = new int[n2];

    for(int i = 0; i<n1; i++)
    {
        L[i] = A[l+i];
    }

     for(int i = 0; i<n2; i++)
    {
        R[i] = A[m+1+i];
    }
  int i = 0, j=0, k = l;
  while(i<n1 && j<n2)
  {
      if(L[i]>R[j])
        A[k++] = R[j++];
      else
        A[k++] = L[i++];
  }
  while(i<n1)
  {
      A[k++] = L[i++];
  }
  while(j<n2)
  {
      A[k++] = R[j++];
  }
}

void mergesort(int *A, int left, int right)
{
    int mid;
    if(left<right)
    {
        mid = (left + right)/2;
        mergesort(A,left,mid);
        mergesort(A,mid+1,right);
        mergelist(A, left, mid, right);
    }
}
int binarysearch(int *a, int n, int x)
{
    int low = 0;
    int high = n-1;
    while(low<high)
    {
        int mid = (low + high)/2;
        if(x == a[mid])
        {
            return mid;
        }
        if(x<a[mid])
        {
            high = mid -1;
        }
        else
        {
            low = mid +1;
        }
    }
    return -1;
}
int main()
{
    srand(time(0));
    int n = 10000;
    int *a = new int[n];
    for(int i = 0; i<n; i++)
     {
        a[i] = rand()%1000+1;
     }
    cout<<"A= "<<endl;
    printlist(a,10000);

    mergesort(a,0,9999);
    cout<<"Merged A = "<<endl;
    printlist(a,10000);
    int x = binarysearch(a,n,450);
    if(x != -1)
        cout<<"found  at index  "<<x<<endl;
    else
        cout<<"not found"<<endl;
    return 0;

}
