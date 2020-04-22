#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    bool aux[n];
	    int max = arr[0];
	    aux[0] = false;
	    for(int i=1;i<n-1;i++)
	    {
	        if(arr[i] < max)
	        {
	            aux[i] = false;
	        }
	        else
	        {
	            max = arr[i];
	            aux[i] = true;
	        }
	    }
	    int min = arr[n-1];
	    aux[n-1] = false;
	    int ans = -1;
	    for(int i=n-2;i>=1;i--)
	    {
	        if(aux[i]==true)
	        {
	            if(arr[i] > min )
    	            aux[i]=false;
    	        else
    	            ans = arr[i];
	        }
	        if(arr[i] < min ) min = arr[i];
	    }
        cout<<ans<<"\n";
	}
	return 0;
}


// Getting some error in this
// #include<bits/stdc++.h>
// using namespace std;
// int main() 
// {
//     int t;  cin>>t;
//     while(t--)
//     {
//         int size;   cin>>size;
//         vector<int>v(size);
//         for (int i = 0; i < size; i++)  cin>>v[i];  
//         vector <int> RMin;
//         RMin.push_back(v[size-1]);
//         for (int i = size-2; i >= 0; i--)
//         {
//             if(v[i] < RMin.back())
//                 RMin.push_back(v[i]);
//             else
//                 RMin.push_back(RMin.back());
//         }
//         reverse(RMin.begin(),RMin.end());
//         int LMax = INT16_MIN;
//         // int ans = -1;
//         for(int i=0;i<size;i++)
//         {
//             if(v[i] > LMax)
//             {
//                 LMax = v[i];
//             }
//             if(RMin[i] == LMax)
//             {
//                 cout<<RMin[i];
//                 break;
//             }
//         }
//         cout<<endl;        
//     }       
// }

