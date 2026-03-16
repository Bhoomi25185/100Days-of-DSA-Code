//3sum
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {

    int **res = malloc(10000 * sizeof(int*));
    *returnColumnSizes = malloc(10000 * sizeof(int));
    *returnSize = 0;

    for(int i=0;i<numsSize-2;i++){
        for(int j=i+1;j<numsSize-1;j++){
            for(int k=j+1;k<numsSize;k++){
                if(nums[i] + nums[j] + nums[k] == 0){

                    res[*returnSize] = malloc(3*sizeof(int));
                    res[*returnSize][0] = nums[i];
                    res[*returnSize][1] = nums[j];
                    res[*returnSize][2] = nums[k];

                    (*returnColumnSizes)[*returnSize] = 3;
                    (*returnSize)++;
                }
            }
        }
    }

    return res;
}