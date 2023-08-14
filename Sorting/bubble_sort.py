def bubble_sort(arr):
    for i in range(1,len(arr)):
        swapped = False
        for j in range(0,len(arr)-i):
            if(arr[j] > arr[j+1]):
                (arr[j],arr[j+1]) = (arr[j+1],arr[j])
                swapped = True

        if(swapped == False): break    

arr = [10,6,37,1,0,2,7]
bubble_sort(arr)
print(arr)

