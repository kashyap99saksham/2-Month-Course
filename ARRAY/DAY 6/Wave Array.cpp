// If Ques. Give unSorted array then first sort then same process
#include<bits/stdc++.h>
using namespace std;
#define lint long long int
#define loop(n) for(lint i=0;i<n;i++)
#define loop2(n)  for (lint i = 1; i < size; i+=2)

int main() {
    lint t;  cin>>t;
    while(t--)  {
        lint size;   cin>>size;
        vector<lint> V(size);
        loop(size)  cin>>V[i];
        loop2(size) {
            lint temp = V[i];
            V[i] = V[i-1];
            V[i-1] = temp;
        }
        loop(size) cout<<V[i]<<" ";
        cout<<endl;           
    }       
}

