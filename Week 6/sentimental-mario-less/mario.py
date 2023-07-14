# TODO
from cs50 import get_int

while True:
    h = get_int("Height: ")
    if h > 0 and h < 9:
        break

for i in range(0, h, 1):
    for j in range(0, h, 1):
        if i + j < h - 1:
            print(" ", end="")
        else:
            print("#", end="")
    print()
