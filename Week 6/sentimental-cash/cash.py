# TODO

from cs50 import get_float

while True:
    c = get_float("Change: ")
    if c > 0:
        break

c = round(c * 100)

count = 0

while c >= 25:
    c = c - 25
    count += 1

while c >= 10:
    c = c - 10
    count += 1

while c >= 5:
    c = c - 5
    count += 1

while c >= 1:
    c = c - 1
    count += 1

print("Total coins: ", count)
