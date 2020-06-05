#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;
    while(t--)
    {
        int size;   cin>>size;
        int arr[size],brr[size];
        for (int i = 0; i < size; i++)
        {
            cin>>arr[i];
        }
        int leftsum = 0;
        int rightsum = 0;
        for (int i = 0; i < size; i++)
        {
            leftsum += arr[i];
            brr[i] = leftsum;
        }
        bool flag = false;
        for (int i = size-1; i >= 0; i--)
        {
            rightsum += arr[i];
            if(rightsum == brr[i])
            {
                flag = true;
                cout<<i+1;
                break;
            }
        }
        if(flag == false)
            cout<<-1;
        cout<<endl;        
    }       
}


// array    1  2   3   8    6
// leftsum  1  3   6   14   20
// rightsum 20 19  17  14   6
