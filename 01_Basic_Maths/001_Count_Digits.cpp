/*
Problem : Count Digits
Platform : GeeksforGeeks
Topic : Basic Maths
Difficulty : Easy
*/

class Solution {
public:
    int countDigits(int n) {

        int count = 0;

        while (n > 0) {
            n /= 10;
            count++;
        }

        return count;
    }
};
