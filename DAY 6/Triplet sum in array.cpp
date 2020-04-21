#include<bits/stdc++.h>
using namespace std;
#define lint long long int
#define loop(n) for(lint i=0;i<n;i++)
#define loopback(n) for(lint i=n-1;i>=2;i--)
void checkSum(vector<lint>v,lint size,lint sum)
{
    lint left,right;
    bool flag = false;
    loopback(size) 
    {
        left = 0;
        right = i-1;
        while(left < right)
        {
            if(v[left] + v[right] + v[i] == sum)
            {
                // cout<<v[left]<<" "<<v[right]<<" "<<v[i]<<" ";
                cout<<1<<" ";
                flag = true;
                break;
            }
            else if(((v[left] + v[right] + v[i]) < sum))
                left++;
            else
                right--;
        }
        if(flag)
            break;
    }
    if(!flag)    cout<<0;
}
int main() 
{
    lint t;  cin>>t;
    while(t--)
    {
        lint size,sum;   cin>>size>>sum;
        vector<lint>v(size);
        // Taking Array from user
        loop(size)  cin>>v[i];
        // Sort vector
        sort(v.begin(),v.end());
        checkSum(v,size,sum);
        cout<<endl;        
    }       
}

