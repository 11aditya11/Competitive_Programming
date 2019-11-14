#include<bits/stdc++.h>
using namespace std;

void findx(int arr[], int n)
{
    int k,i;
    for(i=n-1;i!=0;i--)
    {
        if(arr[i]>arr[i-1])
        {
            break;
        }
    }
    i=i-1;
    if(i == -1)
    {
        cout<<-1;
    }
    else
        {
            for(k=n-1;k!=0;k--)
            {
                if(arr[k] > arr[i])
                break;
            }
            swap(arr[i],arr[k]);


            int tbsorted[n-k];
            for(int i=k;i<n;i++)
                tbsorted[i-k]=arr[i];
            sort(tbsorted, tbsorted + n - k);
        for(int i=0; i<k;i++)
            cout<<arr[i];
        for(int i=0;i<n-k;i++)
            cout<<tbsorted[i];cout<<endl;
        }
}
int main()
{
int t;cin>>t;
while(t)
    {
        int n;
        cin >> n;
        int arr[n];

        for(int i=0;i< n;i++)
        {
            cin>>arr[i];
        }
        findx(arr,n);
    t--;
    }
    return 0;
}
