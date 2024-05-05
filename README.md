# Batalha Naval em C

Este é um jogo simples de Batalha Naval implementado em C. O objetivo do jogo é encontrar e afundar todos os navios inimigos em um tabuleiro 4x8.

## Como Jogar

1. **Compile o código-fonte:** Utilize um compilador C, como o GCC, para compilar o código-fonte:
   
   ```bash
   gcc batalha_naval.c -o batalha_naval
   ```

2. **Execute o jogo:** Após compilar, execute o jogo:

   ```bash
   ./batalha_naval
   ```

3. **Jogue:** Siga as instruções exibidas no console para dar tiros e tentar acertar os navios inimigos.

## Funcionalidades

- O jogo apresenta um tabuleiro 4x8 onde o jogador pode tentar encontrar e afundar todos os navios inimigos.
- Existem três navios inimigos aleatoriamente posicionados no tabuleiro a cada execução.
- O jogador pode dar tiros no tabuleiro digitando as coordenadas da linha e da coluna.
- O jogo mostra o número de tentativas necessárias para afundar todos os navios.

## Exemplo de Uso

Ao executar o jogo, você verá um tabuleiro semelhante ao seguinte:

```
    1    2    3    4    5    6    7    8
1   *    0    0    *    *    0    0    0
2   0    0    0    0    0    0    0    0
3   0    *    0    0    0    0    0    0
4   0    0    0    0    0    0    0    *
```

Você então será solicitado a dar tiros no tabuleiro digitando as coordenadas da linha e da coluna. O jogo continuará até que todos os navios inimigos sejam afundados.

## Contribuindo

Contribuições são bem-vindas! Sinta-se à vontade para abrir problemas relatando bugs ou enviando pull requests com melhorias.

## Licença

Este projeto está licenciado sob a Licença MIT. Consulte o arquivo [LICENSE](LICENSE) para obter mais detalhes.

