#include<iostream>
using namespace std;
int main()
{
    int n, i, result = 0;
    cin>>n;
    int *a = new int[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i = 0; i < n; i++)
    {
        result += i*a[i]*4;
    }
    cout<<result;
    return 0;
}
