soma = int(input())

letra = (soma - 1) % 26 + 97

 

if(soma != 0):
    print(chr(letra))
else:
    print("joguem de novo")
