class Solution {
public:
    string longestPalindrome(string s) {

        int n = s.length();

        int ** dp = new int * [n];

        for(int i = 0; i < n; i++){
            dp[i] = new int[n];
            for(int j = 0; j < n; j++)
                dp[i][j] = 0;
        }

        // Base case

        int maxLength = 0;
        int startIndex = 0;
        int endIndex = 0;
        for(int j = 0; j < n; j++){

            dp[j][j] = 1;
            for(int i = 0; i <= j; i++){
                if((s[i] == s[j] && (j - i) <= 2) || (s[i] == s[j] &&dp[i+1][j-1]))
                {
                    dp[i][j] = 1;
                    if((j-i+1) > maxLength){
                          startIndex = i;
                         endIndex = j;
                        maxLength = (j-i +1);
                        cout<< startIndex << endIndex <<std::endl;
                    }

                }
            }
        }

        return s.substr(startIndex, endIndex - startIndex +1);





    }
};
