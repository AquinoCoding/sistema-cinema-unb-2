/** UnB - Universidade de Brasília
 *  CIC - Departamento de Ciências da Computação
 *  Alunos: Igor Silva de Oliveira Cardoso (160125073)
 */

#ifndef CONTAINERS_H_INCLUDED
#define CONTAINERS_H_INCLUDED

#include "entidades.h"
#include "dominios.h"
#include <list>

using namespace std;

class ContainerUsuario {
    private:
        list<Usuario> container;
        static ContainerUsuario *instancia;
        ContainerUsuario(){};

    public:
        static ContainerUsuario* getInstancia();       // Método para instanciar a classe.
        bool incluir(Usuario);                         // Métodos responsáveis por prestação de serviço.
        //bool remover(Email);
        bool pesquisar(Email, Senha);
        //bool atualizar(Usuario);
};


class ContainerImovel {
    private:
        list<Imovel> container;
        static ContainerImovel *instancia;
        ContainerImovel(){};

    public:
        static ContainerImovel* getInstancia();
        bool incluir(Imovel);
        void mostrarImoveis();
};

/*
class ContainerProposta {

};
*/


#endif // CONTAINERS_H_INCLUDED
