class Solution:
    def twoSum(self,nums: list[int],target:int) -> list[int]:
        lengthOfArray = len(nums)

        #iterate through array 
        for i in range(lengthOfArray-1):
            for j in range(i+1,lengthOfArray):
                if nums[i]+nums[j]==target:
                    return [i,j]
    

        return [0,0]
    





solution = Solution()

numList = [3,5,2,4,2]
ans = solution.twoSum(numList,7)
print(ans)

