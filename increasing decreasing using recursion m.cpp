#include<iostream>
using namespace std;
int increasing (int n)
{
    if (n==0)
    {
        return 0;
    }
  increasing (n-1);
    cout<<n<<endl;
}
int decreasing (int n)
{
    if (n==0)
    {
        return 0;
    }
    cout<<n<<endl;
  decreasing (n-1);

}
int main ()
{
    int n;
    cin>>n;
cout<<increasing(n)<<endl;
   cout<<decreasing(n)<<endl;
    return 0;
}
