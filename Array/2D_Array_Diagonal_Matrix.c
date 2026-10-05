#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Number of test cases

    for (int i = 0; i < n; i++) {
        int m, a, b, c;
        scanf("%d %d %d %d", &m, &a, &b, &c);

        int total = a * b * c;
        int not_found = -1;

        if (total == 0) {
             // Case: Cannot divide by 0
            if (m == 0) {
                printf("0\n");                                             // 0 * anything = 0 → valid
            } else {
                printf("%d\n", not_found);                      // non-zero result with zero multiplier → impossible
            }
        } else if (m % total == 0) {
            int missing = m / total;
            printf("%d\n", missing);                                               // Valid integer
        } else {
            printf("%d\n", not_found);                                           // Not an integer
        }
    }

    return 0;
}
