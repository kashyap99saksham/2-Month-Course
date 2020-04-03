

// Using INT_MIN


//  SORTING IN O(n) USING MAP INDEXING
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int test;   cin>>test;
//     while(test--){
//         int size,k,j=size-1;   cin>>size>>k;
//         int arr[size];
//         map <int,int> m;
//         for(int i = 0;i<size;i++){
//             int val;
//             cin>>val;
//             m[val]=1;
//         }
// 		int z = 1;
//         for(auto i : m)
// 		{
// 			if(z == k)
// 			{
//             	cout<<i.first;
// 				break;
// 			}
// 			z++;
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