#include <stdio.h>
#include <stdlib.h>

int* addTwoNumbers(int l1[], int l1Size, int l2[], int l2Size, int* returnSize) {
    int carry = 0;  // 进位
    int maxLen = (l1Size > l2Size) ? l1Size : l2Size;
    
    // 分配结果数组（最多 maxLen+1 位）
    int* result = (int*)malloc((maxLen + 1) * sizeof(int));
    int i = 0;
    
    // 逐位相加
    while(i < l1Size || i < l2Size || carry > 0) {
        int sum = carry;
        
        if(i < l1Size) {
            sum += l1[i];
        }
        if(i < l2Size) {
            sum += l2[i];
        }
        
        result[i] = sum % 10;  // 当前位
        carry = sum / 10;      // 进位
        i++;
    }
    
    *returnSize = i;
    return result;
}

// 测试
int main() {
    int l1[] = {2, 4, 3};
    int l2[] = {5, 6, 4};
    int returnSize;
    
    int* result = addTwoNumbers(l1, 3, l2, 3, &returnSize);
    
    printf("[");
    for(int i = 0; i < returnSize; i++) {
        printf("%d", result[i]);
        if(i < returnSize - 1) printf(", ");
    }
    printf("]\n");  // 输出：[7, 0, 8]
    
    free(result);
    return 0;
}