// USING MAX/MIN - HEAP
// USING QUICK SELECT
// Using INT_MIN

//  SORTING IN O(max) USING MAP INDEXING
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int test;   cin>>test;
//     while(test--){
//         int size,k,max = -1;   cin>>size>>k;
//         int arr[size];
//         unordered_map <int,int> m;
//         for(int i = 0;i<size;i++){
//             int val;
//             cin>>val;
//             m[val]=1;
//             if(val>max)
//                 max = val;
//         }
// 		int count = 0;
//         for(int i = 1 ; i <= max ;i++)
//         {
//             if(m.find(i) != m.end())
//             {
//                 count++;
//                 if(count==k)
//                 {   cout<<i;   break;   }
//             }
//         }
//     }
// }

// USING SORT FUNCTION 
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	//code
// 	int test,k;cin>>test;
// 	while(test--)
// 	{
// 	    int size,c=0,k; cin>>size>>k;   int arr[size];
// 	    for(int i=0;i<size;i++)
// 	        cin>>arr[i];
// 	   sort(arr,arr+size);
// 	   for(int i = size-1;i >= 0;i--)
// 	   {
// 	       c++;
// 	       cout<<arr[i]<<" ";
// 	       if(c==k)
// 	        break;
// 	   }cout<<endl;
// 	}
// 	return 0;
// }



// USING INT MAX
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;
    while(t--)
    {
        int size;   cin>>size;
        vector <int> v(size);
        for (int i = 0; i < size; i++)
            cin>>v[i];
        int k;  cin>>k;
        while(k--)
        {
            int small = INT32_MAX;
            for (int i = 0; i < count; i++)
            {
                /* code */
            }
            
        }        
    }
} 