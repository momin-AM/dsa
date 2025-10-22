class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size()-1]++;
        for(int i=digits.size()-1;i>=0;i--){
            if(!(digits[i]>9)){
                return digits;
            }
            digits[i]=0;
            if(i==0){
                digits.insert(digits.begin(),1);
                return digits;
            }else{
                digits[i-1]++;
            }

        }
        return digits;
        
    }
};
