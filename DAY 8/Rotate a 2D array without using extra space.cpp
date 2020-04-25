#include<bits/stdc++.h>
using namespace std;
struct Pointers
{
    int r;    
    int c;
};
int main() 
{
    int t;  cin>>t;
    while(t--)
    {
        int size;   cin>>size; 
        int arr[size][size];

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cin>>arr[i][j];
                // cout<<arr[i][j]<<" ";
            }
            // cout<<endl;
        }
        // store size in n
        int n = size;

        Pointers first,second,third,fourth;
        first.r = 0;  first.c = 0;
        second.r = 0; second.c = size-1;
        third.r = size-1;   third.c = size-1;
        fourth.r = size-1;  fourth.c = 0;
        // cout<<"Output"<<endl;
        while(first.r<third.r)
        {
            // cout<<endl<<"R "<<first.r<<endl;
            while(first.c != second.c)
            {
                // cout<<first.c<<" ";
                int temp = arr[first.r][first.c];
                arr[first.r][first.c] = arr[fourth.r][fourth.c];
                arr[fourth.r][fourth.c] = arr[third.r][third.c];
                arr[third.r][third.c] = arr[second.r][second.c];
                arr[second.r][second.c] = temp;
                first.c++;
                second.r++;
                third.c--;
                fourth.r--;          
            }
            first.r++;    first.c =  first.r;
            second.c--;   second.r = first.r;
            third.r--;    third.c =  third.r;
            fourth.c++;   fourth.r = third.r;
        }



        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout<<arr[i][j]<<" ";
            } 
        }
        cout<<endl;        
    }       
}

