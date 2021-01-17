#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i=0, c=0, o=0, e=0;
    cin>>n;
    int arr[n];
    while(i<n)
    {
        cin>>arr[i];
        i++;
        if(arr[i]%2==0)
        {
            e++;
            c = 1;
        }
        else
        {
            o++;
            c = 0;
        }
        if(e==0 && i>1)
            if(c=1)
        
    }
    
}