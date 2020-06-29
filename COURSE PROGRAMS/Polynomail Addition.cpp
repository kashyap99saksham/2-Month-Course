#include<bits/stdc++.h>
using namespace std;
struct PolyStruct
{
    int Coeff;
    int expo;   
};
struct Poly
{
    PolyStruct *list;  
    int n;
};
void createEquation(Poly *eq)
{
    cout<<"Enter N\n";
    cin>>eq->n;
    eq->list = new PolyStruct[eq->n];
    cout<<"Enter Coefficient and Exponent\n";
    for (int i = 0; i < eq->n; i++)
    {
        cout<<"Enter Coefficient\n";
        cin>>eq->list[i].Coeff;
        cout<<"Enter Exponent\n";
        cin>>eq->list[i].expo;
    }
}
Poly *AddingPoly(Poly eq1,Poly eq2)
{
    Poly *res;
    res = new Poly;
    res->list = new PolyStruct[eq1.n + eq2.n];          //Since Max Size of resultant eq. will be sum of both n
    int i = 0, j =0, k = 0;
    while(i < eq1.n || j < eq2.n)
    {
        if(i == eq1.n && j < eq2.n)     //If Any Eq. is End but another one is left
        {
            res->list[k++].Coeff = eq2.list[j++].Coeff; 
            continue;
        }
        if(j == eq2.n && i < eq1.n)     //If Any Eq. is End but another one is left
        {
            res->list[k++].Coeff = eq1.list[i++].Coeff; 
            continue;
        }
        if(eq1.list[i].expo == eq2.list[j].expo)
            res->list[k++].Coeff = eq1.list[i++].Coeff + eq2.list[j++].Coeff; 

        if(eq1.list[i].expo > eq2.list[j].expo)
            res->list[k++].Coeff = eq1.list[i++].Coeff; 

        if(eq1.list[i].expo < eq2.list[j].expo)
            res->list[k++].Coeff = eq2.list[j++].Coeff; 
    } 
    res->n = k;
    return res;
}

void PrintEq(Poly *eq)
{
    for (int i = 0; i < eq->n; i++)
    {
        cout<<eq->list[i].Coeff<<"x"<<eq->list[i].expo<<"+\n";
    }
    
}
int main()
{
    Poly eq1,eq2;
    cout<<"Enter First Equation Details\n";
    createEquation(&eq1);
    cout<<"Enter Second Equation Details\n";
    createEquation(&eq2);
    cout<<"Your Result Equation\n";
    Poly *res = AddingPoly(eq1,eq2);
    PrintEq(res);
}