#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;
    while(t--)
    {
        int size,sum; cin>>size>>sum;
        vector <int> v;
        for (int i = 0; i < size; i++)
        {
            int val;    cin>>val;
            v.push_back(val);
        }
        int temp=0,head=0;
        bool flag = false;
        for (int i = 0; i < size; i++)
        {
            temp = temp + v[i];
            while(temp > sum)
            {
                temp = temp - v[head++];
            }
            if(temp == sum)
            {
                flag = true;
                cout<<head+1<<" "<<i+1;
                break;
            }
        }
        if(flag==false)
            cout<<-1;    
        cout<<endl;
    }       
}

// TIME COMPLEXITY : O(N^2)
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long int test;
//     cin>>test;
//     while(test--)
//     {
//         long long int size,sum;   cin>>size>>sum;
//         vector <long long int> v;
//         for (long long int i = 0; i < size; i++)
//         {
//             long long int val; cin>>val;
//             v.push_back(val);
//         }
//         long long int temp = 0,ending_index=0;
//         for (long long int i = 0; i < size; i++)
//         {
//             for (long long int j = i; j < size; j++)
//             {
//                 if(temp < sum)
//                     temp = temp + v[j];
//                 if(temp > sum)
//                 {
//                     temp = 0;
//                     break;
//                 }
//                 if(temp == sum)
//                 {
//                     ending_index = j;
//                     break;
//                 }
//             }
//             if(ending_index != 0)
//             {
//                 cout<<i+1<<" "<<ending_index+1;
//                 break;
//             }
//         }
//         if(ending_index == 0)
//         {
//             cout<<-1;
//         }        
//         cout<<endl;
//     }
// }