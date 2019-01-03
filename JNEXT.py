for i in range(int(input())):
    n = int(input())
    arr = [int(x) for x in input().split()]
    #print (arr)
    len_arr = len(arr)
    pos_i = -1
    for i in range(len_arr-1):
        if(arr[i]<arr[i+1]):
                pos_i = i
    if (pos_i==-1 or len_arr==0):
            print("-1")
    else:
        pos_j = pos_i+1
        for i in range(pos_i,len_arr):
                if(arr[i]>arr[pos_i]):
                        pos_j=i
        temp = arr[pos_i]
        arr[pos_i] = arr[pos_j]
        arr[pos_j] = temp
        #print(arr)
        fn_lst = arr[0:pos_i+1]+sorted(arr[pos_i+1:])
        #print(fn_lst)
        for i in range(len(arr)):
                print(fn_lst[i],end="")
        print()
