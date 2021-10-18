#include <iostream>
#include <string.h>

#include "dominios.h"
#include "entidades.h"
//#include "testes.h"

#include "interface.h"
#include "controladorasapresentacao.h"
#include "controladorasservico.h"

using namespace std;

int main(void) {
    // Instancia as controladoras de apresenta��o.
    ControladoraApresentacaoControle *contrApresentacaoControle = new ControladoraApresentacaoControle();
    InterfaceApresentacaoAutenticacao *contrApresentacaoAutenticacao = new ControladoraApresentacaoAutenticacao();
    InterfaceApresentacaoUsuario *contrApresentacaoUsuario = new ControladoraApresentacaoUsuario();
    InterfaceApresentacaoImoveis *contrApresentacaoSessao = new ControladoraApresentacaoImoveis();


    // Instancia os controles do servi�o.

    InterfaceServicoAutenticacao *contServicoAutenticacao = new ControladoraServicoAutenticacao();
    InterfaceServicoUsuario *contrServicoUsuario = new ControladoraInterfaceServicoUsuario();
    InterfaceServicoImoveis *contrServicoSessao = new ControladoraInterfaceServicoImoveis();


    // Interliga as controladoras aos servi�os.
    contrApresentacaoControle->setContrApresentacaoAutenticacao(contrApresentacaoAutenticacao);
    contrApresentacaoControle->setContrInterfaceApresentacaoUsuario(contrApresentacaoUsuario);
    contrApresentacaoControle->setContrInterfaceApresentacaoImoveis(contrApresentacaoSessao);

    contrApresentacaoAutenticacao->setControladoraServicoAutenticacao(contServicoAutenticacao);


    contrApresentacaoUsuario->setContrInterfaceServicoUsuario(contrServicoUsuario); // Interliga para fazer cadastro
    contrApresentacaoUsuario->setContrInterfaceApresentacaoImoveis(contrServicoSessao);


    contrApresentacaoSessao->setContrInterfaceServicoImoveis(contrServicoSessao);


    contrApresentacaoControle->executar();

    delete(contrApresentacaoControle);
    delete(contrApresentacaoAutenticacao);
    delete(contrApresentacaoUsuario);
    delete(contrApresentacaoSessao);
    delete(contrServicoUsuario);
    delete(contrServicoSessao);
    delete(contServicoAutenticacao);


    return 0;
}
