#include "stubs.h"

// Adequar os valores.

const string StubServicoAutenticacao::INVALIDO = "12345";
const string StubServicoPessoal::INVALIDO = "12345";
const string StubServicoSessao::INVALIDO = "12345";

//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos dos stubs.

bool StubServicoAutenticacao::autenticar(Email email, Senha senha){
    if(email.getValor().compare(INVALIDO) == 0)
        return false;
    return true;
}

bool StubServicoPessoal::cadastrarPartcipante(Participante participante){
    if(participante.getEmail().getValor().compare(INVALIDO) == 0)
        return false;
    return true;
}

bool StubServicoSessao::cadastrarCodigo(Codigo codigo){
    if(codigo.getCodigo().getValor().compare(INVALIDO) == 0)
        return false;
    return true;
}

bool StubServicoSessao::consultarCodigo(Codigo *codigo){
    if(codigo->getCodigo().getValor().compare(INVALIDO) == 0)
        return false;


    return true;
}

bool StubServicoSessao::cadastrarSessao(Tipo tipo){
    if(tipo.getTipo().getValor().compare(INVALIDO) == 0)
        return false;
    return true;
}

bool StubServicoSessao::descadastrarSessao(Tipo tipo){
    if(tipo.getValor().compare(INVALIDO) == 0)
        return false;
    return true;
}

bool StubServicoSessao::realizarSessao(Codigo codigo){
    if(codigo.getCodigo().getValor().compare(INVALIDO) == 0)
        return false;
    return true;
}

bool StubServicoSessao::recuperarSessao(Codigo *codigo){
    if(codigo->getCodigo().getValor().compare(INVALIDO) == 0)
        return false;

    return true;
}

