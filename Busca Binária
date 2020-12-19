from random import randint
min = 1
max = int(input("Defina um número máximo: "))
computador = randint(1, max)
while True:
    media = (min + max) // 2
    if media == computador:
        print('A busca encontrou o numero pensado, foi {}'.format(computador))
        break
    elif media < computador:
        print(f'O número foi menor que o pensado, tentando novamente')
        min = media + 1
    else:
        print(f'O número foi maior que o pensado, tentando novamente')
        max = media - 1
print(f'Só tenho duas palavras a dizer: Para, Béns!')
