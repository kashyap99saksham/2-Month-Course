#include <bits/stdc++.h>
// #include <cstdint>
using namespace std;
int main()
{
	int t;	cin >> t;
	while (t--)
	{
		int n;	cin >> n;
		float p;	cin >> p;
		
		unordered_set<float> s;
		bool flag = false;
		for (int i = 0; i < n; i++)
		{
			float val;	cin>>val;
			s.insert(val);
		}
		
		for (auto i : s)
		{
			if (s.find(p / float(i)) != s.end())
			{
				cout << "Yes" << endl;
				flag = true;
				break;
			}
		}
		if (!flag)
            cout << "No" << endl;
	}	
}
