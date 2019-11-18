#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;  cin >> t;
while(t)
{
    stack <int> s; s.push(0);
    int flag = 0,k=0, n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]==7)
        {
            flag=1;
            continue;
        }
        else if(arr[i] <7 && flag == 0)
        {
            if(arr[i] == s.top()+1 || arr[i] == s.top())
            {
                s.push(arr[i]);
            }
            else
            {k=1;
            break;}
        }
        else if(arr[i] < 7 && flag==1)
        {
            if(arr[i] == s.top())
            {
                s.pop();
            }
            else{ k=1; break;}
        }
        else if(arr[i]>7)
        k=1;
    }
    if(k==1)
    cout<<"yes\n";
    else
    {if(s.top()==0) cout<<"no\n";}


    t--;
}

return 0;
}
