import random

file = open("00. Input.txt", "a")

for i in range(pow(2, 25)):
    file.write(str(random.randint(10000000, 20000000)) + '\n')
    if i % 1e6 == 0:
        print(i)
file.close()
