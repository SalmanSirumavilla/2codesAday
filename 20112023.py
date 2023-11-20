# ====================== Sum Pair closest to X =======================
class Solution:
    def sumClosest(self, arr, x):
        # code here
        left, right = 0, len(arr) - 1
        closest = float("inf")
        result = [None, None]
        
        while left < right:
            current = arr[left] + arr[right]
            if abs(x - current) < abs(x-closest):
                result = [arr[left], arr[right]]
                closest = current
                
            if current > x:
                right-=1
            else:
                left+=1
        
        # print(result)
        return result
            
# Driver code
if __name__ == '__main__':
    print("Enter total #of test cases... : ")
    tc = int(input())
    while tc > 0:
        print("Enter space seperated  n and x: ")
        n, x = list(map(int, input().strip().split()))
        print("Enter space seperated  values of input array: ")
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.sumClosest(arr, x)
        print("Sum Pair closest to X")
        print(str(ans[0]) + " " + str(ans[1]))
        tc -= 1
