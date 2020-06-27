#include <bits/stdc++.h> 
using namespace std; 

struct Mat
{
	int i;
	int j;
	int value;
};
struct Sparse
{
	int r;
	int c;
	int element;
	Mat *arr;
};
void createSparse(Sparse *m)
{
	cout<<"Enter Dimensions Row And Column\n";
	cin>>m->r;
	cin>>m->c;	
	cout<<"Enter Non-Zero Elements\n";
	cin>>m->element;
	m->arr = new Mat[m->element];
	cout<<"Enter Elements With Row And Column No.\n";
	for (int i = 0; i < m->element; i++)
	{
		cout<<"Row?\n";
		cin>>m->arr[i].i;
		
		cout<<"Column?\n";
		cin>>m->arr[i].j;
		
		cout<<"Element?\n";
		cin>>m->arr[i].value;
	}
	
}
Sparse* addMat(Sparse a,Sparse b)
{
	if(	a.r != b.r && a.c != b.c )		//Since if dimensions are not same then adding cannot be perform
		return NULL;

	Sparse *res;
	res = new Sparse;
	res->r = a.r;		//Since Resultant Matrix Will Have same No. of Rows And Columns
	res->c = a.c;
	res->element = a.element + a.element;		//Since Max Element in Resultant Matrix Will Have Sum of elements of both Matrix 
	res->arr = new Mat[res->element];
	int p=0,q=0,k=0;
	while(p < a.element || q < b.element)
	{
		if(p > a.element && q < b.element)			//If Any Array is finished then remaining array must copied as it is	
		{
			res->arr[k++] = b.arr[q++];
			continue;				
		}
		if(q > b.element && p < a.element)			//If Any Array is finished then remaining array must copied as it is	
		{
			res->arr[k++] = a.arr[p++];
			continue;				
		}	
		if(a.arr[p].i < b.arr[q].i)
			res->arr[k++] = a.arr[p++];

		if(a.arr[p].i > b.arr[q].i)
			res->arr[k++] = b.arr[q++];
		
		if(a.arr[p].i == b.arr[q].i)		//If both rows are same
		{
			if(a.arr[p].j < b.arr[q].j)
				res->arr[k++] = a.arr[p++];
				
			if(a.arr[p].j > b.arr[q].j)
				res->arr[k++] = b.arr[q++];

			if(a.arr[p].j == b.arr[q].j)
			{
				res->arr[k].i = a.arr[p].i;
				res->arr[k].j = a.arr[p].j;

				res->arr[k++].value = a.arr[p++].value + b.arr[q++].value;	//Since Both Are at same location then both Pointer p and q has to shift right
			}			
		} 
	}
	res->element = k;
	return res;
}
void printRes(Sparse *mat)
{
	for(int i = 0 ;i < mat->element ;i++ )
	{
		cout<<mat->arr[i].i<<"\t";
		cout<<mat->arr[i].j<<"\t";
		cout<<mat->arr[i].value<<"\t";
		cout<<endl;
	}
}
int main() 
{ 
	Sparse a,b;
	cout<<"Enter Details Of Matrix A\n";
	createSparse(&a);
	printRes(&a);
	cout<<"Enter Details Of Matrix B\n";
	createSparse(&b);
	printRes(&b);

	cout<<"Your Resultant Matrix is : \n";
	Sparse *resultMat = addMat(a,b);
	if(resultMat == NULL)	cout<<"Size Should Be Same\n";
	else	printRes(resultMat);
} 