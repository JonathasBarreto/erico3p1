#include <stdio.h>
#include <unistd.h>
#include <windows.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h> 
#include <string.h>

#define MAX_LINE 80 /*comando de tamanho maximo */

int execvp(char *command, char *params[]); 

int main(int argc, char *argv[])
{
    char *args[MAX_LINE/2 + 1]; /* argumentos de linha de comando */
    int should_run = 1; /* flag para determinar quando encerrar o programa */
    pid_t pid;
    
    scanf("%s", str);
    char * pch;
 
    pch = strtok (str," "); //vai separar a string por espaço
    pid = fork(); /*(1) Criar um processo filho usando fork() */

    args[0] = "ps"
    args[1] = "-ael"
    args[2] = " NULL"

    while (should_run)
    {
        printf("osh>");
        fflush(stdout); /*A implementação poderia optar por bloquear a entrada antes de 
        liberar o buffer da stdout. Nesse caso, o usuário veria uma tela em branco e não 
        saberia o que fazer. Eu não vi isso acontecer em sistemas Windows, mas eu vi isso 
        no Unix, então não é uma questão teórica. Forçar um flush garante que o prompt 
        fique visível antes de bloquear a entrada */

        if (pid < 0)
        {
            fprintf("stderr", "Kork Failed");
            return 1;
        }
        else if (pid == 0)/* ()O processo-filho invocará execpv()*/
        {
            execvp(argv[0], &argv);
            fprintf(stderr, "Can't execute\n", argv[1]);

        }
        else
        {
            wait(NULL);
            printf("child complete");
        }

    }

return 0;
}

//links de referencia 
/*
https://web.fe.up.pt/~pfs/aulas/old/so2001/ap/cap3.pdf
https://www.geeksforgeeks.org/wait-system-call-c/
https://www.programacaoprogressiva.net/2014/09/A-Chamada-de-Sistema-fork-Como-Criar-e-Gerenciar-Processos.html

 */
