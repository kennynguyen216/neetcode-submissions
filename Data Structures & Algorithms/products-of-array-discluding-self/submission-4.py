class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        pre = [1] * len(nums)
        post = [1] * len(nums)
        res = [1] * len(nums)

        for i in range(1, len(nums)):
            pre[i] = pre[i-1] * nums[i-1]

        for i in range(len(nums) -1, 0 ,-1):
            post[i-1] = post[i] * nums[i]

        for i in range(len(nums)):
            res[i] = pre[i] * post[i]
        
        return res