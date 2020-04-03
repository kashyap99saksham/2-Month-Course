// USING HASHING
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;  cin>>t;
    while(t--)
    {
        int size;   cin>>size;
        map <int,int> m;
        for (int i = 0; i < size; i++)
        {
            int val;    cin>>val;   m[val]++;
        }
        bool flag = false;
        for (int i = 0; i < size; i++)
        {
            int val;    cin>>val;
            m[val]--;
        }
        for(auto i : m)
        {
            if(i.second != 0)
            {
                flag = true;
                cout<<0;
                break;
            }
        }
        if(!flag)
            cout<<1;
        cout<<endl;        
    }       
}



// ----------USING SORTING----------
// #include<bits/stdc++.h>
// using namespace std;
// int main() 
// {
//     int t;  cin>>t;
//     while(t--)
//     {
//         int size;   cin>>size;
//         vector <int> v1,v2; 
//         for (int i = 0; i < size; i++)
//         {
//             int val;    cin>>val;   v1.push_back(val);
//         }
//         for (int i = 0; i < size; i++)
//         {
//             int val;    cin>>val;   v2.push_back(val);
//         }
//         sort(v1.begin(),v1.end());
//         sort(v2.begin(),v2.end());
//         bool flag = false;
//         for (int i = 0; i < size; i++)
//         {
//             if(v1[i] != v2[i])
//             {
//                 flag = true;
//                 cout<<0;    break;
//             }
//         }
//         if(!flag)
//             cout<<1;
//         cout<<endl;
         
//         cout<<endl;        
//     }       
// }

