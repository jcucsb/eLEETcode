//PJ JC 12/22/22 
//Zoom- BA-SAC

class Solution {
public:
int hash_func(char t) {
            if (t == 'I') {
                return 1;
            }
            if (t == 'V') {
                return 5;
            }
            if (t == 'X') {
                return 10;
            }
             if (t == 'L') {
                return 50;
            }
             if (t == 'C') {
                return 100;
            }
             if (t == 'D') {
                return 500;
            }
            if (t == 'M') {
                return 1000;
            }   
            return 0;
}
    int romanToInt(string s) {
        // take in string, convert to int
        // order matters, cant sort
        int previous = 0;
        int total = hash_func(s[0]); 
        for(int current = 1; current < s.size(); current++) {
            if (hash_func(s[previous]) < hash_func(s[current])) {
                total += hash_func(s[current]);
                total -= 2 * hash_func(s[previous]);
                previous++;
            }
            else {
                total += hash_func(s[current]);
                previous++;
            }
        }
        return total;
    }
};