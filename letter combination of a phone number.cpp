class Solution {

    private:
void solve(string digits,string mapping[],int index,string out,vector<string>&ans)
{
    if(index>=digits.length())
    {
        ans.push_back(out);
        return;
    }
    int num=digits[index]-'0';
    string val=mapping[num];
    for(int i=0;i<val.length();i++)
    {
        out.push_back(val[i]);
        solve(digits,mapping,index+1,out,ans);
        out.pop_back();
    }
}


public:
    vector<string> letterCombinations(string digits) {

        vector<string>ans;
        int index=0;
        string out;
        if(digits=="")
        return ans;
        string mapping[10]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,mapping,index,out,ans);
        return ans;
        
    }
};
