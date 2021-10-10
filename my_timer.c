/*===================================================================================
                            Sleep Timer for Windows
                                                             b y   D o n   R a m o s
===================================================================================*/

#include <stdlib.h>
#include <stdio.h>

void header()
{
    puts("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    puts("===================================================================================");
    puts("                            Sleep Timer for Windows");
    puts("                                                            b y   D o n   R a m o s");
    puts("===================================================================================");
    puts("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
}

int houertosec(int hower)
{
    return hower * 3600;
}

int mintosec(int minute)
{
    return minute * 60;
}

void winoff(int time)
{
    char comand[50];
    sprintf(comand, "cmd /c shutdown -s -f -t%d", time);
    system(comand);
}

void clear()
{
    system("cmd /c cls");
}

void cancel()
{
    system("cmd /c shutdown -a");
}