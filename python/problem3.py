def count_occurances(last_registered_no, number_pattern):
    print(last_registered_no, number_pattern)
    return 0


n = int(input())
items = []
prices = []
discounts = []
for i in range(n):
    line = input()
    (last_registered_no, number_pattern) = line.split()
    print(count_occurances(last_registered_no, number_pattern))
