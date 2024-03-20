class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count =0;
        while(n!=0){
            //here we are checking last bit 
            if (n&1){
                count++;
            }
            n=n>>1;  //right shift one time
            

        }
         return count;
    }
   
};