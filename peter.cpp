#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int sum,flag=0;
    for (int no = 0; no < (1 << n); no++)
    {
        sum=0;
        for (int bits = 0; bits < n; bits++)
        {
            if (no & (1 << bits))
            {
                sum += arr[bits];
            }
            else
            {
                sum -= arr[bits];
            }
        }
        if(sum%360==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    
    return 0;
}