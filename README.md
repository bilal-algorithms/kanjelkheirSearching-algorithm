# installing the code

```bash
git clone https://bilal-algorithms/kanjelkheirSearching-algorithms.git && cd kanjelkheirSearching-algorithm
```
## running the code with the Makefile
```bash
make && ./main
```
paste this into your terminal to run the makefile (make sure you installed make)

## Running the code without Makefile
```bash
g++ main.cpp -o main -std=c++17 && ./main
```
Notice: you need to install g++ first on your machine

## using the program
After running the code, you need to provide the value of the following variables t,k, and the array or vector values |
t  is the total amount of integers inside the array or vector
k is the target that you are searching for in the array or vector
Then the values that you provide after that are k numbers, which would be the input of the vector or array

## example:
```bash
10 7 # 10 is the number of integers in the array, and 7 is the target that you are searching for
1 2 3 4 5 6 7 8 9 10 # these are the values of the array
```

# Time complexity
## Best case scenario
### O(1)
## Worst case scenario
### O(n/2) approx O(n)

