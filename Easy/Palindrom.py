class Solution:
    def isPalindrome(self, x: int) -> bool:
        tempNum = x
        rev = 0
        while tempNum > 0:
            
            rev = (rev*10)+int(tempNum%10)
            print(rev,tempNum)
            tempNum = int(tempNum / 10)
        
        print(tempNum)
        if rev == x:
            return True

        return False


objSolution = Solution()
ans = objSolution.isPalindrome(121)
print(ans)
