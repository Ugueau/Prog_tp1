# on récupère l'entrée utilisateur
import sys


size:int

# try catch pour éviter un plentage si l'utilisateur entre autre chose qu'un entier
try:
  size = int(input("Please enter a number lower than 10: "))
except:
  print("You have to enter a number")
  sys.exit()
  
# si le nombre siasie est supérieur ou égale a 10 on renvoie une erreur 
if size >= 10 :
  print("You number must be lower than 10")
else:
  # boucle de 1 a size + 1 pour faire les lignes du triangle
  for i in range(1,size+1):
    # bloucle de 1 a i+1 pour print le bon nombre d'élément dans chaque lignes
    for j in range(1,i+1):
        # si on affiche le dernière élément de la ligne ou le premier ou que nous sommes sur la dernière ligne on affiche * sans retour a la ligne
        if (i == j) or (j == 1) or (i == size):
          print("*", end= ' ')
        else: # sinon on affiche # sans retour a la ligne
          print('#', end=' ')

    print('')  # on fait un print pour retourner a la ligne
