def sum(array, target) :
    for i in range(len(array)-1) :
        if array[i] + array[i + 1] == target :
            res = [i, i + 1]
            break
    return res

if __name__ == "__main__":
    print(sum([2,7,11,15], 9))      
    print(sum([3, 2, 4], 6))         
    print(sum([3, 3], 6))              
