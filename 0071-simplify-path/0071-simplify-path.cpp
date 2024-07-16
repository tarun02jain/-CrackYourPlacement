#include <stack>
#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        string temp = "";
        stack<string> st;
        int n = path.length();

        for (int i = 0; i < n; ++i) {
            if (path[i] == '/') {
                // Process the accumulated directory/file name
                if (!temp.empty()) {
                    if (temp == "..") {
                        if (!st.empty()) {
                            st.pop();
                        }
                    } else if (temp != ".") {
                        st.push(temp);
                    }
                    temp.clear(); // Reset temp
                }
            } else {
                temp += path[i];
            }
        }

        // Handle the last part of the path
        if (!temp.empty()) {
            if (temp == "..") {
                if (!st.empty()) {
                    st.pop();
                }
            } else if (temp != ".") {
                st.push(temp);
            }
        }

        // Construct the simplified path
        if (st.empty()) {
            return "/"; // Special case: if the path is empty or only contains '/'
        }

        string ans;
        while (!st.empty()) {
            ans = "/" + st.top() + ans;
            st.pop();
        }

        return ans;
    }
};
