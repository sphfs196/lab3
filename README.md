compile A: g++ -o lab3 lab3.cpp

result of B:
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
sort()'S time complexity:O(n*logn)
insertion_sort()'s time complexity:O(n^2)
-->sort() is faster than insertion_sort(). If n becomes bigger, sort() will become more faster than insertion sort()

Ex:sort()n3=100000:(100000*log100000*clock)/CLOCKS_PER_SEC
     	n4=1000000:(1000000*log1000000*clock)/CLOCK_PER_SEC
		-->n4/n3=12 approximates the results that the program runs 0.52/0.04=13
		-->the result is reasonable
	insertion_sort()n1=1000:(1000*1000*clock)/CLOCKS_PER_SEC
					n2=10000:(10000*10000*clock)/CLOCKS_PER_SEC
					-->n2/n1=100 approximates the seconds that the program runs1.27/0.01=127
					-->the result is reasonable

