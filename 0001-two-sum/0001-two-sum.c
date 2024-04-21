/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* a, int n, int target, int* returnSize){
    
    int *result=(int *)malloc(sizeof(int)*2);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==target && i!=j)
            {
                result[0]=i;
                result[1]=j;*returnSize=2;
                return result;
            }
        }
    }
    
    return result;

}