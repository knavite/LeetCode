class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res= 0,cur = 1<<31,one=1;
        for(int i=0;i<32;i++) {
            if(n & one) 
                res |= cur;
            cur = cur >> 1;
            one = one<<1;
        }
        return res;
    }
};