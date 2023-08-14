def selection_sort(arr):
    for i in range(len(arr)-1):
        minIndex = i
        for j in range(i+1,len(arr)):
            if(arr[j] < arr[minIndex]): 
                minIndex = j
        (arr[minIndex],arr[i]) = (arr[i],arr[minIndex])

arr = [10,6,37,1,0,2,7]
selection_sort(arr)
print(arr)

