def solution(l):
    # Your code here
    count=0
    i=0
    k=0
    temp=[]
    while k<len(l):
        temp.append(0)
        k+=1
    while i<len(l):
        j=i+1
        while j<len(l):
            if(l[j]%l[i]==0):
                temp[j]+=1
                count+=temp[i]
            j+=1
        i+=1
    return count

print(solution([1,2,3,4,5,6]))