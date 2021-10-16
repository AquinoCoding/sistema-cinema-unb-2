#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include <string>
#include "dominios.h"


//! Classe que representa cada im�vel e seus atributos.

//! Cada im�vel � cadastrado por um usu�rio autenticado.
//! No momento do cadastro do im�vel deve ser fornecido :
//!
//! A classe a qual o im�vel pertence. (apartamento, casa ou quarto.)(Dom�nio classe)
//! Descri��o do im�vel.  (Dom�nio Descri��o)
//! N�mero m�ximo de h�spedes. (Dom�nio N�mero)
//! Data inicial do per�odo de disponibilidade. (Dom�nio Data)
//! Data final do per�odo de disponibilidade. (Dom�nio Data)
//! Valor de di�ria m�nimo. (Dom�nio Moeda)
//!
//! Cada atributo deve estar de acordo com as especifica��es de formato de cada
//! Classe Dom�nio.


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

// Defini��es de Usuario

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

#endif // ENTIDADES_H_INCLUDED