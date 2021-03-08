words = [input() for i in range(int(input()))]
words = sorted(words,key=lambda x: (len(x),x))

temp = ''
for i in words:
    if temp != i:
        print(i)
        temp=i
