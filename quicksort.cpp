#include<bits/stdc++.h>
using namespace std;

int partition(int *a, int low,int  high)
{
    int left, right, pi_item;
    pi_item = a[low];
    left = low;
    right = high;
    while(left < right)
    {
        while(a[left] <= pi_item)
        {
            left++;
        }
        while(a[right] > pi_item)
        {
            right --;
        }
        if(left < right)
        {
            swap(a[left], a[right]);
        }


    }
    swap(a[low] , a[right]);
       // a[right] = pi_item;
        return right;
}

void quicksort(int *a, int low, int high)
{
    int pivot;
    if(low<high)
    {
        pivot = partition(a, low, high);
        quicksort(a, low, pivot-1);
        quicksort(a,pivot+1, high);
    }
}
int main()
{
    int n;
    cin>>n;

    srand(time(0));
    int *p = new int[n];
    for(int i = 0; i<n ; i++)
    {
        p[i] = rand()%1000+1;
    }

    /*for(int i = 0; i<n ; i++)
    {
        cout<<p[i]<<"  ";
    }
    cout<<endl;*/

    quicksort(p, 0, n-1);
    for(int i = 0; i<n ; i++)
    {
        cout<<p[i]<<endl;
    }
    cout<<endl;
    return 0;
}
