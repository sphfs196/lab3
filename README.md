compile A: g++ -o lab3 lab3.cpp

1000:

sort(): 0 seconds
v1/v2 are different.
insertion_sort(): 0.01 seconds
v1/v2 are the same.

10000:

sort(): 0 seconds
v1/v2 are different.
insertion_sort(): 1.27 seconds
v1/v2 are the same.

100000:

sort(): 0.04 seconds
v1/v2 are different.
insertion_sort(): 127.86 seconds
v1/v2 are the same.

1000000:

sort(): 0.52 seconds
v1/v2 are different.
insertion_sort():  seconds
v1/v2 are the same.

explanation:
sort()的時間複雜度:O(n*logn)
insertion_sort()的時間複雜度:O(n^2)
-->sort()比insertion_sort()快，n越大快越多~

