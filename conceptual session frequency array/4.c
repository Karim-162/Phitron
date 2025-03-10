#include <stdio.h>

void printReverse(int n) {
    if (n == 0) {
        return; // যখন n = 0 হয়, তখন রিকারশন বন্ধ হবে
    }
    printf("%d ", n); // n প্রিন্ট করো
    printReverse(n - 1); // n-1 এর জন্য ফাংশন কল করো (রিকারশন)
}

int main() {
    int n;
    scanf("%d", &n); // ইনপুট নেওয়া
    printReverse(n); // ফাংশন কল করা
    return 0;
}
