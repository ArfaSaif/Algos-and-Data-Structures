#include <iostream>
#include <vector>
#include <string>

using namespace std;



class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> triangle;


        // base cases
        if(numRows == 0)
            return triangle;

        // second base case; first row is always [1]
        vector<int> vec ;
        vec.push_back(1);
        triangle.push_back(vec);

        // fill from row 1 and onwards
        // each row at a time
        for(int rowNum = 1; rowNum < numRows; rowNum ++)
        {
            vector<int> row;


            // push back 1
            row.push_back(1);

            // fill rest of row with previous row one above back + above
            int prevRow = rowNum - 1;
            for(int j =1; j < rowNum; j++)
                row.push_back(triangle[prevRow][j-1] + triangle[prevRow][j]);

            // push back 1
            row.push_back(1);

            // push back the row
            triangle.push_back(row);

        }



        return triangle;

    }
};

int main(){

  cout<<"hi arfa"<<std::endl;
  return 0;
}
