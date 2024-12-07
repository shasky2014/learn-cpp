a = 1
b = 6

print("a={:02d},\tb={:02d}".format(a, b))


def my_swap(a, b):
    a, b = b, a
    return a, b


a, b = my_swap(a, b)
print("a={:02d},\tb={:02d}".format(a, b))

print("a=%02d,\tb=%02d" % (a, b))
al = [1, 2, 3, 4]
print(al)
