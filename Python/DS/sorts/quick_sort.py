import math

def quicksort(ary):
    if(len(ary) < 2):
        return ary
    else:
        length = len(ary)
        pivot = ary[math.floor(length / 2)]
        smaller =  []
        larger = []

        for x in ary:
            if x < pivot:
                smaller.append(x)
            elif x > pivot:
                larger.append(x)

        return quicksort(smaller) + [pivot] + quicksort(larger)
