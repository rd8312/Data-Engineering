"""
[Permumations of Word]

Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order. 

"""

def permutation(lst):

    #check length
    if len(lst) == 0:
        return []
    
    if len(lst) == 1:
        return [lst]
    
    ans_lst = []
    for i in range(len(lst)):
        m = lst[i]
        rem_lst = lst[:i] + lst[i+1:]
        for p in permutation(rem_lst):
            ans_lst.append([m] + p)
    return ans_lst


data = list(input("Please enter the permumations of Word :"))
for p in permutation(data):
    print(p)

    

