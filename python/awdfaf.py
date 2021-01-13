# def bubble_sort(num):
#     for i in range(len(num)-1,0,-1):
#         for j in range(i):
#             if num[j]>num[j+1]:
#                 num[j],num[j+1]=num[j+1],num[j]
#     return num

# n=int(input())
# num=[int(input()) for _ in range(n)]
# num_sorted=bubble_sort(num)
# for i in num_sorted:
#     print(i)

a = [int(input()) for _ in range(int(input()))]
[print(i) for i in sorted(a)]
