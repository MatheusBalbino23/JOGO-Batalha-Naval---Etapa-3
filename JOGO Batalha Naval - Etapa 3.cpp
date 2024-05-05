#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inicializaTabuleiro(int tabuleiro[4][8]){
	
    int linha, coluna;
    
    for(linha=0 ; linha <= 3 ; linha++){
        for(coluna=0 ; coluna <= 7 ; coluna++){
            tabuleiro[linha][coluna]=-1;
        }
    }
}

void mostraTabuleiro(int tabuleiro[4][8]){

    int linha, coluna;
	
	printf("\t1 \t2 \t3 \t4 \t5 \t6 \t7 \t8");
    printf("\n");

    for(linha=0 ; linha <= 3 ; linha++){
        printf("%d",linha+1);
        for(coluna=0 ; coluna <= 7 ; coluna++){
            if(tabuleiro[linha][coluna]==-1){
                printf("\t0");
           	}else if(tabuleiro[linha][coluna]==0){
                printf("\t*");
            }else if(tabuleiro[linha][coluna]==1){
                printf("\tX");
            }
        }
        printf("\n");
    }
}

void iniciaNavios(int navios[][2]){
	
    int navio, anterior;

    for(navio=0 ; navio < 3 ; navio++){
        navios[navio][0]= rand()%4;
        navios[navio][1]= rand()%8;
        for(anterior=0 ; anterior < navio ; anterior++){
            if( (navios[navio][0] == navios[anterior][0])&&(navios[navio][1] == navios[anterior][1])){
                do{
                    navios[navio][0]= rand()%4;
                    navios[navio][1]= rand()%8;
                }while((navios[navio][0] == navios[anterior][0])&&(navios[navio][1] == navios[anterior][1]));
            }
		}
    }
}

void darTiro(int tiro[2]){
	
    printf("Linha: ");
    scanf("%d",&tiro[0]);
    tiro[0]--;
    
	printf("Coluna: ");
    scanf("%d",&tiro[1]);
    tiro[1]--;
    
    system("cls");
}

int acertou(int tiro[2], int navios[][2]){
	
    int navio;

    for(navio=0 ; navio < 3 ; navio++){
        if( tiro[0]==navios[navio][0] && tiro[1]==navios[navio][1]){
            printf("Voce acertou o tiro (%d,%d)\n",tiro[0]+1,tiro[1]+1);
            return 1;
        }
    }
    
    return 0;
}



void alteraTabuleiro(int tiro[2], int navios[][2], int tabuleiro[4][8]){
    
	if(acertou(tiro,navios)){
        tabuleiro[tiro[0]][tiro[1]]=1;
    }
	else{
        tabuleiro[tiro[0]][tiro[1]]=0;
	}
}


int main(){
	
	int tabuleiro[4][8];
    int navios[3][2];
    int tiro[2];
    int tentativas=0;
    int acertos=0;

    inicializaTabuleiro(tabuleiro);
    iniciaNavios(navios);

    printf("\n");

    do{
        mostraTabuleiro(tabuleiro);
        darTiro(tiro);
        tentativas++;

        if(acertou(tiro,navios)){
            acertos++;
        }
        alteraTabuleiro(tiro,navios,tabuleiro);
        
    }while(acertos!=3);

    printf("\n\n\nJogo terminado. Voce acertou os 3 navios em %d tentativas", tentativas);
    mostraTabuleiro(tabuleiro);

	return 0;
}


