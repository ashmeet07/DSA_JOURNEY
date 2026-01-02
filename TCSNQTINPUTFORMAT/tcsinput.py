#If you have input like this  --- >   1 2 3 4 5 
arr=list(map(int,input().split()))
print(arr)

#If you have input like this ---- > 1,2,3,4,5
arr2=list(map(int,input().strip().split(",")))
print(arr2)


#If you have input like this -------> [1,2,3,4,5,6,7]
arr3=list(map(int,input().strip("[]").split(",")))
print(type(arr3[2]))


#If you have this ----->>>  apple mango banana
arr4=list(map(str,input().split()))
print(arr4[1])