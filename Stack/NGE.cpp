// C++ linear time solution for stock span problem
#include <iostream>
#include <stack>
using namespace std;

void printNGE(int arr[], int n)
{
    stack <int> s;
    s.push(arr[0]);

    for(int i=1; i<n; i++)
    {
        if(s.empty())
        {
            s.push(arr[i]);
        }
        while(!s.empty() && s.top() < arr[i])
        {
            int x= s.top();
            cout<<"\n"<<x<<"--> "<<arr[i];
            s.pop();
        }
        s.push(arr[i]);
    }
        while(!s.empty())
        {
            cout<<"\n"<<s.top()<<"--> -1";
            s.pop();
        }
}

int main()
{
	int arr[] = {11,13,21,3};
	int n = sizeof(arr) / sizeof(arr[0]);

	printNGE(arr, n);


	return 0;
}
