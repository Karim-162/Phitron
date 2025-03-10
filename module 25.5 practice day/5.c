#include <stdio.h>

int sum_of_n(int n) {
    if (n == 0) {
        return; // যখন n = 0 হয়, তখন রিকারশন বন্ধ হবে
    }
    return n+(sum_of_n(n - 1));

}

int main() {
    int n;
    scanf("%d", &n); // ইনপুট নেওয়া
    printf("%d",sum_of_n(n)); // ফাংশন কল করা
    return 0;
}

