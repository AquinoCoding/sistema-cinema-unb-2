#ifndef CONTAINERS_H_INCLUDED
#define CONTAINERS_H_INCLUDED

#include "entidade.h"
#include "dominios.h"
#include <list>

using namespace std;

class ContainerParticipante {
    private:
        list<Participante> container;
        static ContainerParticipante *instancia;
        ContainerParticipante(){};

    public:
        static ContainerParticipante* getInstancia();       // Método para instanciar a classe.
        bool incluir(Participante);                         // Métodos responsáveis por prestação de serviço.
        bool remover(Email);
        bool pesquisar(Email, Senha);
        //bool atualizar(Participante);
};


class ContainerPeca {
    private:
        list<Peca> container;
        static ContainerPeca *instancia;
        ContainerPeca(){};

    public:
        static ContainerPeca* getInstancia();
        bool incluir(Peca);
        void mostraPeca();
};

class ContainerSessao {
    private:
        list<Sessao> container;
        static ContainerSessao *instancia;
        ContainerSessao(){};

    public:
        static ContainerSessao* getInstancia();
        bool incluir(Sessao);
        void mostrarSessao();
};

class ContainerSala {
    private:
        list<Sala> container;
        static ContainerSala *instancia;
        ContainerSala(){};

    public:
        static ContainerSala* getInstancia();
        bool incluir(Sala);
        void mostrarSala();
};

#endif // CONTAINERS_H_INCLUDED
