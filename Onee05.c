#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of boxes: ");
    scanf("%d", &n);

    int mitaSum = 0, ritaSum = 0;
    int mitaBoxes[n], ritaBoxes[n];

    printf("Mita: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &mitaBoxes[i]);
    }

    printf("Rita: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ritaBoxes[i]);
    }

for (int i = 0; i < n; i++) {
        mitaSum += mitaBoxes[i];
        ritaSum += ritaBoxes[i];
    }

    if (mitaSum > ritaSum) {
        printf("Mita will win!\n");
    } else if (mitaSum < ritaSum) {
        printf("Rita will win!\n");
    } else {
        printf("Draw\n");
    }

    return 0;
}
