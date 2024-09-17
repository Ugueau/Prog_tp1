# Binaire.py
# Mael CHALON | Hugo Millot
# transformer un entier en binaire


# pour calculer un nombre entier en binaire il sufit d'enchainer les divisions par deux

# on récupère un entier donné par l'utilisateur
# try catch pour éviter un plentage si l'utilisateur entre autre chose qu'un entier
import sys


try:
  integer:int = int(input("Please enter a number : "))
except:
  print("You have to enter a number")
  sys.exit()

# on créé une liste qui stockera le reste de chaque division

binary:list = []

# boucle tant qu'on peux diviser par 2
while integer > 1:
  # on stock le reste de chaque division
  binary.append(integer % 2)
  # on modifie le nombre a diviser
  integer = int(integer / 2)

# ajout du dernier bit
binary.append(integer)

# on inverse notre liste pour avoir le nombre en binaire dans le bon sens
binary.reverse()

# ajout d'un prefix pour indiquer qu'il sagit de nombre en binaire
print ("0b", end='')
#boucle d'affichage
for i in binary:
  print(i, end='')


# en python il existe la fonction bin() qui donne le même résultat
