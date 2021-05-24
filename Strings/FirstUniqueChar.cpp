class Solution {
public:
    int firstUniqChar(string s) {
        std::unordered_map<char,int> count;


        for(int i = 0; i < s.length(); i++)
        {
            count[s[i]]++;
        }
        for(int j = 0; j < s.length(); j++)
        {
            if(count[s[j]] == 1)
                return j;

        }
        return -1;
    }
};
