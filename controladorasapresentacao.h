#ifndef CONTROLADORASAPRESENTACAO_H_INCLUDED
#define CONTROLADORASAPRESENTACAO_H_INCLUDED

#define CLR_SCR system("cls || clear");

#include <conio.h>
#include <iostream>
#include <string.h>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>

#include "interface.h"
#include "dominios.h"
#include "entidades.h"

using namespace std;


//------------- Classe controladora de apresenta��o controle -------------

class ControladoraApresentacaoControle {
    private:
        Email email;
        // Ponteiros Necessarios para Interface
        InterfaceApresentacaoAutenticacao *contrApresentacaoAutenticacao;
        InterfaceApresentacaoParticipante *contrInterfaceApresentacaoParticipante;
        InterfaceApresentacaoTipos *contrInterfaceApresentacaoTipos;

    public:
        void executar();
        // M�todos set para atribuir valores ao ponteiros declarados
        void setContrApresentacaoAutenticacao(InterfaceApresentacaoAutenticacao*);
        void setContrInterfaceApresentacaoParticipante(InterfaceApresentacaoParticipante*);
        void setContrInterfaceApresentacaoTipos(InterfaceApresentacaoTipos*);
};

inline void ControladoraApresentacaoControle::setContrApresentacaoAutenticacao(InterfaceApresentacaoAutenticacao* cntr) {
    contrApresentacaoAutenticacao = cntr;
}

inline void ControladoraApresentacaoControle::setContrInterfaceApresentacaoParticipante(InterfaceApresentacaoParticipante* cntr) {
    contrInterfaceApresentacaoParticipante = cntr;
}

inline void ControladoraApresentacaoControle::setContrInterfaceApresentacaoTipos(InterfaceApresentacaoTipos* cntr) {
    contrInterfaceApresentacaoTipos = cntr;
}


//------------- Classe controladora de apresenta��o autentica��o -------------
                                           // Herda a classe abstrata
class ControladoraApresentacaoAutenticacao:public InterfaceApresentacaoAutenticacao {
    private:
        // Ponteiros para Interface
        InterfaceServicoAutenticacao *contrInterfaceServicoAutenticacao;

    public:
        bool autenticar(Email*);
        void setControladoraServicoAutenticacao(InterfaceServicoAutenticacao*);
};

inline void ControladoraApresentacaoAutenticacao::setControladoraServicoAutenticacao(InterfaceServicoAutenticacao* cntr) {
    contrInterfaceServicoAutenticacao = cntr;
}


//------------- Classe controladora de apresenta��o usu�rio -------------
                                               // Herda a classe abstrata
class ControladoraApresentacaoParticipante:public InterfaceApresentacaoParticipante {
    private:
        InterfaceServicoParticipante *contrInterfaceServicoParticipante;
        InterfaceServicoTipos *contrInterfaceApresentacaoTipos;

    public:
        void cadastrar();
        //bool descadastrar(Email);
        void setcontrInterfaceServicoParticipante(InterfaceServicoParticipante*);
        void setContrInterfaceApresentacaoTipos(InterfaceServicoTipos*);
};

inline void ControladoraApresentacaoParticipante::setcontrInterfaceServicoParticipante(InterfaceServicoParticipante *cntr) {
    contrInterfaceServicoParticipante = cntr;
}

inline void ControladoraApresentacaoParticipante::setContrInterfaceApresentacaoTipos(InterfaceServicoTipos *cntr) {
    contrInterfaceApresentacaoTipos = cntr;
}


// ------------- Classe controladora de apresenta��o produtos financeiros -------------
                                                // Herda a classe abstrata
class ControladoraApresentacaoTipos:public InterfaceApresentacaoTipos {
    private:
        InterfaceServicoTipos *contrInterfaceServicoTipos;
    public:
        void cadastrar(Email*);
        void mostrarTipos();
        void cadastrarPropostaApresentacao();
        //void cadastrarProposta();
        void setContrInterfaceServicoTipos(InterfaceServicoTipos*);
};

inline void ControladoraApresentacaoTipos::setContrInterfaceServicoTipos(InterfaceServicoTipos* cntr) {
    contrInterfaceServicoTipos = cntr;
}


#endif // CONTROLADORASAPRESENTACAO_H_INCLUDED
