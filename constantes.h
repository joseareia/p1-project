#ifndef CONSTANTES_H_INCLUDED
#define CONSTANTES_H_INCLUDED

#define MAX_STRING 100
#define MAX_UC 40
#define MAX_UC_CODIGO 20

typedef struct{
    int dia, mes, ano;
}tipoData;

typedef struct{
    int hora, minuto, segundo;
}tipoHora;

//Declaração do Tipo de Aula
typedef struct{
    int quantAulas;
    int duracao; //em minutos
}tipoAula;

//Declaração das UC's
typedef struct{
    char codigo[MAX_UC_CODIGO];
    char designacao[MAX_STRING];
    char tipoUC[3];
    int semestre;
    char regime[3];
    tipoAula aulasT;
    tipoAula aulasTP;
    tipoAula aulasPL;
}tipoUC;

//Declaração das Aulas Online
typedef struct{
    char designacao[MAX_STRING];
    char codigoUC[MAX_UC_CODIGO];
    char tipo[3];
    char nomeDocente[MAX_STRING];
    tipoData data;
    tipoHora horaInicio;
    tipoHora horaFim;
    char estado[3];
    char gravacao[2];
}tipoAulasOnline;

//Declaração dos Acessos
typedef struct{
    int numEstudante;
    char desigacaoAula[MAX_STRING];
    char tipoAcesso[4];
}tipoAcesso;

#endif // CONSTANTES_H_INCLUDED
