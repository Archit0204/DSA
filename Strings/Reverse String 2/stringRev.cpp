#include<iostream>
#include<string>

using namespace std;

void reverseIt(string &s, int low, int high) {

    while (low < high) {
        swap(s[low++], s[high--]);
    }

}

int main() {

    string s;
    cin >> s;

    int low = 0;
    int high = 0;
    int n = s.length();

    for (int i = 0;i<n;i++) {

        if (s[i] != ' ' && i != n-1) {
            high++;
        }

        else {

            if (i == n - 1) {
                reverseIt(s, low, high);
            }
            else {
                reverseIt(s, low, high - 1);
                low = high + 1;
                high++;
            }
        }

    }

    cout << s;

    return 0;

}