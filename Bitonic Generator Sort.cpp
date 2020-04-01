#include<bits/stdc++.h>
using namespace std;
void print_arr(vector <int> e,vector <int> o,int size)
{
    for (int i = 0; i < size/2; i++)
        cout<<e[i];
    for (int i = 0; i < size/2; i++)
        cout<<o[i];        
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int size;
        cin>>size;
        vector<int> even,odd;
        for (int i = 0; i < size; i++)
        {
            int val;
            cin>>val;
            if(i%2==0)
                even.push_back(val);
            else
                odd.push_back(val);
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater<int>());
        print_arr(even,odd,size);
    }
}




// --------------- BAD METHOD:(---------------
// int size,j=0,k=0;
//         cin>>size;
//         int arr[size],odd_index[size/2],even_index[size/2];
//         for (int i = 0; i < size; i++)
//             cin>>arr[i];
//         for (int i = 0; i < size; i++)
//         {
//             if(i%2==0)
//                 even_index[j++] = arr[i];
//             else
//                 odd_index[k++] = arr[i];
//         }
//         sort(even_index,even_index+size/2);
//         sort(odd_index,odd_index+size/2,greater<int>());
//         for (int i = 0; i < size/2; i++)
//             cout<<even_index[i]<<" ";
//         for (int i = 0; i < size/2; i++)
//             cout<<odd_index[i]<<" ";
//         cout<<endl;            