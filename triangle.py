# on récupère l'entrée utilisateur
size:int

# try catch pour éviter un plentage si l'utilisateur entre autre chose qu'un entier
try:
  size = int(input("Please enter a number lower than 10: "))
except:
  print("You have to enter a number")

if size >= 10 :
  print("You number must be lower than 10")
else:
  for i in range(1,size+1):
    for j in range(1,i+1):
        if (i == j) or (j == 1) or (i == size):
          print("*", end= ' ')
        else:
          print('#', end=' ')

        if i == j:
          break
    print('')
