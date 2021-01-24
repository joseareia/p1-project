#ifndef FUNCOES_AULASONLINE_H_INCLUDED
#define FUNCOES_AULASONLINE_H_INCLUDED

#include "constantes.h"

tipoAulasOnline *agendaAula(tipoAulasOnline aulasOnline[], int *quantAulas, tipoUC ucs[MAX_UC], int quantUC);
tipoAulasOnline lerDadosAulas();
void listaAulas(tipoAulasOnline aulasOnline[], int quantAulas);
void mostraAulas(tipoAulasOnline aulasOnline);
int procuraAula(char designacao[], tipoAulasOnline aulasOnline[], int quantAulas);
tipoAulasOnline *leFichBinAulasOnline(tipoAulasOnline aulasOnline[], int *quantAulas);
void escreveFichBinAulasOnline(tipoAulasOnline aulasOnline[], int quantAulas);
void editarAula(tipoAulasOnline aulasOnline[], int quantAulas, int quantAulasAgendadas, tipoUC ucs[MAX_UC], int quantUC);
char menuEditarAula(tipoAulasOnline aula);
tipoAulasOnline *eliminaAula(tipoAulasOnline aulasOnline[], int *quantAulas);
void iniciarAula(tipoAulasOnline aulasOnline[], int quantAulas, int *quantAulasDecorrer, int *quantAulasAgendadas);
void finalizarAula(tipoAulasOnline aulasOnline[], int quantAulas, int *quantAulasDecorrer, int *quantAulasRealizadas, int *quantAulasGravadas);

#endif // FUNCOES_AULASONLINE_H_INCLUDED
