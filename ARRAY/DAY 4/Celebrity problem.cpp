int getId(int M[MAX][MAX], int n)
{
    //Your code here
    int x=0,y=MAX-1;

    while(x<y)
    {
        if(M[x][y]==1)
        x++;
        else
        y--;
    }
    //for checking zeros
    for(int i=0;i<=n;)
    {
        if(M[x][i]==0)
        {
        i++;
        }
        else
        return -1;
    }
    //for checking ones before x
    for(int i=0;i<x;)
    {
        if(M[i][x]==1)
        i++;
        else return -1;
    }
    //for checking ones after x
    for(int i=x+1;i<n;)
    {
        if(M[i][x]==1)
        i++;
        else return -1;
       
    }
    return x;
}int getId(int M[MAX][MAX], int n)
{
    //Your code here
    int x=0,y=MAX-1;

    while(x<y)
    {
        if(M[x][y]==1)
        x++;
        else
        y--;
    }
    //for checking zeros
    for(int i=0;i<=n;)
    {
        if(M[x][i]==0)
        {
        i++;
        }
        else
        return -1;
    }
    //for checking ones before x
    for(int i=0;i<x;)
    {
        if(M[i][x]==1)
        i++;
        else return -1;
    }
    //for checking ones after x
    for(int i=x+1;i<n;)
    {
        if(M[i][x]==1)
        i++;
        else return -1;
       
    }
    return x;
}