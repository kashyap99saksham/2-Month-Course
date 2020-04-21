#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> x, pair<int,int> y)
{
    return (fabs(x.first-x.second)>fabs(y.first-y.second));
}
int main() {
	int t;
	cin>>t;
	 int n,x,y;
	while(t--)
	{
	  cin>>n>>x>>y;
	  vector<pair<int,int> >a(n);
	  for(int i=0;i<n;++i) cin>>a[i].first;
	   for(int i=0;i<n;++i) cin>>a[i].second;
	  sort(a.begin(),a.end(),comp);
	  int ans=0;
	  for(int i=0;i < n;++i)
	  {
	      if(x > 0 && ((a[i].first>=a[i].second)||y==0))
	          {
	          ans+=a[i].first;
	          x--;
	          
	      }
	      else if(y>0 &&((a[i].first<a[i].second)||x==0))

	          {
	          ans+=a[i].second;
	          y--;
	          
	      }
	  }
	  cout<<ans<<endl;
	}
	return 0;
}




// Trying Good Approach But in Satisfying G4g :-(
// #include <bits/stdc++.h>
// using namespace std;
// #define lint long long 
// #define loop(n) for(lint i=0;i<n;i++)
// bool Mycomp(pair<lint,lint>p1,pair<lint,lint>p2)
// {
//     if(p1.first == p2.first)
//         return p1.second > p2.second;
//     return p1.first > p2.first;
// }
// int main() {
// 	int t;  cin>>t;
// 	while(t--)
// 	{
// 	    lint n,X,Y;  cin>>n>>X>>Y;
//         vector<pair<lint,lint>> A;
//         vector<lint> B(n);
// 	    loop(n) 
//         {   
//             pair<lint,lint> temp;
//             cin>>temp.first;
//             temp.second = i;
//             A.push_back(temp);
//         }
//         loop(n) 
//             cin>>B[i];

//         sort(A.begin(),A.end(),Mycomp);
        
//         lint MaxTip = 0;
//         for(auto i : A)
//         {
//             if(i.first > B[i.second] && (X != 0))
//             { 
//                 MaxTip += i.first;
//                 X--;
//                 cout<<i.first<<" ";
//             }
//             else if(Y != 0)
//             {
//                 MaxTip += B[i.second];
//                 Y--;
//                 cout<<B[i.second]<<" ";
//             }
//             if(Y == 0 && X!=0)
//             {
//                 MaxTip += i.first;
//                 X--;
//                 cout<<i.first;
//             }
//         }
//         // cout<<MaxTip<<" ";

//         // cout<<MaxTip<<endl;
// 	}
// }