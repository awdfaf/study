fibo = [[0 for k in range(2)] for k in range(42)]
fibo[0][0] = 1
fibo[0][1] = 0
fibo[1][0] = 0
fibo[1][1] = 1
for k in range(2,42):
    fibo[k][0] = fibo[k - 1][0] + fibo[k - 2][0];
    fibo[k][1] = fibo[k - 1][1] + fibo[k - 2][1];
a = int(input())
for k in range(a):
    c = int(input())
    print("%d"% fibo[c][0] +" %d" % fibo[c][1])