/*
Given a palindromic string of lowercase English letters palindrome, replace exactly one character with any lowercase English letter 
so that the resulting string is not a palindrome and that it is the lexicographically smallest one possible.

Return the resulting string. If there is no way to replace a character to make it not a palindrome, return an empty string.

A string a is lexicographically smaller than a string b (of the same length) if in the first position where a and b differ, 
a has a character strictly smaller than the corresponding character in b. 
For example, "abcc" is lexicographically smaller than "abcd" because the first position they differ is at the fourth character, and 'c' is smaller than 'd'.
*/

class Solution {
public:
    string breakPalindrome(string s) {
        int n = s.length();
        if(n == 1) {
            return "";
        }
        for(int i = 0; i < n; i++) {
            int j = n - 1 - i;
            if(i == j) {
                continue;
            }
            if(s[i] != 'a') {
                s[i] = 'a';
                return s;
            }
        }
        s[n-1] = 'b';
        return s;
    
    }
};
