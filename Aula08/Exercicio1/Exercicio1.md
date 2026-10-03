# Matriz de notas


# Contexto


Um sistema precisa processar notas de várias provas organizadas em matriz: linhas são alunos, colunas são provas.


# Objetivo


Aplicar matrizes bidimensionais em C, dentro do fio do sistema de notas.


# Tarefa


    Ler duas matrizes 3×3 de inteiros, A e B.
    Calcular e exibir a matriz soma de A e B.
    Calcular e exibir a soma da diagonal principal de A.
    Calcular e exibir a matriz transposta de A.


# Entrada


Nove inteiros para A, seguidos de nove inteiros para B, um por linha.


# Saída


A matriz soma (Soma A + B:), a soma da diagonal principal (Diagonal de A: X) e a transposta (Transposta de A:).


# Exemplos


Entrada
	

Saída
```
    1 2 3

    4 5 6

    7 8 9

    9 8 7

    6 5 4

    3 2 1
```

Soma A + B:
```
    10 10 10

    10 10 10

    10 10 10
```

Diagonal de A: 15

Transposta de A:
```
    1 4 7

    2 5 8

    3 6 9
```


# Validação


    O programa compila sem erros.
    Matriz soma, diagonal e transposta estão corretos.
    Laço duplo usa i para linha e j para coluna.