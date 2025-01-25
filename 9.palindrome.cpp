class Solution {
public:
    bool isPalindrome(int x) {
        std::string str = std::to_string(x);
        int j=str.size()-1;
        for (int i=0; i < str.size() / 2;i++){
            if (str.at(i) != str.at(j)){
                return false;
            }
            j--;
        }
        return true;
    }
};
