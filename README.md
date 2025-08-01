# Super Trunfo de Cidades em C

Programa em C para criação, exibição e comparação de duas cartas de cidades no estilo Super Trunfo.  
O usuário informa os dados das cidades e escolhe **dois atributos numéricos diferentes** para comparar as cartas.

## Funcionalidades

- Entrada de dados: estado, código, cidade, população, área, PIB, pontos turísticos
- Cálculo automático de densidade populacional
- Seleção de **dois atributos distintos** para comparação (via menu)
- **Comparação**: cada atributo é comparado (maior vence, exceto densidade que vence o menor)
- Soma dos dois atributos decide a rodada (quem tiver a maior soma vence)
- Empate tratado caso as somas sejam iguais
- Exibição clara dos atributos escolhidos, valores e resultado final

## Como compilar

**Windows:**
```

gcc super\_trunfo.c -o trunfo.exe

```
**Linux/macOS:**
```

gcc super\_trunfo.c -o trunfo

```

## Como executar

**Windows:**
```

./trunfo.exe

```
**Linux/macOS:**
```

./trunfo

```

## Requisitos

- GCC ou outro compilador C compatível
- Terminal de comando

## Estrutura

- `super_trunfo.c` — código-fonte principal

## Autor

Eduardo
