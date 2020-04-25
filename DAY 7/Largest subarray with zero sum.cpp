#include<bits/stdc++.h>
using namespace std;
#define loop(n) for(int i=0;i<n;i++)
int main() 
{
    int t;  cin>>t;
    while(t--)
    {
        int size;   cin>>size;
        unordered_map <int,int> m;
        int sum = 0;
        int length = 0;
        loop(size)  
        {
            int val;    cin>>val;
            sum += val;

            if(sum==0)  length = i+1;

            if(m.find(sum) != m.end())
            {
                length = max( length , i - m[sum] );
            }
            else
                m[val] = i;
        }
        cout<<length;
        cout<<endl;        
    }       
}



// ---------------------------------------------------------
// IF yOU ARE REQUIRED TO COMPLETE THE FUNCTION 
// int maxLen(int A[],int n)
// { 
//     int sum=0,max_len=0;
//     unordered_map<int,int> m;                      //the major concept here is if sum is 15 somewhere,after moving frward with
//                                                         //i if we found 15 again,so there must be a subarray between pervious 15 and current 15 whose sum is 0; 
//     for(int i=0;i<n;i++)
//     {
//         sum += A[i];

//         if(sum==0)                                     
//             max_len = i+1;
        
//         if(m.find(sum) != m.end())                                //find on map searches the key elements                                                                     //if not found,then it iterates to end of map
//             max_len = max( max_len , i - m[sum] );                        
        
//         else
//             m[sum]=i;                                            //if some is not found in table ,we store it;
//     }
//     return max_len;
// }

