// TIME COMPLEXITY O(n): USING DP
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int test;   cin>>test;
    while(test--)
    {
        long long int n;  cin>>n;
        long long int arr[n];
        arr[0] = 1;
        long long int i,i2=0,i3=0,i5=0;
        long long int next_multiple_of_2 = arr[i2]*2;    
        long long int next_multiple_of_3 = arr[i3]*3; 
        long long int next_multiple_of_5 = arr[i5]*5; 
        long long int next_ugly_no = 1; 
        for(i=1;i<n;i++)
        {
            next_ugly_no = min(next_multiple_of_2,min(next_multiple_of_3,next_multiple_of_5));
            arr[i] = next_ugly_no;
            if(next_ugly_no==next_multiple_of_2)
            {
                i2++;
                next_multiple_of_2 = arr[i2]*2;
            }
            if(next_ugly_no==next_multiple_of_3)
            {
                i3++;
                next_multiple_of_3 = arr[i3]*3;
            }    
            if(next_ugly_no==next_multiple_of_5)    
            {
                i5++;
                next_multiple_of_5 = arr[i5]*5;
            }  
        }
        cout<<next_ugly_no<<endl;
    }
}



// // TIME COMPLEXITY is greater than O(nlogn)
// #include<bits/stdc++.h>
// using namespace std;
// int isdivide(int n,int d)
// {
//     while(n%d==0)
//         n/=d;
//     return n;
// }
// int is_ugly(int n)
// {
//     n = isdivide(n,2);
//     n = isdivide(n,3);
//     n = isdivide(n,5);
//     return (n==1)? 1 : 0;
// }
// int find_ugly(int n)
// {
//     int count = 1,i=1;
//     while(count<n)
//     {        
//         i++;        
//         if(is_ugly(i))
//             count++;
//     }
//     return i;
// }
// int main()
// {
//     int test;   cin>>test;
//     while(test--)
//     {
//         int n;  cin>>n;
//         cout<<find_ugly(n);
//         cout<<endl;
//     }
// }