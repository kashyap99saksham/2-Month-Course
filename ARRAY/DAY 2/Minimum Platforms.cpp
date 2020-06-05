#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct test
{
    int s;
    char c;
};
bool compare(test t1,test t2)
{
    if(t1.s==t2.s)
        return(t1.c<t2.c);
    else
        return (t1.s<t2.s);
}
int main()
    {
        int ta;
        cin>>ta;
        while(ta--)
            {
                int n,a,b,i;
                 cin>>n;
                 test t[2*n];
                 for( i=0;i<n;i++)
                        {
                            cin>>t[i].s;
                            t[i].c='a';
                        }
                  for(int j=i;j<2*n;j++)
                        {
                            cin>>t[j].s;
                            t[j].c='b';
                        }
                     sort(t,t+2*n,compare);
                
                int count=0,maxy=0;
                for(int i=0;i<2*n;i++)
                    {
                        if(t[i].c=='a')
                            {
                                count++;
                                if(count>maxy)
                                    maxy=count;
                            }
                        else
                            count--;
                    }
                cout<<maxy<<endl;
            }
    
        return 0;
    }







// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;  cin>>t;
//     while(t--)
//     {
//         int size;   
//         cin>>size;
//         map <int,char> m;
//         for (int i = 0; i < 2*size; i++)
//         {
//             int val;    
//             cin>>val;
//             if(i < size)
//                 m[val] = 'a';
//             else
//                 m[val] = 'd';
//         }
    
//         int counter = 0,max = 0;
//         for(auto i : m)
//         {
//             if(i.second == 'a')
//             {
//                 counter++;
//                 if(counter > max)
//                     max = counter;
//             }
//             else
//                 counter--;
//         }
//         cout<<max;
//         // cout<<endl;        
//     }       
// }


