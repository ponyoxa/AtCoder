#include <bits/stdc++.h>
using namespace std;

    bool isPalindrome(string str) {
        int i = 0, j = str.length() - 1;
        while (i <= j) {
            if (str[i] != str[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    int longestPalindrome(string input) {
        const char* string = input.c_str();
        int N = input.length();
        int longestLength = 0;

        for (int center = 0; center < 2 * N + 1; center++) {
            int left, right;
            if (center % 2 == 0) {
                left = center / 2 - 1;
                right = center / 2;
            } else {
                left = right = center / 2;
            }

            while (true) {
                if (!(0 <= left && left < N && 0 <= right && right < N) || string[left] != string[right]) {
                    left++;
                    right--;
                    break;
                }
                left--;
                right++;
            }

            int length = right - left + 1;
            if (longestLength < length) {
                longestLength = length;
            }
        }

        return longestLength;
    }

int main() {
    string S;
    int ans;
    cin >> S;

    ans = longestPalindrome(S);
    cout << ans << endl;
}
