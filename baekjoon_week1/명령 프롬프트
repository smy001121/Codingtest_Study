#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    char arr[50];
    string str;

    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        arr[i] = str[i];
    }
    
    for (int i = 1; i < n; i++) {
        cin >> str;

        for (int j = 0; j < str.length(); j++) {
            if (arr[j] != str[j]) arr[j] = '?';
        }
    }

    for (int i = 0; i < str.length(); i++) cout << arr[i];
}
