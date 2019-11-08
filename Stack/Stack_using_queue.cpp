#include <bits/stdc++.h>

using namespace std;

struct Stack
{
    queue <int> s1,s2;

    void enstack(int x)
    {
        while(!s1.empty())
        {
            s2.push(s1.front());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty())
        {
            s1.push(s2.front());
            s2.pop();
        }
    }

    int destack()
    {
        int x= s1.front();
        s1.pop();
        return x;
    }

};

int main()
{
    Stack s;
    s.enstack(1);
    s.enstack(2);
    s.enstack(3);
    s.enstack(4);

    cout<<s.destack()<<"\n";
    cout<<s.destack()<<"\n";
    cout<<s.destack()<<"\n";
    cout<<s.destack()<<"\n";

    return 0;

}
