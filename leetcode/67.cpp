class Solution {
public:
    string addBinary(string a, string b) {
        string res="";
        int carry=0;
        if(a.length()>b.length()){
            b.insert(b.begin(),a.length()-b.length(),'0');
        }else{
            a.insert(a.begin(),b.length()-a.length(),'0');
        }
        for(int i=a.length()-1;i>=0;i--){
            int sum=a[i]-'0'+b[i]-'0'+carry;
            res.push_back(sum%2+'0');
            carry=sum/2;
        }
        if(carry) res.push_back('1');
        reverse(res.begin(),res.end());
        return res;
        
    }
};
