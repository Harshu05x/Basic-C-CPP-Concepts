def display(matrix):
    for row in matrix:
        for element in row:
            print(element,end=" ")
        print()

def convert(matrix):
    SP = []
    for i in range (len(matrix)):
        for j in range (len(matrix[0])):
            if(matrix[i][j]) != 0:
                temp = []

                temp.append(i) 
                temp.append(j) 
                temp.append(matrix[i][j])

                SP.append(temp)

    print("\nSparse Matrix: \n")
    print("Row \tCol \tEle\n")
    for row in SP:
        for element in row:
            print(element,"\t",end="")
        print()

A = [[10, 0, 0, 0],
    [0, 20, 0, 0],
    [0, 0, 30, 0],
    [0, 0, 0, 40],
    [0, 50, 0, 0]]

print("Matrix:\n")
display(A)
convert(A)
