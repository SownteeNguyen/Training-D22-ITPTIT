#include <stdio.h>
#include <math.h>
void timMax (int a, int b, int c) {
    int trungGian, Max;
    trungGian = ((a + b) + abs(a - b)) / 2;
    Max = ((trungGian + c) + abs(trungGian - c)) / 2;
    printf("%d ", Max);
}

void timMin(int a, int b, int c) {
    int trungGian, Min;
    trungGian = ((a + b) - abs(a - b)) / 2;
    Min = ((trungGian + c) - abs(trungGian - c)) / 2;
    printf("%d", Min);
}

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    timMax(a, b, c);
    timMin(a, b, c);
    return 0;
}