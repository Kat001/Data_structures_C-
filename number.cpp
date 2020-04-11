#include<iostream>
#include<vector>
using namespace std;

int main()
{
	std::vector<int> v;
	int n,k,val;
	cout<<"Enter the vale of n:";
	cin>>n;
	cout<<"Enter the value of k:";
	cin>>k;
	for(int i=0;i<n;i++)
	{
		cin>>val;
		v.push_back(val);
	}
	for(int i=0;i<n;i++)
	{
		cout<<v[i];
	}
	return 0;
}