/** UnB - Universidade de Bras�lia
 *  CIC - Departamento de Ci�ncias da Computa��o
 *  Alunos: Igor Silva de Oliveira Cardoso (160125073)
 */

#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"


class TesteDominios {
    private:
        Codigo *codigo;
        Data *data;
        Nome *nome;
        Email *email;
        Senha *senha;
        Telefone *telefone;

        int estado_TesteDominios;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
    public:
        int run();

        const static int SUCESSO = 0;
        const static int FALHA = -1;

};


class TesteEntidades {
    private:
        Participante *participante;

        int estado_TesteEntidades;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;

        int run();
};


#endif // TESTES_H_INCLUDED
