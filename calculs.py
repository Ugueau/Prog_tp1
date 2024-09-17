# calculs.py
# Mael CHALON | Hugo MILLOT
# faire des calculs simple de manière interactif


import sys


num1:int
num2:int
op:str



# try catch pour éviter un plentage si l'utilisateur entre autre chose qu'un entier
try:
  num1 = int(input("Please enter a number : "))
except:
  print("You have to enter a number")
  sys.exit() # systeme exite pour faire relancer le programme a l'utilisateur

op = input("Please enter a operator : ")
    

match op:
  case '+': #addition
    # try catch pour éviter un plentage si l'utilisateur entre autre chose qu'un entier
    try:
        num2 = int(input("Please enter a number: "))
    except:
        print("You have to enter a number")
        sys.exit() # systeme exite pour faire relancer le programme a l'utilisateur

    print(num1 + num2)

  case '-': # soustraction
    # try catch pour éviter un plentage si l'utilisateur entre autre chose qu'un entier
    try:
        num2 = int(input("Please enter a number: "))
    except:
        print("You have to enter a number")
        sys.exit() # systeme exite pour faire relancer le programme a l'utilisateur

    print(num1 - num2)

  case '*': # multiplication
    # try catch pour éviter un plentage si l'utilisateur entre autre chose qu'un entier
    try:
        num2 = int(input("Please enter a number: "))
    except:
        print("You have to enter a number")
        sys.exit() # systeme exite pour faire relancer le programme a l'utilisateur

    print(num1 * num2)

  case '/': # division
    # try catch pour éviter un plentage si l'utilisateur entre autre chose qu'un entier
    try:
        num2 = int(input("Please enter a number: "))
    except:
        print("You have to enter a number")
        sys.exit() # systeme exite pour faire relancer le programme a l'utilisateur
        
    if num2 == 0: # impossible de diviser par 0
       print("Impossible opperation")
    else:
       print(num1 / num2)

  case '%': # modulo
    # try catch pour éviter un plentage si l'utilisateur entre autre chose qu'un entier
    try:
        num2 = int(input("Please enter a number: "))
    except:
        print("You have to enter a number")
        sys.exit() # systeme exite pour faire relancer le programme a l'utilisateur

    if num2 == 0: # impossible de diviser par 0
       print("Impossible opperation")
    else:
       print(num1 % num2)

  case '&': # bitwise AND
    # try catch pour éviter un plentage si l'utilisateur entre autre chose qu'un entier
    try:
        num2 = int(input("Please enter a number: "))
    except:
        print("You have to enter a number")
        sys.exit() # systeme exite pour faire relancer le programme a l'utilisateur

    print(num1 & num2)

  case '|': # bitwise OR
    # try catch pour éviter un plentage si l'utilisateur entre autre chose qu'un entier
    try:
        num2 = int(input("Please enter a number: "))
    except:
        print("You have to enter a number")
        sys.exit() # systeme exite pour faire relancer le programme a l'utilisateur

    print(num1 | num2)

  case '~': # bitwise NOT
    print(~num1)
    
  case _: #cas par defaut et gérer si l'utilisateur a entrer un opérateur valide
    print("Please use only the folowing operator +, -, *, /, %, &, |, ~")