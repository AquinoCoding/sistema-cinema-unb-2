#include "dominios.h"
#include <iostream>
#include<stdio.h>
#include<string>
#include<string.h>
#include <ctype.h>
#include <stdlib.h>

using namespace std;

bool Capacidade::validar(float capacidade) {
    capacidade /= 100;
    if((capacidade == int(capacidade)) && (capacidade > 0 && capacidade <= 5))
        return true;
    throw invalid_argument("Capacidade inválida. Informe um valor válido. Ex: 100");
}

void Capacidade::setValor(float valor) {
    validar(valor);
    this->capacidade = valor;
}


bool Cargo::validar(string cargo) {
    string cargos[6] = {"ator", "cenógrafo", "figurinista", "maquiador", "sonoplasta", "iluminador"};
    for(int i = 0; i <= 5; i++){
        if(cargos[i].compare(cargo) == 0)
            return true;
    }
    throw invalid_argument("Cargo inválido. Informe um cargo válido. Ex: ator");
}

void Cargo::setValor(string valor) {
    validar(valor);
    this->cargo = valor;
}


bool Classificacao::validar(string classificacao){ 
    string classificacoes[6] = {"livre", "10", "12", "14", "16", "18"};
    for(int i=0; i <=5; i++){
        if(classificacoes[i].compare(classificacao) == 0)
            return true;
    }
    throw invalid_argument("Classificacao inválida. Informe um cargo válido. Ex: livre, 10");

}

void Classificacao::setValor(string valor){
        validar(valor);
        this->classificacao = valor;
}


bool Codigo::validar(string codigo){ 
    int flag = 0;

    if (codigo.size()==6) {
        for (int i=0;i<6;i++){
            if (i<2 && codigo[i]>=65 && codigo[i]<=90)flag++;
            else if (i>=2 && codigo[i]>=48 && codigo[i]<=57)flag++;
            else break;
        }
        if (flag == codigo.size()) return true;
    }
    throw invalid_argument("Codigo invalido. Ex: AA0000.");

}

void Codigo::setValor(string valor){
    validar(valor);
    this->codigo = valor;
}


bool Data::validar(string data){ 
    char dia_char[3], mes_char[3], ano_char[5];
    int dia, mes, ano, flag_laco = 0;

    if (data.size()==10){
        if (data[2]==47 && data[5]==47){
            if (48<=data[1] && data[1]<=57 && 48<=data[4] && data[4]<=57 && 48<=data[7] && data[7]<=57 && 48<=data[8] && data[8]<=57 && 48<=data[9] && data[9]<=57){
                for(int i=0;i<11;i++){
                    if (i <2){
                        dia_char[flag_laco] = data[i];
                        flag_laco++;
                    }
                    else if (i == 2) {
                        dia_char[3] = '\0';
                        dia = atoi(dia_char);
                        flag_laco = 0;
                    }
                    else if (i<5){
                        mes_char[flag_laco]=data[i];
                        flag_laco++;
                    }
                    else if (i ==5){
                        mes_char[3] = '\0';
                        mes = atoi(mes_char);
                        flag_laco = 0;
                    }
                    else if (i<10){
                        ano_char[flag_laco] = data[i];
                        flag_laco++;
                    }
                    else {
                        ano_char[5] = '\0';
                        ano = atoi(ano_char);
                    }
                }
            if (data[6] >= 50 && data[6] <= 57){
                if (mes == 1) {
                    if (dia >= 1 && dia <=31) return true;
                }
                else if (mes == 2) {
                    if (ano%4==0 && ano%100!=0 || ano%4==0 && ano%100==0 && ano%400==0){
                        if (dia>=1 && dia<=29) return true;
                    }
                    else{
                        if (dia>=1 && dia<=28) return true;
                    }
                }
                else if (mes == 3) {
                    if (dia >= 1 && dia <=31) return true;
                }
                else if (mes == 4) {
                    if (dia >= 1 && dia <=30) return true;
                }
                else if (mes == 5) {
                    if (dia >= 1 && dia <=31) return true;
                }
                else if (mes == 6) {
                    if (dia >= 1 && dia <=30) return true;
                }
                else if (mes == 7) {
                    if (dia >= 1 && dia <=31) return true;
                    }
                else if (mes == 8) {
                    if (dia >= 1 && dia <=31) return true;
                }
                else if (mes == 9) {
                    if (dia >= 1 && dia <=30) return true;
                }
                else if (mes == 10) {
                    if (dia >= 1 && dia <=31) return true;
                }
                else if (mes == 11) {
                    if (dia >= 1 && dia <=30) return true;
                }
                else if (mes == 12) {
                    if (dia >= 1 && dia <=31) return true;
                }
            }
        }
    }
    throw invalid_argument("Data invalida. Cuidado com o ano bissesto. Ex: DD/MM/AAAA");
}}

void Data::setValor (string valor){
    validar(valor);
    this->data = valor;
}


bool Email::validar(string email) { 
    int posicao_arb, tamanho, flag = 0;

    tamanho = email.size();
    if (tamanho<320){
        posicao_arb = email.find("@");
        if (tamanho-posicao_arb<=255 && posicao_arb<=64 && posicao_arb!= -1){
            for (int i=0;i<tamanho;i++){
                if (email[i]==46 && i==0 || email[i]==46 && i==tamanho-1) break;
                else if (email[i]==46 && email[i+1]==46) break;
                else if (email[i]>=48 && email[i]<=57) flag++;
                else if (email[i]>=65 && email[i]<=90) flag++;
                else if (email[i]>=97 && email[i]<=122) flag++;
                else if (email[i]==33 || email[i]>=35 && email[i]<=39 || email[i]==42 || email[i]==43 || email[i]==45 || email[i]==46 || email[i]==47 || email[i]==61 || email[i]==63 || email[i]==64 || email[i]>=94 && email[i]<=96 || email[i]>=123 && email[i]<=126) flag++;       //caracteres especiais
                else break;
            }
            if (flag == tamanho) return true;
        }
    }

    throw invalid_argument("Email invalido.");
}

void Email::setValor(string valor) {
    validar(valor);
    this->email = valor;
}


bool Horario::validar(string horario){ 

    char hora_string[2], minuto_string[2];
    int hora_int, minuto_int;

    if(horario[1]>=48 && horario[1]<=57 && horario[4]>48 && horario[4]<=57){

        hora_string[0] = horario[0];
        hora_string[1] = horario[1];
        hora_string[2] = '\0';
        hora_int = atoi(hora_string);

        minuto_string[0] = horario[3];
        minuto_string[1] = horario[4];
        minuto_string[2] = '\0';
        minuto_int = atoi(minuto_string);
        if(hora_int >= LIMITE_MIN && hora_int <= LIMITE_MAX)
        {
            if(minuto_int == 00 || minuto_int == 15 || minuto_int == 30 || minuto_int == 45) return true;
        }
    }
    throw invalid_argument("Argumento invalido.");
}

void Horario::setValor(string valor){
    validar(valor);
    this->horario = valor;
}


bool Matricula::validar(string matricula){ 
    int j=1;
    int contadigito=0;

    int i=0;
    i = matricula.size();

    if(i == 5){
        for(i=0 ; i<5 ; i++){
            if(isdigit(matricula[i])){
                contadigito++;
            }
        }
        if(contadigito != 5){
            throw invalid_argument("Argumento invalido.");
        }
        else{
            for(i=0 ; i<4 ; i++){
                for(j=i+1 ; j<=4 ; j++){
                    if(matricula[i] == matricula[j]){
                        throw invalid_argument("Argumento invalido.");
                    }
                }
            }
        }
        return true; //SUCESSO, 5 dígitos diferentes.
    }
    else{
        throw invalid_argument("Argumento invalido."); //INVÁLIDO, a string possui mais ou menos de 5 caracteres
    }
}

void Matricula::setValor(string valor){
    validar(valor);
    this->matricula = valor;
}


bool Nome::validar(string nome) { 
    int flag=0;

    if (nome.size()>=5 && nome.size()<=20){
        for(int i=0; i<nome.size(); i++){
            if (nome[i]>=65 && nome[i]<=90) flag++;
            else if (nome[i]>=97 && nome[i]<=122) flag++;
            else if (nome[i]==46 && nome[i-1]>=65 && nome[i-1]<=90 || nome[i]==46 && nome[i-1]>=97 && nome[i-1]<=122) flag++;
            else if (nome[i]==32 && nome[i+1]>=65 && nome[i+1]<=90) flag++;
            else break;
        }
        if (flag==nome.size()) return true;
    }
    throw invalid_argument("Nome invalido. Ex: Joao Pereira.");
}

void Nome::setValor(string valor) {
    validar(valor);
    this->nome = valor;
}


bool Senha::validar(string senha){ 
    int tamanho, i=0, condicao=0;
    tamanho = senha.size();
    if(tamanho == 8){
        for(i; i <= tamanho; i++){
            if(senha[i] == 33 || (senha[i] >= 35 && senha[i] <= 38) || (senha[i] >= 48 && senha[i] <= 57)
               || (senha[i] >= 63 && senha[i] <= 90) || (senha[i] >= 97 && senha[i] <= 122))
                condicao ++;
        } if(condicao == 8)
            return true;
    }
    throw invalid_argument("Senha inválida. Informe uma senha válida. Ex: NOME123@");
}

void Senha::setValor(string valor){
    validar(valor);
    this->senha = valor;
}


bool Telefone::validar(string telefone){ 
    char dd_char[2];
    int dd, n_zeros=0, flag=0;
    if (telefone.size()==14){
        if (telefone[0]==40 && telefone[3]==41 && telefone[4]==45){
            if (telefone[2]>=48 && telefone[2]<=57){
                for (int i=0, j=1; i<3; i++, j++){
                    if (i <2) dd_char[i] = telefone[j];
                    else dd_char[2] = '\0';
                }
                dd = atoi(dd_char);
                if (dd>=11 && dd<=19 || dd==21 || dd==22 || dd==24 || dd==27 || dd==28 || dd==32 || dd==33 || dd==34 || dd==35 || dd==37 || dd==38 || dd>=41 && dd<=49 || dd==51 || dd==53 || dd==54 || dd==55 || dd>=61 && dd<=69 || dd==71 || dd==73 || dd==74 || dd==75 || dd==77 || dd==79 || dd>=81 && dd<=89 || dd>=91 && dd<=99){
                    for (int i=5; i<14;i++){
                        if (telefone[i]>=48 && telefone[i]<=57){
                            if (telefone[i] == 48) n_zeros++;
                            flag++;
                        }
                    }
                    if (n_zeros != 9 && flag == 9) return true;
                }
            }
        }
    }
    throw invalid_argument("Numero invalido. Ex: (00)-000000000.");
}

void Telefone::setValor(string valor) {
    validar(valor);
    this->telefone = valor;
}


bool Tipo::validar(string tipo){ 
    if(tipo == "auto" || tipo == "comédia" || tipo == "drama" ||
    tipo == "farsa" || tipo == "melodrama" || tipo == "monólogo" ||
    tipo == "musical" || tipo == "ópera" || tipo == "revista")
    {
        return true;
    }
    throw invalid_argument("Argumento invalido.");
}

void Tipo::setValor(string valor){
    validar(valor);
    this->tipo = valor;
}