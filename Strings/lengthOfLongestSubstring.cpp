

//NAIVE SOLUTION - DOESNT PASS ALL TEST DUE TO TIMEOUT
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//
//         //base cases
//         if(s == " ")
//             return 1;
//         if(s.length() == 1)
//             return 1;
//         if(s.length() == 0)
//             return 0;
//
//
//         int maxLength = 0;
//         for(int j = 0; j < s.length(); j++ )
//         {
//             for(int i = 0; i <=j; i++)
//             {
//                 string substr = s.substr(i,j-i +1);
//                  cout<<substr<<std::endl;
//                 if(substr.length() == 1)
//                     continue;
//                 if(isRepeat(substr)){
//                     int len = substr.length();
//                     maxLength = std::max(maxLength, len);
//                 }
//             }
//         }
//
//
//
//
//         return max(maxLength,1);
//     }
//     bool isRepeat(string str){
//         unordered_map<char, int> umap;
//
//         for(auto ch : str){
//
//             // std::cout<<ch<<std::endl;
//             if(umap.find(ch) != umap.end()){
//                 return false;
//             }
//             umap.insert(make_pair(ch,0));
//         }
//         return true;
//
//
//     }
// };



//WORKS - SLIDING WINDOW + SET
// use two pointers, one that is right and one that is left
// if right is found, then left++
// if right not found in set, then right ++ and add new character to set
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        //base cases
        if(s == " ")
            return 1;
        if(s.length() == 1)
            return 1;
        if(s.length() == 0)
            return 0;
        
        unordered_set<char> umap;
        
        //SLIDING WINDOW
        int maxLength = 0;
        int right = 0;
        int left = 0;
        while(right<s.length() && left <= right){
            cout<<s.substr(left, right-left+1)<<std::endl;
            cout<< s[right]  <<"checking"<<std::endl;
            if(umap.find(s[right]) == umap.end()){
                
                int len = right - left + 1;
                maxLength = max(maxLength, len);
                umap.insert(s[right]);
                cout<< s[right]  <<"not found"<<std::endl;
                right++;
                
                
            }
            else{
                cout<< s[right]  <<"found"<<std::endl;
                umap.erase(s[left]);
                left++;
                
            }
            
            
        }
        // for(int j = 0; j < s.length(); j++ )
        // {
        //     for(int i = 0; i <=j; i++)
        //     {
        //         string substr = s.substr(i,j-i +1);
        //          cout<<substr<<std::endl;
        //         if(substr.length() == 1)
        //             continue;
        //         if(isRepeat(substr)){
        //             int len = substr.length();
        //             maxLength = std::max(maxLength, len);
        //         }
        //     }
        // }
        
        
        
        
        return max(maxLength,1);
    }
    bool isRepeat(string str){
        unordered_map<char, int> umap;
        
        for(auto ch : str){
           
            // std::cout<<ch<<std::endl;
            if(umap.find(ch) != umap.end()){
                return false;
            }
            umap.insert(make_pair(ch,0));
        }
        return true;
        
        
    }
};
