class Solution {
public:
    int maxArea(vector<int>& height) {

        if(height.size() == 1)
            return 0;

        // APPROACH #1: BRUTE FORCE


//         int maxVol = 0;
//         for(int end = 0 ; end < height.size(); end ++)
//         {
//             for(int start = 0; start< end; start ++)
//             {
//                 int volHeight = min(height[start], height[end]);
//                 int base = end - start;

//                 if(volHeight  * base > maxVol){
//                     maxVol =  volHeight  * base;
//                     cout << end << ":" << start<< ":" << maxVol<< std::endl;
//                 }
//                 // maxVol = max(maxVol, volHeight  * base );
//             }
//         }

//         return maxVol;


        // APPROACH #2: ONE STEP THROUGH APPROACH

        int start = 0;
        int end = height.size() - 1;


        int maxVol = 0;

        while(start < end)
        {

            int h = min(height[start], height[end]);

            int b = end - start;


             cout<< h << ":" <<b <<":"<<std::endl;
            if(h*b > maxVol) {
                maxVol = max(maxVol, h*b);
                cout<< start << ":" <<end <<":"<<maxVol<<std::endl;

            }
            if(height[start]< height[end]){
                start++;

            }
            else{
                 end --;
            }

        }



        return maxVol;


    }
};
