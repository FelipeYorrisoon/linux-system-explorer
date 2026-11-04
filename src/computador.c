#include <stdio.h>
#include <sys/utsname.h>

struct Computador {
    char sistema[65];
    char maquina[65];
    char versao[65];
};

#include <stdio.h>
#include <sys/utsname.h>

int main(void)
{
    struct utsname info;

    printf("Endereco de info: %p\n", (void *)&info);

    int resultado = uname(&info);

    if (resultado == 0) {
      printf("Consulta realizada com sucesso\n");

      printf("Sistema: %s\n", info.sysname);
      printf("Maquina: %s\n", info.nodename);
      printf("Versao: %s\n", info.release);


    } else {
    printf("Erro ao consultar o sistema\n");
 }


    return 0;
}