#include <stdio.h>

int find_kth_liked_number(int k)
{
    int count = 0, num = 1; // কাউন্টার ও সংখ্যা শুরু করা
    while (count < k)
    {
        if (num % 3 != 0 && num % 10 != 3)   // Polycarp-এর শর্ত চেক করা
        {
            count++; // যদি সংখ্যা পছন্দের হয়, তাহলে কাউন্ট বাড়বে
        }
        if (count == k)
            return num; // k-তম সংখ্যা পাওয়া গেলে রিটার্ন করব
        num++; // পরের সংখ্যা চেক করব
    }
    return -1; // এটি কখনো রান হবে না
}

int main()
{
    int t, k;
    scanf("%d", &t); // টেস্ট কেস সংখ্যা ইনপুট নেওয়া

    while (t--)
    {
        scanf("%d", &k);
        printf("%d\n", find_kth_liked_number(k)); // k-তম পছন্দের সংখ্যা প্রিন্ট
    }

    return 0;
}

