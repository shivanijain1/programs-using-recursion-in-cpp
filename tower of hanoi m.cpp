#include<iostream>
using namespace std;
void hanoi(int n,char src,char dest,char hlpr)
{
    if (n==0)
    {
        return;
    }
hanoi (n-1,src,hlpr,dest);
cout<<"move"<<" "<<n<<"from"<<src<<"to"<<dest<<endl;
hanoi (n-1,hlpr,dest,src);
}
int main()
{
    int n;
    cin>>n;
    hanoi (n,'A','C','B');
    return 0;
}
