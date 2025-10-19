class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        for (char ch : s) {
            
            if (ch == '(' || ch == '[' || ch == '{') { 
                s1.push(ch);
            } else {
                if (s1.empty()) {  // If stack is empty, there's no matching opening bracket
                    return false;
                }
                char top = s1.top();
                if ((ch == ')' && top != '(') ||   // Check for matching pairs
                    (ch == ']' && top != '[') ||
                    (ch == '}' && top != '{')) {
                    return false;
                }
                s1.pop();
            }
        }        
        return s1.empty();  // If stack is empty, all brackets are matched
    }
};
