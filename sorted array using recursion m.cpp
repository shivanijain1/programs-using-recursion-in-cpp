#include<iostream>
using namespace std;
int issortedarray (int *a,int n)
{
    if (n==1)
    {
        return true;

    }
    if (a[0]<a[1]&& issortedarray (a+1,n-1))
    {
        return true;
    }
    else
        return false;
}
int main ()
{

    int a[]={1,2,3,6,4};
    if (issortedarray(a,5))
    {
        cout<<"array is sorted"<<endl;
    }
    else
        cout<<"array not sorted"<<endl;
    return 0;
}
