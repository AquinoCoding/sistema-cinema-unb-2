/** UnB - Universidade de Brasília
 *  CIC - Departamento de Ciências da Computação
 *  Alunos: Igor Silva de Oliveira Cardoso (160125073)
 */

#ifndef CONTROLADORASSERVICO_H_INCLUDED
#define CONTROLADORASSERVICO_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include "interface.h"
#include "containers.h"

//------------- Implementar as controladoras de serviço -------------


//------------- Classe controladora de serviço autenticação -------------
// Não depedem de serviços, elas realizam serviço
class ControladoraServicoAutenticacao:public InterfaceServicoAutenticacao {
    public:
        bool autenticar(Email, Senha);
};


//------------- Classe controladora de serviço autenticação -------------
class ControladoraInterfaceServicoUsuario:public InterfaceServicoUsuario {
    public:
        bool cadastrarUsuario(Usuario);
};


//------------- Classe controladora de serviço autenticação -------------
class ControladoraInterfaceServicoImoveis:public InterfaceServicoImoveis {
    public:
        void mostrarImoveisD();
        bool cadastrarImovel(Imovel);
        bool cadastrarProposta(Proposta);
};

#endif // CONTROLADORASSERVICO_H_INCLUDED
