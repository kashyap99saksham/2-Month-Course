void countDistinct(int A[], int k, int n) {
    unordered_map<int,int>m;
    int dist_count = 0;
    for(int i=0;i<k;i++)
    {
        if(m[A[i]]==0)
            dist_count++;
        m[A[i]]++;
    }
    cout<<dist_count<<" ";
    for(int i = k;i<n;i++)
    {
        int deleted_element = A[i-k];
        
        if(m[deleted_element] == 1)
            dist_count--;
            
        m[deleted_element]--;
        if(m[A[i]] == 0)
            dist_count++;
        m[A[i]]++;
        cout<<dist_count<<" ";
    }
}