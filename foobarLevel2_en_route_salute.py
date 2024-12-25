def solution(l):
    count=0
    count1=0
    for i in l:
        if i=='>':
            count+=1
        if i=='<':
            count1+=count
    return count1*2