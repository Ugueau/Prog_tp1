# cercles.py
# Mael CHALON | Hugo MILLOT
# calculer l'aire et le perimètre d'un cerle dont le rayon est transmis par l'utilisateur


import math

radius:float = float(input("Enter the radius of the circle: ")) # input utilisateur pour les raidus

area:float = math.pi * radius * radius # calcul de l'aire

perimeter:float = math.pi * radius * 2 # calcul du perimettre

print(f"area = {area}, perimeter = {perimeter}") # affichage des resultats obtenus




