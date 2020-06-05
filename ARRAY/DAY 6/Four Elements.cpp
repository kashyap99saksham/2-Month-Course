#include<bits/stdc++.h>
using namespace std;
#define lint long long int
#define loop(n) for(lint i=0;i<n;i++)
int main() 
{
    int t;  cin>>t;
    while(t--)
    {
        lint size;   cin>>size;

        vector<int>v(size);
        loop(size)  cin>>v[i];
        
        sort(v.begin(),v.end());

        int sum;    cin>>sum;
        
        bool flag = false;
        
        for(int i = size-1 ; i >= 3 ; i--)
        {
            for(int j = i-1 ; j >= 2 ; j--)
            {
                int left = 0;
                int right = j-1;
                while(left < right)
                {
                    if(v[left] + v[right] + v[j] + v[i] == sum)
                    {
                        cout<<1;
                        flag = true;
                        break;
                    }
                    else if((v[left] + v[right] + v[j] + v[i] > sum))
                        right--;
                    else
                        left++;

                    if(flag)
                        break;
                }
                if(flag)
                    break;
            }
            if(flag)
                break;
        }
        if(!flag)
            cout<<0;
        cout<<endl;        
    }       
}

