# read a line from STDIN


def diff_between_vertical_and_horizontal_lines(number):
    return 0

n = int(input())

lst = []
for i in range(n):
    number = input()
    lst.append(number)

for number in lst:
    print(diff_between_vertical_and_horizontal_lines(number))
