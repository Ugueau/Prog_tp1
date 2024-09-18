
# Comparaison entre C et Python

## 1. Bases de la programmation

### Affichage des données
- **C** : Utilise `printf()` avec des spécificateurs (`%d`, `%s`). Gestion manuelle de la mémoire.
  ```c
  printf("Area of your circle is %f \n", area);
  ```
- **Python** : Utilise `print()` avec f-strings pour un formatage flexible.
  ```python
  print(f"J'ai {age} ans")
  ```

### Syntaxe et mémoire
- **C** : Syntaxe stricte, gestion manuelle de la mémoire.
- **Python** : Syntaxe simple, gestion automatique de la mémoire.

## 2. Manipulation des variables

### Typage statique vs dynamique
- **C** : Typage statique, les types doivent être déclarés.
  ```c
  float area = radius * radius * PI;
  ```
- **Python** : Typage dynamique, pas besoin de déclarer les types.
  ```python
  nombre = 10
  ```

### Annotations de type en Python
```python
def ajouter(a: int, b: int) -> int:
    return a + b
```

## 3. Opérateurs

### Arithmétiques
- **C & Python** : Utilisation des mêmes opérateurs (`+`, `-`, `*`, `/`, `%`).
  
### Logiques
- **C** : `&&`, `||`, `!`
- **Python** : `and`, `or`, `not`

### Bit à bit
- Utilisation similaire : `&`, `|`, `^`.

## 4. Boucles et structures de contrôle

### Boucles `for` et `while`
- **C** : Boucle `for` avec initialisation et condition explicite.
  ```c
  for (int i = 0; i < 5; i++) { ... }
  ```
- **Python** : Boucle `for` avec `range()`.
  ```python
  for i in range(5): ...
  ```

## 5. Conversion et formatage

### Formatage des chaînes
- **C** : `printf()` avec spécificateurs.
  ```c
  printf("Area of your circle is %f \n", area);
  ```
- **Python** : f-strings.
  ```python
  print(f"J'ai {age} ans")
  ```

### Conversion de types
- **C** : Conversion manuelle avec cast.
  ```c
  float b = (float)a / 3;
  ```
- **Python** : Utilisation de `int()`, `float()`, etc.
  ```python
  b = float(a) / 3
  ```

### Conversion en binaire
- **C** : Implémentation manuelle.
- **Python** : Utilise `bin()`.
  ```python
  bin(10)  # '0b1010'
  ```

## Conclusion
C est plus bas niveau avec gestion manuelle de la mémoire, tandis que Python est plus haut niveau avec une syntaxe simplifiée et une gestion automatique des ressources.
