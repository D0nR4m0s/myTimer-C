/*===================================================================================
                            Sleep Timer for Windows
                                                             b y   D o n   R a m o s
===================================================================================*/

#ifndef MY_TIMER_H
#define MY_TIMER_H

//Menu de funções do programa
enum menu 
{
    WINDOWS = 119, UBUNTU = 117, HOUER = 104, MINUTE = 109,
    SECOND = 115, CANCEL = 99, EXIT = 120
};

//Cabeçalho do do programa
void header();

//Converte horas em segundos
int houertosec(int);

//Converte minutos em segundos
int mintosec(int);

//Desligar sistema Windows
void winoff(int);

//Desligar sistema Ubuntu
//void ubuoff(int);

//Limpa a tela do terminal
void clear();

//Cancela o timer de desligamento
void cancel();

#endif