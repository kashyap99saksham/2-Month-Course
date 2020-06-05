// COMMENTED CODE IS FOR QUESTION WHEN THEY TELL US FIND SMALL NO. FROM GIVEN MIN POSITIVE
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;  cin>>t;
    while(t--)
    {
        int size;   cin>>size;
        map <int,int> m;
        int highest_greater_val = 0,total_positive = 0;
        // int min_positive = INT16_MAX;
        for (int i = 0; i < size; i++)
        {
            int val;    
            cin>>val;   
            if (val >= 0)   
            {   
                total_positive++;
                m[val]++;
            }  
            // if(val >= 0 && min_positive > val)     
            //         min_positive = val;
        }
        for (int i = 1; i < total_positive+1; i++)
        {
            if(m.find(i) == m.end())
            {
                cout<<i;    break;
            }
        }
        
        // while(total_positive--)
        // {
        //     min_positive++;
        //     if(m.find(min_positive) == m.end())
        //     {
        //         cout<<min_positive;
        //         break;
        //     }
        // }
        cout<<endl;        
    }       
}

