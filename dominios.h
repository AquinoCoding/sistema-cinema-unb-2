#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED
#include <stdexcept>

using namespace std;

/// Domínio Capacidade.

///
/// Classe Capacidade.
///
/// Regras de formato:
/// - Valor é valido caso seja igual a um dos seguintes valores: 100, 200, 300, 400 ou 500.
///

class Capacidade { // octavio - 190094087
    private:
        float capacidade;
        bool validar(float);
    public:
///
///@param Valor capacidade.
///
///@throw invalid_argument. Capacidade inválida caso o valor fornecido não seja uma palavra presente nas regras de formato da classe.
///
        void setValor(float);
///
/// @return Capacidade válida.
///
        float getValor() const {
            return capacidade;
        }
};

/// Domínio Cargo.

///
/// Classe Cargo.
///
/// Regras de formato:
/// - Valor é válido caso seja igual a um dos seguintes valores: ator, coreógrafo, figurinista, maquiador, sonoplasta ou iluminador.
///

class Cargo { // octavio - 190094087
    private:
        string cargo;
        bool validar(string);
    public:
//
///@param Valor cargo.
///
///@throw invalid_argument. Cargo é inválido caso não seja palavra presente nas regras de formato da classe.
///
        void setValor(string);
///
/// @return Cargo válido.
///
		string getValor() const {
            return cargo;
        }
};

/// Domínio Classificacão.

///
/// Classe Classificacao.
///
/// Regras de formato:
/// - Valor é válido caso seja igual a um dos seguintes valores: 10, 12, 14, 16 ou 18.
///

class Classificacao { // octavio - 190094087
    private:
        string classificacao;
        bool validar(string);
    public:
///
///@param Valor classificaçao.
///
///@throw invalid_argument. Classificação é inválida caso não seja palavra presente nas regras de formato da classe.
///
        void setValor(string);
///
/// @return Classificação.
///
        string getValor() const{
            return classificacao;
        }
};

/// Domínio Código.

///
/// Classe Codigo.
///
/// Regras de formato:
/// - Valor é válido caso contenha seis caracteres sendo os dois primeiros letras maiúsculas e os quatro últimos dígitos de 0 a 9.
///

class Codigo {  // Lorenzo - 200022610
    private:
        string codigo;
        bool validar(string);
    public:
///
///@param Valor codigo.
///
///@throw invalid_argument. Código inválido caso o valor fornecido não esteja de acordo com as regras de formato.
///
        void setValor(string);
///
/// @return Código válido.
///
        string getValor() const{
            return codigo;
            }
};

/// Domínio Data.

///
/// Classe Data: composta por dia, mês e ano.
///
/// Regras de formato:
/// - Valor é válido caso contenha oito caracteres sendo: dia (dígitos de 01 a 31), mês (dígitos de 01 a 12) e ano (dígitos de 2000 a 9999).
///

class Data {    // Lorenzo - 200022610
    private:
        string data;
        bool validar(string);
    public:
///
///@param Valor da data com dia mês e ano.
///
///@throw invalid_argument. Data inválida caso o valor fornecido não esteja de acordo com as regras de formato da classe.
///
        void setValor (string);
///
/// @return Data válida.
///
        string getValor() const{
            return data;
        }
};

/// Domínio Email.

///
/// Classe Email.
///
/// Regras de formato:
/// - Valor válido é composto por duas partes: parte local (pode ter até 64 caracteres) e parte domínio (pode ter até 255 caracteres).
/// - Os caracteres podem ser alfa numéricos, sendo letras maiúsculas ou minúsculas ou dígitos de 0 a 9, bem como os seguintes caracteres: !#$%&'*+-/=?^_'{|}~
/// - O caractere pode ser ponto (.), desde que não seja o primeiro ou o último caractere e que não ocorra em sequência.
///

class Email {   // Lorenzo - 200022610
    private:
        string email;
        bool validar(string);
    public:
///
///@param Valor do endereço de e-mail.
///
///@throw invalid_argument. E-mail inválido caso o valor fornecido não esteja de acordo com as regras de formato da classe.
///
        void setValor(string);
///
/// @return E-mail válido.
///
        string getValor() const{
            return email;
        }
};

/// Domínio Horário.

///
/// Classe Horario.
///
/// Regras de formato:
/// - Valor é válido caso contenha quatro caracteres sendo os dois primeiros dígitos de 00 a 23 e os dois últimos dígitos deve ser um dos seguintes valores: 00, 15 30 ou 45.
///

class Horario { // Eder - 170140636
    private:
        static const int LIMITE_MIN = 00;
        static const int LIMITE_MAX = 23;
        string horario;
        bool validar(string);
    public:
///
///@param Horario em formato de horas e minutos.
///
///@throw invalid_argument. Horário inválido caso o valor fornecido não esteja de acordo com as regras de formato da classe.
///
        void setValor(string horario);
///
/// @return Horário válido.
///
        string getValor() const{
            return horario;
        }
};

/// Domínio Matrícula.

///
/// Classe Matricula.
///
/// Regras de formato:
/// - Valor é válido caso contenha cinco dígitos de 0 a 9.
/// - Não podem existir dígitos duplicados.
///

class Matricula { // Eder - 170140636
    private:
        string matricula;
        bool validar(string);
    public:
///
///@param Número de matrícula com nove dígitos.
///
///@throw invalid_argument. Número de matrícula inválido caso o valor fornecido não esteja de acordo com as regras de formato da classe.
///
        void setValor(string matricula);
///
/// @return Matrícula válida.
///
        string getValor() const{
            return matricula;
        }
};

/// Domínio Nome.

///
/// Classe Nome.
///
/// Regras de formato:
/// - Valor válido deve conter de 5 a 20 caracteres, sendo letras maiúsculas ou minúsculas de A a Z.
/// - Ponto (.) deve ser precedido por letra.
/// - Pode conter espaço em branco, porém não podem ocorrer espaços em sequência.
/// - Primeira letra de cada termo deve ser maiúscula (A a Z).
///

class Nome {    // Lorenzo - 200022610
    private:
        string nome;
        bool validar(string);
    public:
///
///@param Nome com 5 a 20 caracteres.
///
///@throw invalid_argument. Inválido caso nome fornecido não esteja de acordo com as regras de formato da classe.
///
        void setValor(string);
///
/// @return Nome válido.
///
        string getValor() const{
            return nome;
        }
};

/// Domínio Senha.

///
/// Classe Senha.
///
/// Regras de formato:
/// - Valor válido deve conter oito caracteres, sendo cada caractere letras maiúsculas ou minúsculas de A a Z, dígito de 0 a 9 ou caractere especial.
/// - Os caracteres especiais válidos são: ! @ # $ % & ?
/// - Não podem existir caracteres repetidos.
/// - Deve existir pelo menos uma letra (maiúscula ou minúscula), um dígito ou caractere especial.
///

class Senha { // octavio - 190094087
    private:
        string senha;
        bool validar(string);
    public:
///
///@param Senha com caracteres alfanuméricos e caracteres especiais.
///
///@throw invalid_argument. Senha inválida caso valor fornecido não esteja de acordo com as regras de formato da classe.
///
        void setValor(string);
///
/// @return Senha alfanumérica com caractere especial.
///
        string getValor() const {
            return senha;
        }
};

/// Domínio Telefone.

///
/// Classe Telefone.
///
/// Regras de formato:
/// - Valor válido é composto por onze dígitos, sendo os dois primeiros correspondentes ao código de área.
/// - O código deve ser um dos seguintes: 11, 12, 13, 14, 15, 16, 17, 18, 19, 21, 22, 24, 27, 28, 32, 33, 34, 35, 37, 38, 41, 42, 43, 44, 45, 46, 47, 48, 49, 51, 53, 54, 55, 61, 62, 63, 64, 65, 66, 67, 68, 69, 71, 73, 74, 75, 77, 79, 81, 82, 83, 84, 85, 86, 87, 88, 89, 91, 92, 93, 94, 95, 96, 97, 98, 99.
/// - Os nove últimos dígitos podem ser de 0 a 9.
/// - Não existe número de telefone 000000000.
///

class Telefone {    // Lorenzo - 200022610
    private:
        string telefone;
        bool validar(string);
    public:
///
///@param Número de telefone com código de área.
///
///@throw invalid_argument. Inválido caso valor fornecido não esteja de acordo com as regras de formato da classe.
///
        void setValor(string);
///
/// @return Telefone com código de área.
///
        string getValor() const{
            return telefone;
        }
};

/// Domínio Tipo.

///
/// Classe Tipo.
///
/// Regras de formato:
/// - Valor válido deve uma das seguintes palavras: auto, comédia, drama, farsa, melodrama, monólogo, musical, ópera, revista.
///

class Tipo { // Eder - 170140636
    private:
        string tipo;
        bool validar(string);
    public:
///
///@param Valor Tipo.
///
///@throw invalid_argument. Inválido caso o tipo fornecido não esteja de acordo com as regras de formato da classe.
///
        void setValor(string tipo);
///
/// @return Tipo.
///
        string getValor() const{
            return tipo;
        }
};

#endif // ENTIDADES_H_INCLUDED
