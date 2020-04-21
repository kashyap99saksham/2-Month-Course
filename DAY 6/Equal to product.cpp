#include <bits/stdc++.h>
// #include <cstdint>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	
	while (t--)
	{
		int n = 0;
		cin >> n;
		
		uint64_t p = 0;
		cin >> p;
		
		unordered_set<uint64_t> a;
		bool found = false;
		for (int i = 0; i < n; i++)
		{
            uint64_t tmp = 0;
            cin >> tmp;
            
            if (!found)
            {
                if (tmp > 0 && p % tmp == 0 && a.count(p/tmp))
                {
                    cout << "Yes" << endl;
                    found = true;
                }
                a.insert(tmp);
            }
		}
		if (!found)
            cout << "No" << endl;
	}
	
	return 0;
}



// // --------------------My Efficient Approch------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// #define lint long long int
// #define loop(n) for(lint i=0;i<n;i++)


// // bool Even(int prod)
// // {
// //     return (prod%2 == 0) ? true : false;
// // }
// // bool Odd(int prod)
// // {
// //     return (prod%2 != 0) ? true : false;
// // }
// // bool Prime(int prod)
// // {
// //     for (int i = 2; i <= sqrt(prod); i++) { 
  
// //         // If n is divisible by any number between 
// //         // 2 and n/2, it is not prime 
// //         if (prod % i == 0) { 
// //             return false;
// //         } 
// //     } 
// //     return true;
// // }
// // void CheckProd(unordered_map<lint,lint> &m , int prod,int size)
// // {
//     // if(Prime(prod)==true)
//     // {
//         // loop(size)
//         // {
//         //     int val;    cin>>val;
//         //     if(val == prod || val == 1)
//         //         m[val]++;
//         // }
//         // return;
//     // }

//     // if(Even(prod)==true)
//     // {
//     //     // Taking Input Acc to behaviour of product [Val should be less than prod/2]
//     //     loop(size)
//     //     {
//     //         int val;    cin>>val;
//     //         if((float(prod)/float(val)-float(prod/val) == 0.0) && (val <= prod/2))
//     //             m[val]++;
//     //     }
//     //     return;
//     // }
//     // if(Odd(prod)==true)
//     // {
//     //     // Taking Input Acc to behaviour of product [Val should be less than prod/3]
//     //     loop(size)
//     //     {
//     //         int val;    cin>>val;
//     //         if((float(prod)/float(val)-float(prod/val) == 0.0) && (val <= prod/3))
//     //             m[val]++;
//     //     }
//     //     return;
//     // }
// // }
// // -------------------------------------------------------------------------------

// int main() 
// {
//     int t;  cin>>t;
//     while(t--)
//     {
//         lint size,prod;   cin>>size>>prod;
//         unordered_map <lint,lint> m;
        
//         // Checking The product Behaviour (Minor Floating Exception)
//         // CheckProd(m,prod,size);

//         // bool flag = false;
//         // for(auto i : m)
//         // {
//         //     int div = prod/i.first;
//         //     if(div == i.first && i.second > 1)
//         //     {
//         //         cout<<"Yes";
//         //         flag = true;
//         //         break;
//         //     }
//         //     if(div != i.first && m.find(div) != m.end())
//         //     {
//         //         cout<<"Yes";
//         //         flag = true;
//         //         break;
//         //     } 
//         // }
//         // if(!flag)
//         //     cout<<"No";
//         cout<<endl;        
//     }       
// }

