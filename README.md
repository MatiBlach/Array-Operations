# Array-Operations
The first line contains the number **n** - the number of values ​​to read (**n<1000**)\
The next line contains **n** numbers that should be read into the **array**.\
The next line contains the number **m** - the number of operations to be performed.\
The next **m** lines contain operations. Each operation starts with a single character, which may be followed by additional parameters for the operation. Possible operations are:
+ **c w1 w2** - change all values **​​w1** in the array to values **​​w2**; the program should print how many changes have been made
+ **s k** - calculate partial sums from the **array** every **k-th** number; the program should print at most **k** numbers - partial sums
+ **m p k** - calculate the maximum value from the subarray from the **p-th** place to the **k-th** place, where the first number has index **1**; the program should print a single number or # if **p>k** or the range **p-k** is outside the range of the array

# Example
### Input
5\
1 2 3 4 3\
6\
s 3\
m 2 4\
c 3 10\
s 8\
m -6 10\
m 6 10
### Output
5 5 3\
4\
2\
1 2 10 4 10\
10\
\#
