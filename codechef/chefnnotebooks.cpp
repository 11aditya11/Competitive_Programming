#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;  cin >> t;
while(t)
{
    int N,k;
    cin>>N;
    vector <int> a;

    for(int i=0;i<N;i++)
    {
        cin>>k;
        a.push_back(k);
    }
    cout<<"max: "<<*max_element(a.begin(),a.end())<<"    "<<"min: "<<*min_element(a.begin(),a.end());



    t--;
}

return 0;
}
