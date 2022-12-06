#For this question, I did it in python since I remembered a similar question to this in python.
#For the allocation of value to the letter, I don't know an easier way to do it
#It works but the answer I got was too low. It is still a work in progress
f1 = open("aocday3input.txt", "r")
mistake=[]
sum=0
for word in f1:
  firsthalf  = word[:len(word)//2]
  secondhalf = word[len(word)//2:]
  for letter1 in firsthalf:
    for letter2 in secondhalf:
      if letter1==letter2:
        mistake.append(letter2)
        for d in range(len(mistake)-1):
          if mistake[d]==letter2:
            mistake.remove(letter2)
            break
for l3 in mistake:
  if l3 == "a":
    sum+=1
  elif l3 == "b":
    sum+=2
  elif l3 == "c":
    sum+=3
  elif l3 == "d":
    sum+=4
  elif l3 == "e":
    sum+=5
  elif l3 == "f":
    sum+=6
  elif l3 == "g":
    sum+=7
  elif l3 == "h":
    sum+=8
  elif l3 == "i":
    sum+=9
  elif l3 == "j":
    sum+=10
  elif l3 == "k":
    sum+=11 
  elif l3 == "l":
    sum+=12
  elif l3 == "m":
    sum+=13
  elif l3 == "n":
    sum+=14
  elif l3 == "o":
    sum+=15
  elif l3 == "p":
    sum+=16
  elif l3 == "q":
    sum+=17
  elif l3 == "r":
    sum+=18
  elif l3 == "s":
    sum+=19
  elif l3 == "t":
    sum+=20
  elif l3 == "u":
    sum+=21
  elif l3 == "v":
    sum+=22
  elif l3 == "w":
    sum+=23
  elif l3 == "x":
    sum+=24
  elif l3 == "y":
    sum+=25
  elif l3 == "z":
    sum+=26
  elif l3 == "A":
    sum+=27
  elif l3 == "B":
    sum+=28
  elif l3 == "C":
    sum+=29
  elif l3 == "D":
    sum+=30
  elif l3 == "E":
    sum+=31
  elif l3 == "F":
    sum+=32
  elif l3 == "G":
    sum+=33
  elif l3 == "H":
    sum+=34
  elif l3 == "I":
    sum+=35
  elif l3 == "J":
    sum+=36
  elif l3 == "K":
    sum+=37 
  elif l3 == "L":
    sum+=38
  elif l3 == "M":
    sum+=39
  elif l3 == "N":
    sum+=40
  elif l3 == "O":
    sum+=41
  elif l3 == "P":
    sum+=42
  elif l3 == "Q":
    sum+=43
  elif l3 == "R":
    sum+=44
  elif l3 == "S":
    sum+=45
  elif l3 == "T":
    sum+=46
  elif l3 == "U":
    sum+=47
  elif l3== "V":
    sum+=48
  elif l3 == "W":
    sum+=49
  elif l3 == "X":
    sum+=50
  elif l3 == "Y":
    sum+=51
  elif l3 == "Z":
    sum+=52

print(sum)
