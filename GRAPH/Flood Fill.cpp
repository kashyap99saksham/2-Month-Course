class Solution {
public:
    void FillFun(vector<vector<int>>& image,int r,int c,int newColor, int Tr,int Tc,int color)
    {
        if(r<0 || c<0 || r>=Tr || c>=Tc || image[r][c] == newColor || image[r][c] != color)    return;
        image[r][c] = newColor;
        FillFun(image,r-1,c,newColor,Tr,Tc,color);
        FillFun(image,r+1,c,newColor,Tr,Tc,color);
        FillFun(image,r,c-1,newColor,Tr,Tc,color);
        FillFun(image,r,c+1,newColor,Tr,Tc,color);

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {   
        int Tr = image.size(); 
        int Tc = image[0].size();
        int Oldcolor = image[sr][sc];
        FillFun(image,sr,sc,newColor,Tr,Tc,Oldcolor);
        return image;
    }
};