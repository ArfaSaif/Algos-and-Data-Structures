class Solution {
public:
    bool isHappy(int n) {

        unordered_set<int> seen;

        int num = n;
        while(num != 1) {
            int sumOfSquares = 0;
            int m = num;

            while(m>0){
                int lastDigit = m % 10;
                m = m / 10;
                sumOfSquares += (lastDigit * lastDigit);

            }
            if(sumOfSquares == 1)
                return true;

            if(seen.find(sumOfSquares) == seen.end())             {
                seen.insert(sumOfSquares);

            }
            else{
                cout<< * seen.find(sumOfSquares);
                cout<<"already seen" << sumOfSquares;
                return false;

            }
            num = sumOfSquares;

        }
        return true;

    }
};
