from fractions import Fraction
import numpy as np

def solution(m):
    if(len(m)<2):
        return [1,1]
    r,q=split(m)
    f=frac(q)
    f1=np.dot(f,r)
    return convert(f1[0])

def split(m):
    a=set()
    for i in range(len(m)):
        if(sum(m[i])==0):
            a.add(i)
    r=[]
    q=[]
    for i in range(len(m)):
        if i not in a:
            total=float(sum(m[i]))
            rt=[]
            qt=[]
            for j in range(len(m[i])):
                if j in a:
                    rt.append(m[i][j]/total)
                else:
                    qt.append(m[i][j]/total)
            r.append(rt)
            q.append(qt)
    return r,q

def frac(q):
    return np.linalg.inv(np.subtract(np.identity(len(q)),q))

def convert(x):
    arr=[]
    den=[]
    for i in x:
        f=Fraction(i).limit_denominator()
        arr.append(f.numerator)
        den.append(f.denominator)
    temp=1
    for i in den:
        temp=np.lcm(temp,i)
    for i in range(len(arr)):
        arr[i]*=int(temp/den[i])
    arr.append(temp)
    return arr

print(solution([[0, 2, 1, 0, 0], [0, 0, 0, 3, 4], [0, 0, 0, 0, 0], [0, 0, 0, 0,0], [0, 0, 0, 0, 0]]))