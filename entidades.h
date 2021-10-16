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
        void setNome(const Nome &nom);
        string getNome(void) const{
            return nome.getValor();
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
        
};


// Defini��es de Imovel

inline void Imovel::setEmail(const Email &eml) {
    this->email = eml;
}

inline void Imovel::setCodigo(const Codigo &cod){
    this->codigo = cod;
}

inline void Imovel::setClasse(const Classe &cls){
    this->classe = cls;
}

inline void Imovel::setDescricao(const Descricao &desc){
    this->descricao = desc;
}

inline void Imovel::setEndereco(const Endereco &ende){
    this->endereco = ende;
}

inline void Imovel::setDataInicial(const Data &data_init) {
    this->data_inicial = data_init;
}

inline void Imovel::setDataFinal(const Data &data_fim) {
    this->data_final = data_fim;
}

inline void Imovel::setHospedes(const Numero &hosp) {
    this->hospedes = hosp;
}

inline void Imovel::setValor(const Moeda &moed) {
    this->valor = moed;
}

// Defini�oes de Proposta
inline void Proposta::setCodigo(const Codigo &cod){
    this->codigo = cod;
}

inline void Proposta::setDataInicial(const Data &data_init) {
    this->data_inicial = data_init;
}

inline void Proposta::setDataFinal(const Data &data_fim) {
    this->data_final = data_fim;
}

inline void Proposta::setHospedes(const Numero &hosp) {
    this->hospedes = hosp;
}

inline void Proposta::setValor(const Moeda &moed) {
    this->valor = moed;
}

// Defini��es de Usuario
inline void Usuario::setNome(const Nome &nom){
    this->nome = nom;
}

inline void Usuario::setEmail(const Email &ema){
    this->email = ema;
}

inline void Usuario::setSenha(const Senha &sen){
    this->senha = sen;
}

inline void Usuario::setTelefone(const Telefone &tel){
    this->telefone = tel;
}

#endif // ENTIDADES_H_INCLUDED
