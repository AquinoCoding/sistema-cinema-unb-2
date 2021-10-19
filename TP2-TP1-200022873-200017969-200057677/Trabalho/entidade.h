#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include <string>
#include "dominios.h"


class Participante {
    private:
        Matricula matricula;
        Nome nome;
        Nome sobrenome;
        Email email;
        Senha senha;
        Telefone telefone;
        Cargo cargo;

    public:
        void setMatricula(const Matricula &mat);
        string getMatricula(void) const{
            return matricula.getValor();
        }

        void setNome(const Nome &nom);
        string getNome(void) const{
            return nome.getValor();
        }

        void setNome(const Nome &sobr);
        string getNome(void) const{
            return sobrenome.getValor();
        }

        void setEmail(const Email &ema);
        string getEmail(void) const{
            return email.getValor();
        }

        void setSenha(const Senha &sen);
        string getSenha(void) const{
            return senha.getValor();
        }

        void setTelefone(const Telefone &tel);
        string getTelefone(void) const{
            return telefone.getValor();
        }


        void setCargo(const Cargo &carg);
        string getCargo(void) const{
            return cargo.getValor();
        }

};

// Defini��es de Participante

inline void Participante::setMatricula(const Matricula &mat){
    this->matricula = mat;
}

inline void Participante::setNome(const Nome &nom){
    this->nome = nom;
}

inline void Participante::setNome(const Nome &sobr){
    this->sobrenome = sobr;
}

inline void Participante::setEmail(const Email &ema){
    this->email = ema;
}

inline void Participante::setSenha(const Senha &sen){
    this->senha = sen;
}

inline void Participante::setTelefone(const Telefone &tel){
    this->telefone = tel;
}

inline void Participante::setCargo(const Cargo &carg){
    this->cargo = carg;
}


class Sessao {
    private:
        Codigo codigo;
        Data data;
        Horario horario;

    public:
        void setCodigo(const Codigo &cod);
        string getCodigo(void) const{
            return codigo.getValor();
        }

        void setData(const Data &dat);
        string getData(void) const{
            return data.getValor();
        }

        void setHorario(const Horario &hor);
        string getHorario(void) const{
            return horario.getValor();
        }

};

// Defini��es de Usuario

inline void Sessao::setCodigo(const Codigo &cod){
    this->codigo = cod;
}

inline void Sessao::setData(const Data &dat){
    this->data = dat;
}

inline void Sessao::setHorario(const Horario &hor){
    this->horario = hor;
}



class Sala {
    private:
        Codigo codigo;
        Nome nome;
        Capacidade capacidade;

    public:
        void setCodigo(const Codigo &cod);
        string getCodigo(void) const{
            return codigo.getValor();
        }

        void setNome(const Nome &nom);
        string getNome(void) const{
            return nome.getValor();
        }

        void setCapacidade(const Capacidade &cap);
        string getCapacidade(void) const{
            return capacidade.getValor();
        }

};

// Defini��es de Usuario

inline void Sala::setCodigo(const Codigo &cod){
    this->codigo = cod;
}

inline void Sala::setNome(const Nome &nom){
    this->nome = nom;
}

inline void Sala::setCapacidade(const Capacidade &cap){
    this->capacidade = cap;
}

class Peca {
    private:
        Codigo codigo;
        Nome nome;
        Tipo tipo;
        Classificacao classificacao;

    public:
        void setCodigo(const Codigo &cod);
        string getCodigo(void) const{
            return codigo.getValor();
        }

        void setNome(const Nome &nom);
        string getNome(void) const{
            return nome.getValor();
        }

        void setTipo(const Tipo &tip);
        string getTipo(void) const{
            return tipo.getValor();
        }

        void setClassificacao(const Classificacao &cla);
        string getClassificacao(void) const{
            return classificacao.getValor();
        }

};

// Defini��es de Usuario

inline void Peca::setCodigo(const Codigo &cod){
    this->codigo = cod;
}

inline void Peca::setNome(const Nome &nom){
    this->nome = nom;
}

inline void Peca::setTipo(const Tipo &tip){
    this->tipo = tip;
}

inline void Peca::setClassificacao(const Classificacao &cla){
    this->classificacao = cla;
}

#endif // ENTIDADES_H_INCLUDED
