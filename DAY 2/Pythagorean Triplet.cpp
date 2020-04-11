#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;  cin>>t;
    while(t--)
    {
        int size;   cin>>size;
        unordered_map <int,int> m;
        // vector <int> v;
        for (int i = 0; i < size; i++)
        {
            int val;    cin>>val;   int val2 = pow(val,2);   m[val2];
        }
        bool flag = false; 
        for (auto i : m)
        {
            for (auto j : m)
            {
                int sum = (i.first + j.second);
                if(m.find(sum) != m.end())
                {
                    flag = true;
                    cout<<"Yeah Mill gya\n";
                    break;
                }
            }
            if(flag == true)
                break;
        }
        if(flag == false)
            cout<<"Nhi mila\n";        
        cout<<endl;        
    }       
}
