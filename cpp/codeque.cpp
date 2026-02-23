//#include <iostream>
//using namespace std;
//
//int main() {
//    string s;
//    cin >> s;
//
//    bool isPalindrome = true;
//    int n = s.length();
//
//    for (int i = 0; i < n / 2; i++) {
//        if (s[i] != s[n - i - 1]) {
//            isPalindrome = false;
//            break;
//        }
//    }
//
//    if (isPalindrome)
//        cout << "Palindrome";
//    else
//        cout << "Not Palindrome";
//
//    return 0;
//}

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];   // fixed size for safety
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int j = 0;  // points to position for non-zero

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

