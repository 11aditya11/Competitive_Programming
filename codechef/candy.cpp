#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;  cin >> t;
while(t)
{
    int X,Y,k,N,flag=0;
    cin>>X>>Y>>k>>N;
    int Pages[N],Price[N];
    for(int i=0;i<N;i++)
    {
        cin>>Pages[i];
    }
    for(int i=0;i<N;i++)
    {
        cin>>Price[i];
    }
    for(int i=0;i<N;i++)
    {
        if((X-Y) <= Pages[i] && k>=Price[i])
        {
            flag=1;
            break;
        }
    }
    if(flag == 1)
    {
        cout<<"LuckyChef\n";
    }
    else
    {
        cout<<"UnluckyChef\n";
    }

    t--;
}

return 0;
}
