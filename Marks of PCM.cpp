#include<bits/stdc++.h>
using namespace std;
bool sortcol(const vector<long int>& v1 ,const vector<long int>& v2 ) 
{
    if(v1[0] < v2[0]) 
        return true;
    if(v1[0] > v2[0])
        return false;

    if(v1[0]==v2[0])
    {
        if(v1[1] > v2[1])
            return true;
        if(v1[1] < v2[1]) 
            return false;
        
        if(v1[1]==v2[1])
        {
            if(v1[2] < v2[2])
                return true;
            if(v1[2] > v2[2]) 
                return false;
        }
    }
} 
int main()
{
    long int test;cin>>test;
    while(test--)
    {
        long int no_student;cin>>no_student;
        vector<vector <long int>> v;
        for (long int i = 0; i < no_student; i++)
        {
            vector<long int> temp;
            for (long int j = 0; j < 3; j++)
            {
                long int val;
                cin>>val;
                temp.push_back(val);
            }
            v.push_back(temp);
        }
        sort(v.begin(), v.end(),sortcol); 
        // cout<<"Your Output starts\n";
        for (long int i = 0; i < no_student; i++)
        {
            for (long int j = 0; j < 3; j++)
            {
                cout<<v[i][j]<<" ";            
            }
            cout<<endl;
        }
                
    }
}
