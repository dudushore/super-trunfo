Jogo de Cartas - Batalha de Atributos
Este repositório contém um jogo de cartas simples, escrito em C, que simula uma batalha de atributos. O programa compara duas "cartas", cada uma representando uma cidade com seus dados estatísticos, e determina qual delas vence em cada categoria.

Funcionalidades
O programa permite ao usuário inserir dados para duas cartas, incluindo:

Estado

Cidade

Código

População (unsigned long int)

Área (double)

PIB (double)

Pontos turísticos (unsigned int)

A partir desses dados, o programa calcula e compara os seguintes atributos:

Densidade Populacional: População / Área.

PIB per Capita: PIB / População.

Super Poder: A soma de todos os atributos numéricos.

Regras do Jogo
O programa compara as duas cartas com base nas seguintes regras:

Vencedor por maior valor: Para População, Área, PIB, Pontos Turísticos, PIB per Capita e Super Poder, a carta com o maior valor vence.

Vencedor por menor valor: Para a Densidade Populacional, a carta com o menor valor vence.

O resultado de cada comparação é exibido como 1 (Carta 1 venceu) ou 0 (Carta 2 venceu ou houve empate).

### Como Compilar e Executar

1.  Salve o código em um arquivo com a extensão `.c` (por exemplo, `batalha_cartas.c`).
2.  Use um compilador C (como GCC) para compilar o arquivo. Abra o terminal e execute:
    ```bash
    gcc batalha_cartas.c -o batalha_cartas
    ```
3.  Execute o programa compilado:
    ```bash
    ./batalha_cartas
    ```
4.  Siga as instruções na tela para inserir os dados das duas cartas.
