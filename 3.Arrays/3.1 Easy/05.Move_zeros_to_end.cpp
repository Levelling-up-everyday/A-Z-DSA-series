 int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)j++;
            else if(j>0)
            {
                int temp=nums[i];
                nums[i]=0;
                nums[i-j]=temp;
            }
        }
