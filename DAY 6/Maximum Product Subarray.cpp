// WRONG/INCORRECT
#include <boost/multiprecision/cpp_int.hpp> 
using namespace boost::multiprecision; 
#include<bits/stdc++.h>
using namespace std;
#define loop(n) for(int128_t i=0;i<n;i++)

int main() 
{
    int128_t t;  cin>>t;
    while(t--)
    {
        int128_t size;   cin>>size;
        vector<int128_t>v(size);
        loop(size)  cin>>v[i];
        int128_t CurrentMax = v[0],CurrentMin = v[0],final = v[0];
        // bool flag = false;
        for(int128_t i = 1 ;i < size ; i++) 
        {
            int128_t temp = CurrentMax;
            CurrentMax = max(CurrentMax * v[i] ,max( CurrentMin * v[i], v[i] ));
            CurrentMin = min(temp * v[i],min( CurrentMin * v[i], v[i]));
            // if(CurrentMax >= final) 
                // flag = true;
            final = max(final,CurrentMax);
        }
        // if(!flag){   cout<<v[0]; break; }
        cout<<final<<endl;        
    }       
}

