#include <stdio.h>

int firstMissingPositive(int* nums, int numsSize) {
    int present[100002];

    for(int i=0;i<100002;i++){
        present[i]=0;
    }

    for(int i=0;i<numsSize;i++){
        if(nums[i]>100001 || nums[i]<=0){
            continue;
        }
        present[nums[i]]=1;
    }

    for(int i=1;i<=100001;i++){
        if(present[i]==0){
            return i;
        }
    }

    return 0;
}

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d", &nums[i]);
    }

    int result = firstMissingPositive(nums, n);

    printf("First Missing Positive = %d\n", result);

    return 0;
}