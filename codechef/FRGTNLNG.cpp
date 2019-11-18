#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;  cin >> t;
while(t)
{
    int N,K;
    cin>>N>>K;
    vector <string> s1;
    set <string> s2;

    for(int i=0;i<N;i++)
    {
        string x; cin>>x;
        s1.push_back(x);
    }
    for(int i=0;i<K;i++)
    {
        int k1;
        cin>>k1;
        for(int j=0;j<k1;j++)
        {
            string news; cin>>news;
            s2.insert(news);
        }
    }
    for(int i=0;i<N;i++)
    {
        if(s2.find(s1[i])!=s2.end())
            cout<<"YES ";
            else
            cout<<"NO ";
    }
    cout<<"\n";
    t--;
}

return 0;
}
