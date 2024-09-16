import sys


print("int : ", sys.getsizeof(1)) 
print("float : ", sys.getsizeof(1.1))
print("bool : ", sys.getsizeof(True))
print("str : ", sys.getsizeof('a'))
print("list : ", sys.getsizeof([1,2,3,4,"aze"]))
print("tuple : ", sys.getsizeof((1,2,3,4,"aze")))
print("dict : ", sys.getsizeof({"Hugo" : "Millot","age" : 21,"sexe" : 'M'}))