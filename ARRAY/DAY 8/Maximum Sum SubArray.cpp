#include <bits/stdc++.h>
using namespace std;
#define ll long long

int indexOfMax(int b[],int n)
{
    int mx = b[0];
    int index = 0;
    for(int j = 1;j<n;j++)
    {
        if(b[j] >= mx)
        {
            mx = b[j];
            index = j;
        }
    }
    return index;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];int b[n];
	    int sum = 0;
	    for(int i=0;i<n;i++)
	    {   
	        cin>>a[i];
	        if(a[i] < 0)
	        {
	            b[i] = -1;
	            sum = 0;
	        }
	        else
	        {
                sum += a[i];
                b[i] = sum; 
	        }
	    }
	    
	    int index = indexOfMax(b,n);
	    int start = index;
	    
	    while(start >= 0 && b[start] >= 0)
	        start--;
	        
        for(int j = start+1;j<=index;j++)
            cout<<a[j]<<" ";
        cout<<endl;
	}
	return 0;
}
// ----------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// #define loop(n) for(int i=0;i<n;i++)

// class custom
// {
//     public:
//         int index;
//         int val;
//         int Till_sum;
//         int length;
// };
// int main() 
// {
//     int t;  cin>>t;
//     while(t--)
//     {
//         int size;   cin>>size; 

//         vector<int>in(size);
//         loop(size)  cin>>in[i];

//         vector<custom>v(size);

//         int sum = 0,leng = 0,maxi = INT32_MIN,ind = 0;
//         for(auto i : in)
//         {   
//             v[i].val = i;
//             if(v[i].val < 0)
//             {
//                 v[i].Till_sum = INT32_MIN;
//                 v[i].length = 0;
//                 v[i].index = ind++;
//                 leng = 0;
//                 sum = 0;
//                 continue;
//             }
//             sum += v[i].val;   leng++;
//             v[i].Till_sum = sum;
//             v[i].length = leng;
//             v[i].index = ind++;
//             maxi = max(maxi,sum);
//         }

//         // Making another vector for taking repeated sum data
//         int max_len = INT32_MIN;
//         vector<custom> v2;
//         for(auto i : v)
//         {
//             if(i.Till_sum == maxi)
//             {
//                 v2.push_back(i);
//                 max_len = max(max_len,i.length);
//             }
//         }   

//         v.clear();      //clear first vector and use for values having same length
//         // Checking If sum will tie
//         for(auto i : v2)
//         {
//             if(i.length == max_len)
//                 v.push_back(i);
//         }
//         pair<int,int>ans;   //contain index and length
//         ans.first = 101;
//         for(auto i : v)
//         {
//             int start_ind = i.index-(i.length-1);
//             if(start_ind < ans.first)
//             {
//                 ans.first = start_ind;
//                 ans.second = i.length;
//             }
//         }

//         for(int i=ans.first;i<ans.second;i++)
//             cout<<in[i]<<" ";

//         // For printing values 
//         // for(auto i :v2)
//         // {
//         //     cout<<i.val<<" "<<i.Till_sum<<" "<<i.length<<endl;
//         // }
//         cout<<endl;        
//     }       
// }

