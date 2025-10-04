class Solution {
public:
    string removeDuplicates(string s) {
            string result = "";  // this will act like a stack

        for (char ch : s) {
            if (!result.empty() && result.back() == ch) {
                // remove last character if it's same as current
                result.pop_back();
            } else {
                // else add current character
                result.push_back(ch);
            }
        }

        return result;
    }
};