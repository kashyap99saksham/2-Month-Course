// Input:
// 2
// 5 5 9
// 1 2 4 5 7
// 5 6 3 4 8 

// 2 2 3
// 0 2
// 1 3
// Output:
// 1 8, 4 5, 5 4
// 0 3, 2 1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t; 
    while(t--)
    {
        int size1,size2,sum;   cin>>size1>>size2>>sum;
        vector <int> v;
        for (int i = 0; i < size1; i++)
        {
            int val;    cin>>val;
            // if(val > sum)
            //     continue;
            v.push_back(val);
        }
        sort(v.begin(),v.end());
        unordered_map <int,int> m;
        for (int i = 0; i < size2; i++)
        {
            int val;    cin>>val;
            // if(val > sum)
            //     continue;
            m[val]++;
        }
        bool flag = false; 
        for (int i = 0; i < size1; i++)
        {
            int dif = sum - v[i];
            if(flag == true && m.find(dif) != m.end())
            {
                cout<<", "<<v[i]<<" "<<dif;
            }
            if(flag == false && m.find(dif) != m.end())
            {
                flag = true;
                cout<<v[i]<<" "<<dif;
            }   
        }
        if(!flag)
            cout<<-1;
        cout<<endl;  
    }
}
