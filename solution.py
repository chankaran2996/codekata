#-------------------------------------------------------------------------------
# Name:        module1
# Purpose:
#
# Author:      chandru
#
# Created:     11-07-2019
# Copyright:   (c) chandru 2019
# Licence:     <your licence>
#-------------------------------------------------------------------------------

def main():
    pass

if __name__ == '__main__':
    main()
t = int(input())
l = list(map(int,input().split()))
count = 0
for i in range(t):
    for j in range(i,t):
        for k in range(j,t):
            if l[i]<l[j]<l[k]:
                count+=1
print(count)