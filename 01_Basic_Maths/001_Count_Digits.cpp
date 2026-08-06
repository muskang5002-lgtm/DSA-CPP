/*
Problem : Count Digits
Platform : GeeksforGeeks
Topic : Basic Maths
Difficulty : Easy

problem link:
https://www.geeksforgeeks.org/problems/count-total-digits-in-a-number/1

key idea:
Repeatedly divide the number by 10 and count the iterations.
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
