#include<bits/stdc++.h>
using namespace std;

// Prints all subarrays in arr[0..n-1]
void subArray(int arr[], int n)
{   int counti =0;
    // Pick starting point
    for (int i=0; i <n; i++)
    {
        // Pick ending point
        for (int j=i; j<n; j++)
        {
            // Print subarray between current starting
            // and ending points
            if(arr[i]=='1' && arr[j]=='1')
            {
                cout<<arr[i];
            }

        }
    }
    cout<<counti;
}

// Driver program
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    subArray(arr, n);
    return 0;
}
