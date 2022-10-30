#1
x = [1,2,3,4,5]
print(sum(x))
#yada
t = 1
for n in x:
    t += n
print(t)

#2
x = [1,2,3,4,5]
print(min(x),max(x))

#3
x = [1,2,3,4,5]
print(len(x))
#yada
i = 1
for n in x:
    i+=1
print(i)

#4
s = "abcd"
ls = list(s)

#5
#soruda ne istiyor anlamadım ama bu tarz
x = [1,5,-3,8,2,-1,0]
x.sort()

#6
ls = ["a","b","c","d","e"]
s = "-".join(ls)

#7
x1 = [1,2,3,4,5,6,7]
x2 = ["a","b","c","d","e","f","g","h"]


x3 = x1[:5] + x2[:4]

#8
x1 = [1,2,3,4,5,6,7]
x2 = ["a","b","c","d","e","f","g","h"]

x3 = x1[:5] + x2[-5:]


#9
x1 = [1,2,3,4,5,6,7]
x2 = ["a","b","c","d","e","f","g","h"]

x2.sort(reverse=True)

x3 = x1[:5] + x2[:5]

#10
x1 = [1,2,3,4,5,6,7]
x2 = ["a","b","c","d","e","f","g","h"]


x3 = x1[0::2] + x2[0::2]

#11
x1 = [1,2,3,4,5,6,7]
x2 = ["a","b","c","d","e","f","g","h"]

x3 = x1[:4] + x2 + x1[4:]

#12
x1 = [1,2,3,4,"a","b","c","d","e","f","g","h",5,6,7]
#bunu hoca'nın söylediği şekilde yap ben yaparsam belli olur

#13
x1 = [1,2,3,4,"a","b","c","d","e","f","g","h",5,6,7]
if "g" in x1:
    print("g var.")

#14
x1 = [1,2,3,4,"a","b","c","d","e","f","g","h",5,6,7]
i = x1.index("g")

#15
#bunun gibi görmediysen değiştir
import random
x1 = [1,2,3,4,"a","b","c","d","e","f","g","h",5,6,7]
n = x1[random.randint(0,x1(len))]

#16
x1 = [1,2,3,4,5,6,7]
x2 = ["a","b","c","d"]

x1.append(x2)

#17
x1 = [1,2,3,4,5,6,7]
x2 = ["a","b","c","d"]

x3 = x1+x2

#18

x1 = [1,2,3,4,5]
nn = 0
for n in x1:
    nn+= n
    nn*= 10

nn//=10

#19
#bu ne bilmiyorum, hoca derste falan söylemiştir


#20
x1 = [1,2,3,4,5]
del x1[2]
print(x1)

#21
x1 = [1,2,3,4,5]
x1[2] = 10
print(x1)

#22
#burada fonksiyon mu istiyor anlamadım
x1 = [1,2,3,4,5]
print(x1[-1])
del x1[-1]

#23
x1 = [1, 2, 3, 4, 5, 6, 7, 8]
n = 3

x2 = x1[n:] + x1[:n]

#24
x1 = [1,2,3,2,-1,2,5,3]
c = x1.count(2)

#25
x1 = [1.2,2.5,3.2,2.1,-1.5,2.8,5.0,3.4]
x1.remove(2.1)
print(x1)


