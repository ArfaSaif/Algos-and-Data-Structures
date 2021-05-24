class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t mask = 0x1;
        int numberofBits = 0;
        for(int i = 0 ; i < 32; i++)
        {
            int temp = (n & mask);
            if(temp){
                numberofBits = numberofBits + 1;
            }

            mask = mask << 1;

        }

        return numberofBits;

    }
};
