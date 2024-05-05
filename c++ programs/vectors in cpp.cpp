#include<iostream>

#include<vector>
#include<iterator>
using namespace std;
int main()
{
	vector<int>a;
	a.push_back(10);
	a.push_back(20);
//	auto v=a.begin();
	for(auto it:a)
	{
		cout<<it<<" ";
	}
	return 0;
}
