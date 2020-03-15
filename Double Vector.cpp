#include <iostream> 
#include <vector> 

using namespace std;

int main()
{
	vector<vector<int> >vv;
	for (int i = 0; i < 5; i++)
	{
		vector<int>v;
		for (int j = 0; j < 5; j++)
		{
			v.push_back(i);
		}
		vv.push_back(v);
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << vv[i][j];
		}
		cout << endl;
	}

	return 0;
}