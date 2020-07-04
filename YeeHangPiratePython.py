fin = open("piratein.txt", "r")
lis = []
for i in range(3):
    lis.append(int(fin.readline()))
fin.close()
fout = open("pirateout.txt", "w")
fout.write(str(min(lis[1] + lis[2], lis[0] - lis[1] + lis[0] - lis[2])))
fout.close()
