nums = input().split()
nums = list(map(int, nums))

if nums[0] > nums[1]:
    amount = nums[0]-nums[1]
    if amount == 1: 
        print(f"Dr. Chaz needs {amount} more piece of chicken!")
    else: 
        print(f"Dr. Chaz needs {amount} more pieces of chicken!")
elif nums[1] > nums[0]:
    amount = nums[1]-nums[0]
    if amount == 1:
        print(f"Dr. Chaz will have {amount} piece of chicken left over!")
    else: 
        print(f"Dr. Chaz will have {amount} pieces of chicken left over!")
