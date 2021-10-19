#ifndef CONTROLADORASAPRESENTACAO_H_INCLUDED
#define CONTROLADORASAPRESENTACAO_H_INCLUDED

#include <string.h>
#include "curses.h"
#include "dominios.h"
#include "entidade.h"
#include "interface.h"


//--------------------------------------------------------------------------------------------
// Declara��es de classes controladoras e implementa��es de m�todos.

class CntrApresentacaoControle{
    private:
        Email email;
        IApresentacaoAutenticacao *cntrApresentacaoAutenticacao;
        IApresentacaoPessoal *cntrApresentacaoPessoal;
        IApresentacaoProdutosSessao *CntrApresentacaoProdutosSessao;
    public:
        void executar();
        void setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao*);
        void setCntrApresentacaoPessoal(IApresentacaoPessoal*);
        void setCntrApresentacaoProdutosSessao(IApresentacaoProdutosSessao*);
};

inline void CntrApresentacaoControle::setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao *cntr){
    cntrApresentacaoAutenticacao = cntr;
}

inline void CntrApresentacaoControle::setCntrApresentacaoPessoal(IApresentacaoPessoal *cntr){
            cntrApresentacaoPessoal = cntr;
}

inline void CntrApresentacaoControle::setCntrApresentacaoProdutosSessao(IApresentacaoProdutosSessao *cntr){
    CntrApresentacaoProdutosSessao = cntr;
}

//--------------------------------------------------------------------------------------------

class CntrApresentacaoAutenticacao:public IApresentacaoAutenticacao{
    private:
        IServicoAutenticacao *cntr;
    public:
        bool autenticar(Email*);
        void setCntrServicoAutenticacao(IServicoAutenticacao*);
};

inline void CntrApresentacaoAutenticacao::setCntrServicoAutenticacao(IServicoAutenticacao *cntr){
    this->cntr = cntr;
}

//--------------------------------------------------------------------------------------------

class CntrApresentacaoPessoal:public IApresentacaoPessoal{
    private:
        IServicoPessoal *cntrServicoPessoal;
        IServicoProdutosSessao *cntrServicoProdutosSessao;
        void consultarDadosPessoais();
    public:
        void executar(Email);
        void cadastrar();
        void setCntrServicoPessoal(IServicoPessoal*);
        void setCntrServicoProdutosSessao(IServicoProdutosSessao*);
};

inline void CntrApresentacaoPessoal::setCntrServicoPessoal(IServicoPessoal *cntr){
    cntrServicoPessoal = cntr;
}

inline void CntrApresentacaoPessoal::setCntrServicoProdutosSessao(IServicoProdutosSessao *cntr){
    cntrServicoProdutosSessao = cntr;
}

//--------------------------------------------------------------------------------------------

class CntrApresentacaoProdutosSessao:public IApresentacaoProdutosSessao{
    private:
        IServicoProdutosSessao *cntr;
        void consultarSessao();
        void cadastrarSessao();
        void descadastrarSessao();
        void consultarSessao();
        void realizarSessao();
        void listarSessao();
    public:
        void executar();
        void executar(Email);
        void setCntrServicoProdutosSessao(IServicoProdutosSessao*);
};

inline void CntrApresentacaoProdutosSessao::setCntrServicoProdutosSessao(IServicoProdutosSessao *cntr){
    this->cntr = cntr;
}


#endif // CONTROLADORASAPRESENTACAO_H_INCLUDED
