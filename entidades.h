#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include <string>
#include "dominios.h"


//! Classe que representa cada imóvel e seus atributos.

//! Cada imóvel é cadastrado por um usuário autenticado.
//! No momento do cadastro do imóvel deve ser fornecido :
//!
//! A classe a qual o imóvel pertence. (apartamento, casa ou quarto.)(Domínio classe)
//! Descrição do imóvel.  (Domínio Descrição)
//! Número máximo de hóspedes. (Domínio Número)
//! Data inicial do período de disponibilidade. (Domínio Data)
//! Data final do período de disponibilidade. (Domínio Data)
//! Valor de diária mínimo. (Domínio Moeda)
//!
//! Cada atributo deve estar de acordo com as especificações de formato de cada
//! Classe Domínio.


class Imovel {
    private:
        Codigo codigo;
        Classe classe;
        Descricao descricao;
        Endereco endereco;
        Data data_inicial;
        Data data_final;
        Numero hospedes;
        Moeda valor;
        Email email;


    public:
        //Imovel(Codigo);

        void setEmail(const Email &eml);
        string getEmail(void) const{
            return email.getValor();
        }

        void setCodigo(const Codigo &codigo);
        string getCodigo(void) const{
            return codigo.getValor();
        }

        void setClasse(const Classe &classe);
        int getClasse(void) const{
            return classe.getValor();
        }

        void setDescricao(const Descricao &descricao);
        string getDescricao(void) const{
            return descricao.getValor();
        }

        void setEndereco(const Endereco &endereco);
        string getEndereco(void) const{
            return endereco.getValor();
        }

        void setDataInicial(const Data &data_init);
        string getDataInicial(void) const{
            return data_inicial.getValor();
        }

        void setDataFinal(const Data &data_fim);
        string getDataFinal(void) const{
            return data_final.getValor();
        }

        void setHospedes(const Numero &hosp);
        int getHospedes(void) const{
            return hospedes.getValor();
        }


        void setValor(const Moeda &moed);
        float getValor(void) const{
            return valor.getValor();
        }
};


class Proposta {
    private:
        Codigo codigo;
        Data data_inicial;
        Data data_final;
        Numero hospedes;
        Moeda valor;

    public:
        void setCodigo(const Codigo &codigo);
        string getCodigo(void) const{
            return codigo.getValor();
        }

        void setDataInicial(const Data &data_init);
        string getDataInicial(void) const{
            return data_inicial.getValor();
        }

        void setDataFinal(const Data &data_fim);
        string getDataFinal(void) const{
            return data_final.getValor();
        }

        void setHospedes(const Numero &hosp);
        int getHospedes(void) const{
            return hospedes.getValor();
        }


        void setValor(const Moeda &moed);
        float getValor(void) const{
            return valor.getValor();
        }

};


class Usuario {
    private:
        Nome nome;
        Email email;
        Senha senha;
        Telefone telefone;

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


// Definições de Imovel

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

// Definiçoes de Proposta
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

// Definições de Usuario
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
