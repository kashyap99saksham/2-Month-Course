#include <bits/stdc++.h>
using namespace std;
struct petrolPump{
    int petrol;
    int distance;
};
// int tour(petrolPump q[],int n)
// {
//     // cout<<q->petrol;
//     cout<<q[0].petrol<<" "<<q[0].distance;
// }
int main()
{
    petrolPump p[10];
    p[0].petrol = 1;
    p[0].distance = 5;
    petrolPump *ptr = p;
    cout<<ptr[0].petrol;
    // tour(p,5);
}

    