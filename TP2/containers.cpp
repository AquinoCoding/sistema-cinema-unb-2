#include "containers.h"

// --------------------------- Participantes ---------------------------

ContainerParticipante* ContainerParticipante::instancia = nullptr;

ContainerParticipante* ContainerParticipante::getInstancia() {
    if (instancia == nullptr)
        instancia = new ContainerParticipante();
    return instancia;
}

bool ContainerParticipante::incluir(Participante participante){
    for(list<Participante>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getEmail() == Participante.getEmail()){
            return false;
        }
    }
    // Inclui objeto.
    container.push_back(participante);
    return true;
}


bool ContainerParticipante::remover(Email email){
    for(list<Participante>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getEmail() == email.getValor()){
            // Remove objeto localizado.
            container.erase(elemento);
            return true;
        }
    }
    return false;
}


bool ContainerParticipante::pesquisar(Email email, Senha senha){
    for(list<Participante>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getEmail() == email.getValor()){
            if(elemento->getSenha() == senha.getValor()) {
                return true;
            }
        }
    }
    return false;
}


bool ContainerParticipante::atualizar(Participante Participante){
    for(list<Participante>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCPF().getValor() == Participante.getCPF().getValor()){
            elemento->setEndereco(Participante.getEndereco());
            elemento->setCEP(Participante.getCEP());
            elemento->setSenha(Participante.getSenha());
            return true;
        }
    }
    return false;
}

void ContainerParticipante::mostrarTipos() {
    int cont = 1;

    for(list<Participante>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        cout << "\n\nParticipantes " << cont << endl;
        cout << "\tMatricula: " << elemento->getMatricula() << endl;
        cout << "\tNome: " << elemento->getNome() << endl;
        cout << "\tEmail: " << elemento->getEmail() << endl;
        cout << "\tTelefone " << elemento->getTelefone() << endl;
        cout << "\tCargo " << elemento->getCargo() << endl;
        cout << "--------------------------------------------------\n";
        

        cont++;
    }
}

// --------------------------- Peça ---------------------------

ContainerPeca* ContainerPeca::instancia = nullptr;

ContainerPeca* ContainerPeca::getInstancia() {
    if (instancia == nullptr)
        instancia = new ContainerPeca();
    return instancia;
}


bool ContainerPeca::incluir(Peca peca){
    for(list<Peca>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCodigo() == peca.getCodigo()){
            return false;
        }
    }
    // Inclui objeto.
    container.push_back(peca);
    return true;
}

void ContainerPeca::mostrarTipos() {
    int cont = 1;

    for(list<Peca>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        cout << "\n\nPeca " << cont << endl;
        cout << "\tCodigo: " << elemento->getCodigo() << endl;
        cout << "\tDescricao: " << elemento->getDescricao() << endl;
        cout << "\tEndereco: " << elemento->getEndereco() << endl;
        cout << "\tNumero maximo de hospedes: " << elemento->getHospedes() << endl;
        cout << "\tData Inicial de disponibilidade: " << elemento->getDataInicial() << endl;
        cout << "\tNumero maximo de hospedes: " << elemento->getDataFinal() << endl;
        cout << "\tValor: " << elemento->getValor() << endl;
        cout << "--------------------------------------------------\n";

        cont++;
    }
}


// --------------------------- Sessao ---------------------------

ContainerSessao* ContainerSessao::instancia = nullptr;

ContainerSessao* ContainerSessao::getInstancia() {
    if (instancia == nullptr)
        instancia = new ContainerSessao();
    return instancia;
}


bool ContainerSessao::incluir(Sessao sessao){
    for(list<Sessao>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCodigo() == sessao.getCodigo()){
            return false;
        }
    }
    // Inclui objeto.
    container.push_back(sessao);
    return true;
}

void ContainerSessao::mostrarTipos() {
    int cont = 1;

    for(list<Sessao>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        cout << "\n\n\tImovel " << cont << endl;
        cout << "\tCodigo: " << elemento->getCodigo() << endl;
        cout << "\tDescricao: " << elemento->getDescricao() << endl;
        cout << "\tEndereco: " << elemento->getEndereco() << endl;
        cout << "\tNumero maximo de hospedes: " << elemento->getHospedes() << endl;
        cout << "\tData Inicial de disponibilidade: " << elemento->getDataInicial() << endl;
        cout << "\tNumero maximo de hospedes: " << elemento->getDataFinal() << endl;
        cout << "\tValor: " << elemento->getValor() << endl;
        cout << "--------------------------------------------------\n";

        cont++;
    }
}


// --------------------------- Sala ---------------------------

ContainerSala* ContainerSala::instancia = nullptr;

ContainerSala* ContainerSala::getInstancia() {
    if (instancia == nullptr)
        instancia = new ContainerSala();
    return instancia;
}


bool ContainerSala::incluir(Sala sala){
    for(list<Sala>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if (elemento->getCodigo() == sala.getCodigo()){
            return false;
        }
    }
    // Inclui objeto.
    container.push_back(sala);
    return true;
}

void ContainerSessao::mostrarTipos() {
    int cont = 1;

    for(list<Sessao>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        cout << "\n\n\tImovel " << cont << endl;
        cout << "\tCodigo: " << elemento->getCodigo() << endl;
        cout << "\tDescricao: " << elemento->getDescricao() << endl;
        cout << "\tEndereco: " << elemento->getEndereco() << endl;
        cout << "\tNumero maximo de hospedes: " << elemento->getHospedes() << endl;
        cout << "\tData Inicial de disponibilidade: " << elemento->getDataInicial() << endl;
        cout << "\tNumero maximo de hospedes: " << elemento->getDataFinal() << endl;
        cout << "\tValor: " << elemento->getValor() << endl;
        cout << "--------------------------------------------------\n";

        cont++;
    }
}