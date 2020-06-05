// TRY TO LEARN THESE EXPRESSION FOR CONSTANT TIME
// for odd N : floor( (n-3)/4 )+2
// for even N : floor( (n-2)/4 )+1
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;   cin>>t;
    while(t--){
        ll n;  cin>>n;
        ll arr[n+1];
        for(int i=0 ; i<n ; i++) cin>>arr[i];

        if(n==1)
            cout<<arr[0]<<endl;
        else if(n%2)
        {
            ll ind = n-3;
            ind = floor(ind/4);
            ind = 3+ind;
            cout<<arr[ind-1]<<endl;
        }
        else
        {
            ll ind = n-2;
            ind = floor(ind/4);
            ind = 2+ind;
            cout<<arr[ind-1]<<endl;
        }
    }
    return 0;
}




// ----------------------------------------------------------------------------
// GIVING TIME COMPLEXITY ERROR 
// #include<bits/stdc++.h>
// using namespace std;
// #define loop(n) for(int i=0;i<n;i++)

// int main() 
// {
//     int t;  cin>>t;
//     while(t--)
//     {
//         int n;   cin>>n; 
//         int arr[n],count = 1;
//         loop(n)  cin>>arr[i];

//         int dupl_size = n;
//         for(int k=0;k<dupl_size-1;k++)
//         {
//             // Rotate Clockwise
//             int temp = arr[n-1];  
//             for (int i = n-2; i >= 0; i--)
//                 arr[i+1] = arr[i];
//             arr[0] = temp;

//             // Rotate Anti-Clockwise
//             int p = n - count;
//             int q = n-1;
//             temp = arr[p];
//             for (int i = p; i < q; i++)
//             {
//                 arr[i] = arr[i+1];
//             }
//             n = n-1;
//             count++;
//             loop(n) cout<<arr[i]<<" ";
//             cout<<endl;
//         }
//         cout<<endl;
//     }       
// }

