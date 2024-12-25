f=open("test.txt","w")
f.write("Hello")
f.close()

f=open("test.txt","r")
print(f.read())