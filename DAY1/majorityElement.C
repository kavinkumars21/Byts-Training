int majorityElement(int* nums, int n){
    int voter = nums[0];
    int votercount=1;
    for(int i=1;i<n;i++){
        if(nums[i]==voter) ++votercount;
        else --votercount;
        if(votercount==0){
            voter=nums[i];
            votercount=1;
        }
    }
    return voter;
}
