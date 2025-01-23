class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int current_index = 0;
        for (int number : nums){
            if (target == number) return current_index;
            else if (target<number && current_index == 0) return 0;
            else if (target<number) return current_index;
            current_index++;
        }
        return current_index;
    }
};
