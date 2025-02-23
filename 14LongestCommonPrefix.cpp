class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pref;
        bool test;
        bool esc = false;
        test = true;
        for (int i=0; i<strs[0].length(); i++){
            if (esc){
                break;
            }
            for (auto word : strs){
                if (i > word.length()){
                    esc = true;
                    test = false;
                    break;
                }
                if (strs[0][i] != word[i]){
                    test = false;
                    break;
                }
            }
            if (test)
                pref += strs[0][i];
        }
        return pref;
    }
};
