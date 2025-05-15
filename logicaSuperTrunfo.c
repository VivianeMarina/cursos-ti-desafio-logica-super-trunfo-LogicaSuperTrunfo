#include <stdio.h>

// Jogo Super Trunfo - Nível Mestre - Tema: 2

int main () {

    char estado1 = 'A';
    char estado2 = 'B';
    char codigo1 [5] = "A01";
    char codigo2 [5] = "B02";
    char nomeCidade1 [50] = "Recife";
    char nomeCidade2 [50] = "Curitiba";
    unsigned long int populacao1 = 1537704;
    unsigned long int populacao2 = 1751907;
    float area1 = 555.0;
    float area2 = 435.0;
    float PIB1 = 123000000000;
    float PIB2 = 193000000000;
    int pontosTuristicos1 = 55;
    int pontosTuristicos2 = 40;
    float densidade1, densidade2;
    float PIB_percapta1, PIB_percapta2;
    float SuperPoder1, SuperPoder2;
    int ESCOLHAJOGADOR, ESCOLHAJOGADOR2;
    float resultado1, resultado2;

    printf ("Nesse jogo teremos 2 cartas disponíveis. Escolhe uma! Escolheu? Então vamos começar!\n");

    printf ("\n");
    printf ("Carta 1:\n");
    printf ("Estado: %c\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Nome da cidade: %s\n", nomeCidade1);
    printf ("População: %lu\n", populacao1);
    printf ("Área: %f km2 \n", area1);
    printf ("PIB: %.2f bilhões de reais \n", PIB1);
    printf ("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    
    // Para que não haja perda de dados, utilizar a conversão explícita
    densidade1 = (float) populacao1 / area1;
    printf ("Densidade Populacional: %.2f habitantes/km2\n", densidade1);

    // Para que não haja perda de dados, utilizar a conversão explícita 
    PIB_percapta1 = (float) PIB1 / populacao1;
    printf ("PIB per Capta: %.2f reais\n", PIB_percapta1);

    // Super Poder ( preciso colocar a conversao explicita? )
    SuperPoder1 = (float) populacao1 + area1 + PIB1 + pontosTuristicos1 + PIB_percapta1 + (1 / densidade1);
    printf ("Super Poder: %.2f\n", SuperPoder1);
    

    printf ("\n");

    printf ("Carta 2:\n");
    printf ("Estado: %c\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Nome da cidade: %s\n", nomeCidade2);
    printf ("População: %lu\n", populacao2);
    printf ("Área: %f km2 \n", area2);
    printf ("PIB: %.2f bilhões de reais \n", PIB2);
    printf ("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    // Para que não haja perda de dados, utilizar a conversão explícita
    densidade2 = (float) populacao2 / area2;
    printf ("Densidade Populacional: %.2f habitantes/km2\n", densidade2);

    // Para que não haja perda de dados, utilizar a conversão explícita
    PIB_percapta2 = (float) PIB2 / populacao2;
    printf ("PIB per Capta: %.2f reais\n", PIB_percapta2);

    //Super Poder ( preciso colocar a conversao explicita? )
    SuperPoder2 = (float) populacao2 + area2 + PIB2 + pontosTuristicos2 + PIB_percapta2 + (1 / densidade2);
    printf ("Super Poder: %.2f\n", SuperPoder2);


    printf ("\n");


    // Damos 5 atributos para o jogador escolher

    printf ("Jogador, você precisa escolher um número de 1 a 5 para ser seu atributo de comparação no jogo\n");
    printf ("Número 1 - População\n");
    printf ("Número 2 - Área\n");
    printf ("Número 3 - PIB\n");
    printf ("Número 4 - Pontos Turísticos\n");
    printf ("Número 5 - Densidade\n");

    // Escolha do jogador
    scanf ("%d", &ESCOLHAJOGADOR);

    // Especificando qual atributo o jogador escolheu
    switch (ESCOLHAJOGADOR)
    {
    case 1:
        printf ("Você escolheu o atributo População\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        printf ("Você escolheu o atributo Área\n");
        resultado1 = area1 > area2 ? 1 : 0;
        break;
    case 3:
        printf ("Você escolheu o atributo PIB\n");
        resultado1 = PIB1 > PIB2 ? 1 : 0;
        break;
    case 4:
        printf ("Você escolheu o atributo Pontos Turísticos\n");
        resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
        break;
    case 5:
        printf ("Você escolheu o atributo Densidade\n");
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;
    default:
        printf ("Opção inválida\n");
        break;
    }

    // Agora vamos para a entrada do segundo atributo

    printf ("Jogador, agora você só tem 4 opções. Escolha o número do seu atributo de comparação. Lembre-se que não pode repetir o mesmo número do atributo anterior.\n");
    printf ("Número 1 - População\n");
    printf ("Número 2 - Área\n");
    printf ("Número 3 - PIB\n");
    printf ("Número 4 - Pontos Turísticos\n");
    printf ("Número 5 - Densidade\n");

    // Escolha do jogador
    scanf ("%d", &ESCOLHAJOGADOR2);

    // Agora vamos para o segundo atributo escolhido
    if (ESCOLHAJOGADOR2 == ESCOLHAJOGADOR) {
        printf ("Você não pode escolher o mesmo atributo\n");
    } else {
        switch (ESCOLHAJOGADOR2)
        {
        case 1:
            printf ("Você escolheu o atributo População\n");
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            printf ("Você escolheu o atributo Área\n");
            resultado2 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            printf ("Você escolheu o atributo PIB\n");
            resultado2 = PIB1 > PIB2 ? 1 : 0;
            break;
        case 4:
            printf ("Você escolheu o atributo Pontos Turísticos\n");
            resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
            break;
        case 5:
            printf ("Você escolheu o atributo Densidade\n");
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            break;
        default:
            printf ("Opção inválida\n");
            break;
        }

// Aqui eu preciso imprimir os dois atributos escolhidos da primeira carta e o valor de cada um deles. 
printf ("\n");

if (ESCOLHAJOGADOR == 1) {
    printf ("Primeiro atributo: POPULAÇÃO\n");
    printf ("Carta 1 = POPULAÇÃO = %lu \n", populacao1);
} else if (ESCOLHAJOGADOR == 2) {
    printf ("Primeiro atributo: AREA\n");
    printf ("Carta 1 =  ÁREA = %.2f \n", area1);
} else if (ESCOLHAJOGADOR == 3) {
    printf ("Primeiro atributo: PIB\n"); 
    printf ("Carta 1 = PIB =  %.2f \n", PIB1);
} else if (ESCOLHAJOGADOR == 4) {
    printf ("Primeiro atributo: PONTOS TURÍSTICOS\n");
    printf ("Carta 1 = PONTOS TURÍSTICOS = %d \n", pontosTuristicos1);
} else if (ESCOLHAJOGADOR == 5) {
    printf ("Primeiro atributo: DENSIDADE\n");
    printf ("Carta 1 = DENSIDADE = %.2f \n", densidade1);
}


if (ESCOLHAJOGADOR == 1) {
    printf ("Carta 2 = POPULAÇÃO = %lu \n", populacao2);
} else if (ESCOLHAJOGADOR == 2) {
    printf ("Carta 2 = ÁREA =  %.2f \n", area2);
} else if (ESCOLHAJOGADOR == 3) {
    printf ("Carta 2 = PIB = %.2f\n", PIB2);
} else if (ESCOLHAJOGADOR == 4) {
    printf ("Carta 2 = PONTOS TURÍSTICOS = %d\n", pontosTuristicos2);
} else if (ESCOLHAJOGADOR == 5) {
    printf ("Carta 2 = DENSIDADE = %.2f\n", densidade2);
}

printf ("\n");


if (ESCOLHAJOGADOR2 == 1) {
    printf ("Segundo atributo: POPULAÇÃO \n");
} else if (ESCOLHAJOGADOR2 == 2) {
    printf ("Segundo atributo: AREA\n");
} else if (ESCOLHAJOGADOR2 == 3) {
    printf ("Segundo atributo: PIB \n");
} else if (ESCOLHAJOGADOR2 == 4) {
    printf ("Segundo atributo: PONTOS TURÍSTICOS \n");
} else if (ESCOLHAJOGADOR2 == 5) {
    printf ("Segundo atributo: DENSIDADE \n");
}


if (ESCOLHAJOGADOR2 == 1) {
    printf ("Carta 1: POPULAÇÃO = %lu\n", populacao1);
} else if (ESCOLHAJOGADOR2 == 2) {
    printf ("Carta 1: AREA = %.2f\n", area1);
} else if (ESCOLHAJOGADOR2 == 3) {
    printf ("Carta 1: PIB = %.2f\n", PIB1);
} else if (ESCOLHAJOGADOR2 == 4) {
    printf ("Carta 1: PONTOS TURÍSTICOS = %d\n", pontosTuristicos1);
} else if (ESCOLHAJOGADOR2 == 5) {
    printf ("Carta 1: DENSIDADE = %.2f\n", densidade1);
}

// Mostrando resultados da Carta 2



if (ESCOLHAJOGADOR2 == 1) {
    printf ("Carta 2: POPULAÇÃO = %lu\n", populacao2);
} else if (ESCOLHAJOGADOR2 == 2) {
    printf ("Carta 2:AREA = %.2f\n", area2);
} else if (ESCOLHAJOGADOR2 == 3) {
    printf ("Carta 2: PIB = %.2f\n", PIB2);
} else if (ESCOLHAJOGADOR2 == 4) {
    printf ("Carta 2: PONTOS TURÍSTICOS = %d\n", pontosTuristicos2);
} else if (ESCOLHAJOGADOR2 == 5) {
    printf ("Carta 2: DENSIDADE = %.2f\n", densidade2);
}

}

printf ("\n\n\n");
// feito dia 15/05
switch (ESCOLHAJOGADOR) {
case 1:
    if (populacao1 > populacao2) {
        printf ("Atributo 1: Carta 1 venceu\n");
    } else {
        printf ("Atributo 1: Carta 2 venceu\n");
    }
    break;
case 2:
    if (area1 > area2) {
        printf ("Atributo 1: Carta 1 venceu\n");
    } else {
        printf ("Atributo 1: Carta 2 venceu\n");
    }
    break;
case 3:
    if (PIB1 > PIB2) {
        printf ("Atributo 1: Carta 1 venceu\n");
    } else {
        printf ("Atributo 1: Carta 2 venceu\n");
    }
    break;
case 4:
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf ("Atributo 1: Carta 1 venceu\n");
    } else {
        printf ("Atributo 1: Carta 2 venceu\n");
    }
    break;
case 5:
    if (densidade1 < densidade2) {
        printf ("Atributo 1: Carta 1 venceu\n");
    } else {
        printf ("Atributo 1: Carta 2 venceu\n");
    }
    break;
}


switch (ESCOLHAJOGADOR2) {
case 1:
    if (populacao1 > populacao2) {
        printf ("Atributo 2: Carta 1 venceu\n");
    } else {
        printf ("Atributo 2: Carta 2 venceu");
    }
    break;
case 2:
    if (area1 > area2) {
        printf ("Atributo 2: Carta 1 venceu\n");
    } else {
        printf ("Atributo 2: Carta 2 venceu\n");
    }
    break;
case 3:
    if (PIB1 > PIB2) {
        printf ("Atributo 1: Carta 1 venceu\n");
    } else {
        printf ("Atributo 1: Carta 2 venceu\n");
    }
    break;
case 4:
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf ("Atributo 1: Carta 1 venceu\n");
    } else {
        printf ("Atributo 1: Carta 2 venceu\n");
    }
    break;
case 5:
    if (densidade1 < densidade2) {
        printf ("Atributo 1: Carta 1 venceu\n");
    } else {
        printf ("Atributo 1: Carta 2 venceu\n");
    }
    break;
}

printf ("\n\n");
printf ("Lembre-se:\n");
printf ("Se carta 1 ganhar nos dois atributos: CARTA 1 VENCE O JOGO\n");
printf ("Se carta 2 ganhar nos dois atributos: CARTA 2 VENCE O JOGO\n");
printf ("Se cada carta ganhar em apenas um atributo: EMPATE\n");


}
