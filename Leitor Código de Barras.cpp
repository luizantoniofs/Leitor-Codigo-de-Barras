#include <iostream>                   // |
#include <locale>                     // |-----_
#include <cmath>                      // |     _|== Incluir Bicliotecas.
#include <stdlib.h>                   // |-----

using namespace std;

int main()
{

    setlocale(LC_ALL,"portuguese");                                // Biblioteca portugu�s.



    long long int codigo;                                          // Vari�vel que receber� o c�digo de barras.

    long long int N0,N1,N2,N3,N4,N5,N6,N7,N8,N9,N10,N11,N12;       // Vari�veis que ir� armazenar o resultado da divis�o por dez.

    long long int D0,D1,D2,D3,D4,D5,D6,D7,D8,D9,D10,D11,D12;       // Vari�veis que ir� armazenar o resto da divis�o por dez.

    long long int R1,R2,R3,R4,R5,R6,R7,R8,R9,R10,R11,R12;          // Vari�veis que ir� armazenar o resultado da multiplica��o por tr�s ou por um.

    long long int SOMA_RESULTADO , CALCULO_RESULTADO;              // Vari�veis que ir� armazear o resultado dos c�lculos feitos para achar o verificar correto.

    char escolha;


    cout << "_______________________________   ____      __        __      _____________________________\n";           // |
    cout << "                               | |  __|  __|  |__  __|  |__  |                             |";            // |-----_
    cout << "\n VERIFICADOR C�DIGOS DE BARRAS | | |__  |__    __||__    __| |  ALGORITMOS E PROGRAMA��O   |\n";        // |     _|== In�cio do programa.
    cout << "_______________________________| |____|    |__|      |__|    |_____________________________|\n";          // |-----
    cout << "\nDeseja verificar um c�digo? S/N : ";                                                                    // |
    cin >> escolha;

    while(escolha == 's' || escolha == 'S')         // Comando de repeti��o para retornar a execu��o ap�s verificar o c�digo de barras.
    {

        cout << "\nDigite o c�digo de barras : ";   // Solicita o c�digo de barras ao usu�rio.
        cin >> codigo;


        //-----------------------------------------------------------------------------------------------------------------------------------------------------------------

        // C�digo que ir� dividir e armazenar os n�meros separadamente.

            if( (codigo >= 1000000000000) && (codigo < 10000000000000))   // Condi��o para verificar se o c�digo de barras digitado cont�m treze d�gitos;
            {


                N0 = codigo / 10;   // Vari�vel armazenando o resultado inteiro da divis�o.
                D0 = codigo % 10;   // Vari�vel armazenando o resultado inteiro do resto da divis�o.

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

        // C�digo que ir� multiplicar os d�gitos �mpares por 3 e os d�gitos pares por 1.

                ///........///......///

                R1 = D1 * 3;                // Vari�vel armazenando o resultado da multiplica��o por 3.

                ///........///......///

                R2 = D2 * 1;                // Vari�vel armazenando o resultado da multiplica��o por 1.

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

        // C�digo que ir� fazer o c�lculo para verificar o digito.


                SOMA_RESULTADO = R12+R11+R10+R9+R8+R7+R6+R5+R4+R3+R2+R1;                      // Soma todas as vari�veis com os resultados da multiplica��o.

                CALCULO_RESULTADO = (( (SOMA_RESULTADO / 10) + 1 ) * 10) - SOMA_RESULTADO;    // Faz a divis�o, soma, multiplica��o e subtra��o para obter o digito verificador.

                if(CALCULO_RESULTADO % 10 == 0)
                {
                    CALCULO_RESULTADO = 0;                                                    // Substituir o valor do verificador por 0 caso ele seja multiplo de 10.
                }

        //-----------------------------------------------------------------------------------------------------------------------------------------------------------------

        // C�digo que ir� informar se o digito verificador est� correto ou incorreto.


                if(CALCULO_RESULTADO == D0)      // Condi��o para saber se o resultado do digito � igual ao �ltimo digito do c�digo de barras.
                {

                    cout << "\nSEU DIGITO VERIFICAR � : " << CALCULO_RESULTADO << " ==> C�DIGO DE BARRAS CORRETO \n";

                }
                else
                {
                    cout << "\nDIGITO VERIFICADOR INCONSISTENTE *_*\n";
                }



            }

            else
            {
                cout << "\nDIGITE UM C�DIGO DE BARRAS V�LIDO\n";
            }


            cout << "\n\n\n\n\n\n";
            cout << "\n.......... AUTOR ..........\n";
            cout << " Luiz Antonio Farias Santos\n";

            cout << "\n\nDeseja verificar outro c�digo de barras? S/N : ";  // Pergunta ao usu�rio se deseja utilizar o programa novamente.
            cin >> escolha;

            system("cls");        // Limpa as informa��es apresentadas anteriormente na tela do programa.


        }

        if (escolha == 'n' || escolha == 'N' )                         //
        {                                                              //______
            cout << "\n\nOBRIGADO POR USAR NOSSO PROGRAMA\n\n";        //      |____
            cout << "\n.......... AUTOR ..........\n";               //           | Resposta para o usu�rio que n�o quer usar
            cout << " Luiz Antonio Farias Santos\n";                   //       ____| ou continuar usando o programa.
                                                       //

        }


    return 0;

}


