//1. MAke Number Zero if Comes second TIme
//2. USe Map and check Count having 1
//3. Use Set and Check No. is already present or not
// --------------------------------------------------


// ---------------BEST APPROCH IS TO USE BITWISE XOR-------------
#include <bits/stdc++.h> 
using namespace std; 

// Function to find element occurring 
// odd number of times 
int getOddOccurrence(int ar[], int ar_size) 
{ 
	int res = 0; 
	for (int i = 0; i < ar_size; i++)	 
		res = res ^ ar[i]; 
	
	return res; 
} 

/* Driver function to test above function */
int main() 
{ 
	int ar[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2}; 
	int n = sizeof(ar)/sizeof(ar[0]); 
	
	// Function calling 
	cout << getOddOccurrence(ar, n); 
	
	return 0; 
} 


//---------------USING MAP------------- 
// #include<bits/stdc++.h>
// using namespace std;
// #define loop(n) for(int i=0;i<n;i++)
// int main() 
// {
//     int t;  cin>>t;
//     while(t--)
//     {
//         int size;   cin>>size;
//         unordered_map<int,int>m;
//         loop(size)
//         {
//             int val;    cin>>val;   m[val]++;
//         }
//         bool flag = false;
//         for(auto i : m)
//         {
//             if(i.second % 2 != 0 )
//             {
//                 cout<<i.first;
//                 flag = true;
//                 break;
//             }
//         }
//         if(!flag)
//             cout<<0;
//         cout<<endl;        
//     }       
// }



// ---------------USING SET-----------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// #define loop(n) for(int i=0;i<n;i++)
// int main() 
// {
//     int t;  cin>>t;
//     while(t--)
//     {
//         int size;   cin>>size;
//         unordered_set<int> s(size);
//         loop(size)  
//         {
//             int val;
//             cin>>val;
//             if(s.count(val) != 0)       //HERE, We can also use s.find() func. 
//                 s.erase(val);
//             else
//                 s.insert(val);
//         }
//         for(auto i : s)
//             cout<<i;
//         cout<<endl;        
//     }       
// }

