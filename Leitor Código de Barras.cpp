#include <iostream>                   // |
#include <locale>                     // |-----_
#include <cmath>                      // |     _|== Incluir Bicliotecas.
#include <stdlib.h>                   // |-----

using namespace std;

int main()
{

    setlocale(LC_ALL,"portuguese");                                // Biblioteca português.



    long long int codigo;                                          // Variável que receberá o código de barras.

    long long int N0,N1,N2,N3,N4,N5,N6,N7,N8,N9,N10,N11,N12;       // Variáveis que irá armazenar o resultado da divisão por dez.

    long long int D0,D1,D2,D3,D4,D5,D6,D7,D8,D9,D10,D11,D12;       // Variáveis que irá armazenar o resto da divisão por dez.

    long long int R1,R2,R3,R4,R5,R6,R7,R8,R9,R10,R11,R12;          // Variáveis que irá armazenar o resultado da multiplicação por três ou por um.

    long long int SOMA_RESULTADO , CALCULO_RESULTADO;              // Variáveis que irá armazear o resultado dos cálculos feitos para achar o verificar correto.

    char escolha;


    cout << "_______________________________   ____      __        __      _____________________________\n";           // |
    cout << "                               | |  __|  __|  |__  __|  |__  |                             |";            // |-----_
    cout << "\n VERIFICADOR CÓDIGOS DE BARRAS | | |__  |__    __||__    __| |  ALGORITMOS E PROGRAMAÇÃO   |\n";        // |     _|== Início do programa.
    cout << "_______________________________| |____|    |__|      |__|    |_____________________________|\n";          // |-----
    cout << "\nDeseja verificar um código? S/N : ";                                                                    // |
    cin >> escolha;

    while(escolha == 's' || escolha == 'S')         // Comando de repetição para retornar a execução após verificar o código de barras.
    {

        cout << "\nDigite o código de barras : ";   // Solicita o código de barras ao usuário.
        cin >> codigo;


        //-----------------------------------------------------------------------------------------------------------------------------------------------------------------

        // Código que irá dividir e armazenar os números separadamente.

            if( (codigo >= 1000000000000) && (codigo < 10000000000000))   // Condição para verificar se o código de barras digitado contém treze dígitos;
            {


                N0 = codigo / 10;   // Variável armazenando o resultado inteiro da divisão.
                D0 = codigo % 10;   // Variável armazenando o resultado inteiro do resto da divisão.

                N1 = N0 / 10;
                D1 = N0 % 10;

                N2 = N1 / 10;
                D2 = N1 % 10;

                N3 = N2 / 10;
                D3 = N2 % 10;

                N4 = N3 / 10;
                D4 = N3 % 10;

                N5 = N4 / 10;
                D5 = N4 % 10;

                N6 = N5 / 10;
                D6 = N5 % 10;

                N7 = N6 / 10;
                D7 = N6 % 10;

                N8 = N7 / 10;
                D8 = N7 % 10;

                N9 = N8 / 10;
                D9 = N8 % 10;

                N10 = N9 / 10;
                D10 = N9 % 10;

                N11 = N10 / 10;
                D11 = N10 % 10;

                D12 = N11 % 10;

        //-----------------------------------------------------------------------------------------------------------------------------------------------------------------

        // Código que irá multiplicar os dígitos ímpares por 3 e os dígitos pares por 1.

                ///........///......///

                R1 = D1 * 3;                // Variável armazenando o resultado da multiplicação por 3.

                ///........///......///

                R2 = D2 * 1;                // Variável armazenando o resultado da multiplicação por 1.

                ///........///......///

                R3 = D3 * 3;

                ///........///......///

                R4 = D4 * 1;

                ///........///......///

                R5 = D5 * 3;

                ///........///......///

                R6 = D6 * 1;

                ///........///......///

                R7 = D7 * 3;

                ///........///......///

                R8 = D8 * 1;

                ///........///......///

                R9 = D9 * 3;

                ///........///......///

                R10 = D10 * 1;

                ///........///......///

                R11 = D11 * 3;

                ///........///......///

                R12 = D12 * 1;

                ///........///......///

        //-----------------------------------------------------------------------------------------------------------------------------------------------------------------

        // Código que irá fazer o cálculo para verificar o digito.


                SOMA_RESULTADO = R12+R11+R10+R9+R8+R7+R6+R5+R4+R3+R2+R1;                      // Soma todas as variáveis com os resultados da multiplicação.

                CALCULO_RESULTADO = (( (SOMA_RESULTADO / 10) + 1 ) * 10) - SOMA_RESULTADO;    // Faz a divisão, soma, multiplicação e subtração para obter o digito verificador.

                if(CALCULO_RESULTADO % 10 == 0)
                {
                    CALCULO_RESULTADO = 0;                                                    // Substituir o valor do verificador por 0 caso ele seja multiplo de 10.
                }

        //-----------------------------------------------------------------------------------------------------------------------------------------------------------------

        // Código que irá informar se o digito verificador está correto ou incorreto.


                if(CALCULO_RESULTADO == D0)      // Condição para saber se o resultado do digito é igual ao último digito do código de barras.
                {

                    cout << "\nSEU DIGITO VERIFICAR É : " << CALCULO_RESULTADO << " ==> CÓDIGO DE BARRAS CORRETO \n";

                }
                else
                {
                    cout << "\nDIGITO VERIFICADOR INCONSISTENTE *_*\n";
                }



            }

            else
            {
                cout << "\nDIGITE UM CÓDIGO DE BARRAS VÁLIDO\n";
            }


            cout << "\n\n\n\n\n\n";
            cout << "\n.......... AUTOR ..........\n";
            cout << " Luiz Antonio Farias Santos\n";

            cout << "\n\nDeseja verificar outro código de barras? S/N : ";  // Pergunta ao usuário se deseja utilizar o programa novamente.
            cin >> escolha;

            system("cls");        // Limpa as informações apresentadas anteriormente na tela do programa.


        }

        if (escolha == 'n' || escolha == 'N' )                         //
        {                                                              //______
            cout << "\n\nOBRIGADO POR USAR NOSSO PROGRAMA\n\n";        //      |____
            cout << "\n.......... AUTOR ..........\n";               //           | Resposta para o usuário que não quer usar
            cout << " Luiz Antonio Farias Santos\n";                   //       ____| ou continuar usando o programa.
                                                       //

        }


    return 0;

}


