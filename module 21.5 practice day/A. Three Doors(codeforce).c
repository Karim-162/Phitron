#include <stdio.h>

void solve() {
    int t; // টেস্টকেসের সংখ্যা
    scanf("%d", &t);

    while (t--) {
        int x; // হাতে থাকা চাবি
        int a, b, c; // প্রতিটি দরজার পেছনে থাকা চাবি
        scanf("%d", &x);
        scanf("%d %d %d", &a, &b, &c);

        // চেক করার জন্য দরজা খোলার চাবির সংখ্যা
        int visited[4] = {0};
        visited[x] = 1;

        if (x == 1 && a > 0 && !visited[a]) {
            visited[a] = 1;
            if (a == 2 && b > 0 && !visited[b]) {
                visited[b] = 1;
            } else if (a == 3 && c > 0 && !visited[c]) {
                visited[c] = 1;
            }
        } else if (x == 2 && b > 0 && !visited[b]) {
            visited[b] = 1;
            if (b == 1 && a > 0 && !visited[a]) {
                visited[a] = 1;
            } else if (b == 3 && c > 0 && !visited[c]) {
                visited[c] = 1;
            }
        } else if (x == 3 && c > 0 && !visited[c]) {
            visited[c] = 1;
            if (c == 1 && a > 0 && !visited[a]) {
                visited[a] = 1;
            } else if (c == 2 && b > 0 && !visited[b]) {
                visited[b] = 1;
            }
        }

        // যদি সব দরজা খোলা হয়
        if (visited[1] && visited[2] && visited[3]) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}

int main() {
    solve();
    return 0;
}

