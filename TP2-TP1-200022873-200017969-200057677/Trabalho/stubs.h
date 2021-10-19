#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include <string>
#include "dominios.h"
#include "interfaces.h"

using namespace std;

//--------------------------------------------------------------------------------------------
// Classe stub do servi�o autentica��o.

class StubServicoAutenticacao:public IServicoAutenticacao {
    private:
        static const string INVALIDO;
    public:
        bool autenticar(Email, Senha);
};

//--------------------------------------------------------------------------------------------
// Classe stub do servi�o pessoal.

class StubServicoPessoal:public IServicoPessoal {
    private:
        static const string INVALIDO;
    public:
        bool cadastrarUsuario(Participante);
};

//--------------------------------------------------------------------------------------------
// Classe stub do servi�o produtos financeiros.

class StubServicoSessao:public IServicoSessao {
    private:
        static const string INVALIDO;
    public:
        bool cadastrarSessao(codigo);
        bool consultarSessao(codigo*);
        bool cadastrarProdutoInvestimento(Participante);
        bool descadastrarSessao(codigo);
        bool realizarSessao(Tipo);
        bool recuperarSessao(Tipo*);                        // Adaptar assinatura.
};

#endif // STUBS_H_INCLUDED
