#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;  cin >> t;
while(t)
{
    int X,Y,k,N,flag=0;
    cin>>X>>Y>>k>>N;
    for(int i=0;i<N;i++)
    {
        int page,price;
        cin>>page>>price;
        if((X-Y) <= page && k>=price)
        {
            flag=1;
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
