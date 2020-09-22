// Example:

// Input:
// nums1 = [1,2,3,0,0,0], m = 3
// nums2 = [2,5,6],       n = 3

// Output: [1,2,2,3,5,6]

// Solution 1 || Using Extra Array
class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
        int i = 0, j=0;
        vector<int>extra;
        while(i<m&&j<n)
        {
            if(num1[i]<num2[j])
                extra.push_back(num1[i++]);
            else
                extra.push_back(num2[j++]);
        }
        while(i<m)
            extra.push_back(num1[i++]);
        while(j<n)
            extra.push_back(num2[j++]);
        num1 = extra;
    }
};

// Solution 2  (Efficient) || Using Two Pointer
class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
        int i = m-1, j = n-1, k = m+n-1;
        while(j>=0 && i>=0)
        {
            if(num1[i] > num2[j])
                num1[k--] = num1[i--];
            else
                num1[k--] = num2[j--];
        }
        while(j>=0)
           num1[k--] = num2[j--];
    }
}; 





#include <bits/stdc++.h>
using namespace std;

void Merge(int arr[],int l,int m,int r)
{
    int i,j,k;
     int brr[r+1];
     i=l;
     j=m+1;
     k=l;
     while(i<=m && j<=r)
     {
         if(arr[i] < arr[j])
            brr[k++] = arr[i++];
         else
            brr[k++] = arr[j++];
     }
     for(;i<=m;i++)
        brr[k++] = arr[i];
     for(;j<=r;j++)
        brr[k++] = arr[j];
     for(i=l;i<=r;i++)
        arr[i]=brr[i];  
}
void CountInersion(int arr[],int l,int r)
{
    if(l<r)
    {
        int mid = l+(r-1)/2;
        CountInersion(arr,l,mid);
        CountInersion(arr,mid+1,r);
        Merge(arr,l,mid,r);
    }
}
int main() {
    int t;  cin>>t;
    while(t--)
    {
        int s;  cin>>s;
        int arr[s];
        for(int i=0;i<s;i++)    cin>>arr[i];
        CountInersion(arr,0,s-1);
        for(int i=0;i<s;i++)
            cout<<arr[i]<< " ";
    }
	return 0;
}