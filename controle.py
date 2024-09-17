# controle.py
# Mael CHALON | Hugo MILLOT
# récupérer la liste des nombre de 1 a 1000 répondant a certaines conditions



# on créé 3 liste pour stocker les résutats de chaque condition et ne faire qu'une seule boucle 
liste_controle_1:list = []
liste_controle_2:list = []
liste_controle_3:list = []


for i in range(1,1001):
    # avec les modulos on regarde si le reste de la division de i par 4 = 0 et i par 6 != 0
    if (i % 4 == 0 ) and (i % 6 != 0): 
        liste_controle_1.append(i)

    # avec les modulos on regarde si le reste de la division de i par 8 = 0 et i par 2 = 0
    if (i % 8 == 0) and (i % 2 == 0):
        liste_controle_2.append(i)
    
    # avec les modulos on regarde si le reste de la division de i par 4 = 0 et i par 6 != 0
    if ((i % 5 == 0) or (i % 7 == 0)) and (i % 10 != 0):
        liste_controle_3.append(i)

print("liste des nombre divisible par 4 mais pas par 6:")
print(liste_controle_1)
print("liste des nombre divisible par 8 et paire:")
print(liste_controle_2)
print("liste des nombre divisible par 5 ou 7 mais pas par 10:")
print(liste_controle_3)