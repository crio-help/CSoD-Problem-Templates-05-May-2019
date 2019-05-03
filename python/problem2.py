def print_bill(items, prices, discounts):
    #print(items, prices, discounts)
    print("Total", 0.00)



n = int(input())
items = []
prices = []
discounts = []
for i in range(n):
    line = input()
    (item, price, discount) = line.split();
    items.append(item)
    prices.append(price)
    discounts.append(discount)

print_bill(items, prices, discounts)
