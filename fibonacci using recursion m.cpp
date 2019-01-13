#include<iostream>
using namespace std;
    int fibo (int n)
    {
        if (n==0||n==1)
        {
            return n;
        }
        int f1=fibo (n-2);
        int f2=fibo(n-1);
        int ans = f1 +f2;
        return ans;
    }
    int main ()
    {
        int n;
        cin>>n;
        cout<<fibo(n)<<endl;
        return 0;
    }
