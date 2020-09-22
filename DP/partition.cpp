#include<bits/stdc++.h>
using namespace std;
bool MyFun(int k,int arr[])
{
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    if(!arrSize && k==1)    return true;
    if (k > arrSize || arrSize % k)
        return false;
    int groupnum = arrSize//k;

}
int main()
{
    int k;  cin>>k;
    int arr[4];
    for(int i=0;i<4;i++)    cin>>arr[i];
    MyFun(k,arr);
}

if not A and k == 1:
            return True
        n = len(A)
        if k > n or n%k:
            return False
        groupnum = n//k
        cnt = collections.Counter(A)
        if groupnum < max(cnt.values()):
            return False
        return Trueif not A and k == 1:
            return True
        n = len(A)
        if k > n or n%k:
            return False
        groupnum = n//k
        cnt = collections.Counter(A)
        if groupnum < max(cnt.values()):
            return False
        return True