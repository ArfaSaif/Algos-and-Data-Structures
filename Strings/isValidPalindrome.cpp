class Solution {
public:
    bool isPalindrome(string s) {

        bool isP = false;
        int left = 0;
        int right = s.length() -1;

        while(left <= s.length() -1 && right >=0)
        {
            cout<< left<< right<< ";"<< s[left] << " " << s[right] <<std::endl;

            if(!isalnum(s[left])){
                left++;
                continue;
            }
             if(!isalnum(s[right])){
                right--;
                continue;
             }
            if(tolower(s[left]) != tolower(s[right]))
                return false;
            left ++;
            right--;
        }




        return  true;



    }
};
