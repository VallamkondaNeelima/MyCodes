

def binary_search(input_array, value):
    m=0
    n=len(input_array)-1
    while(m<=n):
        if(value>input_array[(m+n)//2]):
            m=((m+n)//2)+1
        elif(value<input_array[(m+n)//2]):
            n=((m+n)//2)-1
        else:
            return (m+n)//2
    if(input_array[m]==value):
        return m
    return -1

test_list = [1,3,9,11,15,19,29]
test_val1 = 25
test_val2 = 15
print (binary_search(test_list, test_val1))
print (binary_search(test_list, test_val2))
