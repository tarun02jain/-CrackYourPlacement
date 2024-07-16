class Solution {
public:
    string removeSpaces(string t){
        string news = "";
        int flag = 0;
        for(int i = 0; i<t.length(); i++){
            char c = t[i];
            if (c != ' '){
                news += t[i];
                flag = 1;
            }
            else if (flag){
                news += ' ';
                flag = 0;
            }
        }
        int n = news.length();
        if (news[n-1] == ' ') news.pop_back();
        return news;
    }
    string reverseWords(string t) {
        string s = removeSpaces(t);
        cout<<s;
        cout<<"en";
        int n  = s.length();
        reverse(s.begin(),s.end());
        s += " ";
        int i = 0;
        int j = 0;
        while(j<=n){
            if (s[j] == ' '){
                reverse(s.begin()+i , s.begin()+j);
                i = j+1;
            }
            j++;
        }
        s.pop_back();
        return s;

    }
};