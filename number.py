def sorted_k_partitions(seq, k):
    ...
    result = generate_partitions(0)

    # Sort the parts in each partition in shortlex order
    result = [sorted(ps, key = lambda p: (len(p), p)) for ps in result]
    # Sort partitions by the length of each part, then lexicographically.
    result = sorted(result, key = lambda ps: (*map(len, ps), ps))

    return result

key = lambda p: (len(p), p) 

seq = [1, 2, 3, 4]

for k in 1, 2, 3, 4:
    for groups in sorted_k_partitions(seq, k):
        print(k, groups)


'''

# A Python program to print all combinations  
# of given length with unsorted input. 
from itertools import combinations 
  
# Get all combinations of [2, 1, 3] 
# and length 2 
comb = combinations([2, 1, 3], 2) 
  
# Print the obtained combinations 
for i in list(comb): 
    print i '''
