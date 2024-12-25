def solution(n):
	count=0
	n=int(n)
	while(n>1):
		if((n-3)%4==0 and n!=3):
			n=n+1
			count+=1
		elif((n-5)%4==0 or n==3):
			n=n-1
			count+=1
		else:
			n=n/2
			count+=1
	
	if(n==1):
		return count
	return 0

print(solution(15))