#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
// Adequar as declara��es das interfaces de acordo com as necessidades.
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------

// Forward declarations.

class IServicoAutenticacao;
class IServicoPessoal;
class IServicoProdutosSessao;

//--------------------------------------------------------------------------------------------
// Declara��es das interfaces da camada de apresenta��o.

class IApresentacaoAutenticacao {
    public:
        virtual bool autenticar(Email*) = 0;
        virtual void setCntrServicoAutenticacao(IServicoAutenticacao*) = 0;
        virtual ~IApresentacaoAutenticacao(){}
};

class IApresentacaoPessoal{
    public:
        virtual void executar(Email) = 0;
        virtual void cadastrar() = 0;
        virtual void setCntrServicoPessoal(IServicoPessoal*) = 0;
        virtual void setCntrServicoSessao(IServicoProdutosSessao*) = 0;
        virtual ~IApresentacaoPessoal(){}
};

class IApresentacaoProdutosSessao{
    public:
        virtual void executar() = 0;
        virtual void executar(Email) = 0;
        virtual void setCntrServicoSessao(IServicoProdutosSessao*) = 0;
        virtual ~IApresentacaoProdutosSessao(){}
};

//--------------------------------------------------------------------------------------------
// Declara��es das interfaces da camada de servi�o.

class IServicoAutenticacao {
    public:
        virtual bool autenticar(Email, Senha) = 0;
        virtual ~IServicoAutenticacao(){}
};

class IServicoPessoal{
public:
        virtual bool cadastrarUsuario(Participante) = 0;
        virtual ~IServicoPessoal(){}
};

class IServicoProdutosSessao{
public:
        virtual bool cadastrarSessao(Codigo) = 0;
        virtual bool consultarSessao(Codigo*) = 0;
        virtual bool cadastrarParticipante(Participante) = 0;
        virtual bool descadastrarParticipante(Codigo) = 0;
        virtual bool realizarAplicacao(Codigo) = 0;
        virtual bool descadastrarSessao(Codigo*) = 0;                        // Adaptar aos requisitos.
        virtual ~IServicoProdutosSessao(){}
};

#endif // INTERFACES_H_INCLUDED
