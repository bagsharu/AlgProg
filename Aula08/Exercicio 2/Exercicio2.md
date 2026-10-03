# Arquivo de notas


# Contexto


As notas da turma precisam sobreviver ao fim do programa: o sistema grava o vetor de notas em disco e o relê depois.


# Objetivo


Aplicar escrita e leitura de arquivo texto em C (fopen, fprintf, fscanf, fclose), reaproveitando o vetor de notas.


# Tarefa


    Ler um vetor de 5 notas reais do teclado.
    Gravar as notas em notas.txt, uma por linha, usando fprintf.
    Reabrir notas.txt em modo "r" e verificar se arquivo == NULL antes de prosseguir.
    Ler as notas com fscanf, exibi-las na tela e fechar o arquivo com fclose.


# Entrada


Cinco valores reais, um por linha.


# Saída


Os registros relidos de notas.txt, um por linha, precedidos do cabeçalho Notas lidas de notas.txt:.


# Exemplos


Entrada
```
    8.0

    7.5

    9.0

    6.5

    8.0
```		

Saída


Notas lidas de notas.txt:
```	
    8.0

    7.5

    9.0

    6.5

    8.0
```	


# Validação


    O programa compila sem erros.
    Todo fopen é verificado com == NULL.
    O conteúdo lido do arquivo corresponde ao gravado.
    O arquivo é fechado com fclose após cada uso.