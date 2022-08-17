import math

def quicksort(ary):
    if(len(ary) < 2):
        return ary
    else:
        length = len(ary)
        pivot = ary[math.floor(length / 2)]
        left =  []
        right = []

        for x in ary:
            if x < pivot:
                left.append(x)
            elif x > pivot:
                right.append(x)

        return ary.append(quicksort(left))
