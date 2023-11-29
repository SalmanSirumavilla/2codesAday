def duplicates(arr, n): 
    """ Driver code
        if(__name__=='__main__'):
            t = int(input())
            for i in range(t):
                n = int(input())
                arr = list(map(int, input().strip().split()))
                res = Solution().duplicates(arr, n)
                for i in res:
                    print(i,end=" ")
                print()"""
    set_seen = set()
    set_duplicated = set()
    for each in arr:
        if each not in set_seen:
            set_seen.add(each)
        else:
            set_duplicated.add(each)
    return sorted(list(set_duplicated)) if set_duplicated else [-1]


