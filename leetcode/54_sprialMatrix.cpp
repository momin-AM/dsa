class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> res;
        int left=0, right=matrix[0].size()-1 , top=0, bottom=matrix.size()-1;
        int turn=0;
        while(left<=right && top<=bottom){
            if(turn==0){
                for(int i=left;i<=right;i++){
                    res.push_back(matrix[top][i]);
                }
                turn++;
                top++;
            }else if(turn==1){
                for(int i=top;i<=bottom;i++){
                    res.push_back(matrix[i][right]);
                }
                turn++;
                right--;
            }else if(turn==2){
                for(int i=right;i>=left;i--){
                    res.push_back(matrix[bottom][i]);
                }
                turn++;
                bottom--;
            }else if(turn==3){
                for(int i=bottom;i>=top;i--){
                    res.push_back(matrix[i][left]);
                }
                turn++;
                left++;
            }else{
                turn=0;
            }
        }
        return res;
        
    }
};
