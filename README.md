# Jogo da Forca

Este é um jogo simples em C que simula o clássico jogo da forca. O jogador tenta adivinhar uma palavra secreta, digitando letras uma de cada vez, com um número limitado de chances.

## Funcionamento

O programa solicita ao jogador que insira a palavra secreta. Em seguida, ele exibe na tela uma linha tracejada representando cada letra da palavra. O jogador digita uma letra por vez, e o programa verifica se a letra está presente na palavra secreta. Se estiver, ela é revelada na posição correspondente na linha tracejada. O jogador tem um número limitado de chances para adivinhar a palavra completa.

## Como Executar

1. Certifique-se de ter um compilador C instalado em seu sistema.
2. Abra um terminal na pasta onde está o arquivo fonte (`jogo_forca.c`).
3. Compile o programa usando o compilador C. Por exemplo, usando o GCC:
   ```bash
   gcc -o jogo_forca jogo_forca.c
   ```
4. Execute o programa:
   ```bash
   ./jogo_forca
   ```

## Exemplo de Uso

```
--------------BEM VINDO AO JOGO DA FORCA----------------------
Tecle 'v' para continuar...v
Digite a palavra secreta: abacaxi

	Voce possui 6 chances
------
Digite uma letra: a

	Voce possui 5 chances
a-a-a--

Digite uma letra: x

	Voce possui 4 chances
a-a-a--

Digite uma letra: b

	Voce possui 3 chances
ba-a-a-

Digite uma letra: c

	Voce possui 2 chances
bac-a-a

Digite uma letra: i

PARABENS VOCE ACERTOU A PALAVRA. VOCE VENCEU A PARTIDA!!!

A palavra era: abacaxi
```

## Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para abrir uma issue ou enviar um pull request.

## Licença

Este projeto está licenciado sob a [Licença MIT](LICENSE).
