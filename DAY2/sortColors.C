void sortColors(int* nums, int numsSize){
    int i, cz=0, co=0;
    for(i=0;i<numsSize;i++){
        if(nums[i]==0) ++cz;
        if(nums[i]==1) ++co;
    }
    for(i=0;i<cz;i++)
        nums[i]=0;
    for(i=cz;i<cz+co;i++)
        nums[i]=1;
    for(i=cz+co;i<numsSize;i++)
        nums[i]=2;
}
