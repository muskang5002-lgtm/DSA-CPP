class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumodd=0;
        int sumeven=0;
        for (int i=2;i<=2*n;i+=2){
            sumeven+=i;

        }
        for(int i=1;i<=2*n;i+=2){
            sumodd+=i;
        }

        for(int i=min(sumodd,sumeven);i>0;i--){
            if(sumodd%i==0 && sumeven%i==0){
                return i;
                break;
            }
        }
        return 0;
    }
};