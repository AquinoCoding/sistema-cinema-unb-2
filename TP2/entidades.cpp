#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED
#include <stdexcept>

using namespace std;

/// Dom�nio Capacidade.

///
/// Classe Capacidade.
///
/// Regras de formato:
/// - Valor � valido caso seja igual a um dos seguintes valores: 100, 200, 300, 400 ou 500.
///

class Capacidade { // octavio - 190094087
    private:
        float capacidade;
        bool validar(float);
    public:
///
///@param Valor capacidade.
///
///@throw invalid_argument. Capacidade inv�lida caso o valor fornecido n�o seja uma palavra presente nas regras de formato da classe.
///
        void setValor(float);
///
/// @return Capacidade v�lida.
///
        float getValor() const {
            return capacidade;
        }
};

/// Dom�nio Cargo.

///
/// Classe Cargo.
///
/// Regras de formato:
/// - Valor � v�lido caso seja igual a um dos seguintes valores: ator, core�grafo, figurinista, maquiador, sonoplasta ou iluminador.
///

class Cargo { // octavio - 190094087
    private:
        string cargo;
        bool validar(string);
    public:
//
///@param Valor cargo.
///
///@throw invalid_argument. Cargo � inv�lido caso n�o seja palavra presente nas regras de formato da classe.
///
        void setValor(string);
///
/// @return Cargo v�lido.
///
		string getValor() const {
            return cargo;
        }
};

/// Dom�nio Classificac�o.

///
/// Classe Classificacao.
///
/// Regras de formato:
/// - Valor � v�lido caso seja igual a um dos seguintes valores: 10, 12, 14, 16 ou 18.
///

class Classificacao { // octavio - 190094087
    private:
        string classificacao;
        bool validar(string);
    public:
///
///@param Valor classifica�ao.
///
///@throw invalid_argument. Classifica��o � inv�lida caso n�o seja palavra presente nas regras de formato da classe.
///
        void setValor(string);
///
/// @return Classifica��o.
///
        string getValor() const{
            return classificacao;
        }
};

/// Dom�nio C�digo.

///
/// Classe Codigo.
///
/// Regras de formato:
/// - Valor � v�lido caso contenha seis caracteres sendo os dois primeiros letras mai�sculas e os quatro �ltimos d�gitos de 0 a 9.
///

class Codigo {  // Lorenzo - 200022610
    private:
        string codigo;
        bool validar(string);
    public:
///
///@param Valor codigo.
///
///@throw invalid_argument. C�digo inv�lido caso o valor fornecido n�o esteja de acordo com as regras de formato.
///
        void setValor(string);
///
/// @return C�digo v�lido.
///
        string getValor() const{
            return codigo;
            }
};

/// Dom�nio Data.

///
/// Classe Data: composta por dia, m�s e ano.
///
/// Regras de formato:
/// - Valor � v�lido caso contenha oito caracteres sendo: dia (d�gitos de 01 a 31), m�s (d�gitos de 01 a 12) e ano (d�gitos de 2000 a 9999).
///

class Data {    // Lorenzo - 200022610
    private:
        string data;
        bool validar(string);
    public:
///
///@param Valor da data com dia m�s e ano.
///
///@throw invalid_argument. Data inv�lida caso o valor fornecido n�o esteja de acordo com as regras de formato da classe.
///
        void setValor (string);
///
/// @return Data v�lida.
///
        string getValor() const{
            return data;
        }
};

/// Dom�nio Email.

///
/// Classe Email.
///
/// Regras de formato:
/// - Valor v�lido � composto por duas partes: parte local (pode ter at� 64 caracteres) e parte dom�nio (pode ter at� 255 caracteres).
/// - Os caracteres podem ser alfa num�ricos, sendo letras mai�sculas ou min�sculas ou d�gitos de 0 a 9, bem como os seguintes caracteres: !#$%&'*+-/=?^_'{|}~
/// - O caractere pode ser ponto (.), desde que n�o seja o primeiro ou o �ltimo caractere e que n�o ocorra em sequ�ncia.
///

class Email {   // Lorenzo - 200022610
    private:
        string email;
        bool validar(string);
    public:
///
///@param Valor do endere�o de e-mail.
///
///@throw invalid_argument. E-mail inv�lido caso o valor fornecido n�o esteja de acordo com as regras de formato da classe.
///
        void setValor(string);
///
/// @return E-mail v�lido.
///
        string getValor() const{
            return email;
        }
};

/// Dom�nio Hor�rio.

///
/// Classe Horario.
///
/// Regras de formato:
/// - Valor � v�lido caso contenha quatro caracteres sendo os dois primeiros d�gitos de 00 a 23 e os dois �ltimos d�gitos deve ser um dos seguintes valores: 00, 15 30 ou 45.
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
///@throw invalid_argument. Hor�rio inv�lido caso o valor fornecido n�o esteja de acordo com as regras de formato da classe.
///
        void setValor(string horario);
///
/// @return Hor�rio v�lido.
///
        string getValor() const{
            return horario;
        }
};

/// Dom�nio Matr�cula.

///
/// Classe Matricula.
///
/// Regras de formato:
/// - Valor � v�lido caso contenha cinco d�gitos de 0 a 9.
/// - N�o podem existir d�gitos duplicados.
///

class Matricula { // Eder - 170140636
    private:
        string matricula;
        bool validar(string);
    public:
///
///@param N�mero de matr�cula com nove d�gitos.
///
///@throw invalid_argument. N�mero de matr�cula inv�lido caso o valor fornecido n�o esteja de acordo com as regras de formato da classe.
///
        void setValor(string matricula);
///
/// @return Matr�cula v�lida.
///
        string getValor() const{
            return matricula;
        }
};

/// Dom�nio Nome.

///
/// Classe Nome.
///
/// Regras de formato:
/// - Valor v�lido deve conter de 5 a 20 caracteres, sendo letras mai�sculas ou min�sculas de A a Z.
/// - Ponto (.) deve ser precedido por letra.
/// - Pode conter espa�o em branco, por�m n�o podem ocorrer espa�os em sequ�ncia.
/// - Primeira letra de cada termo deve ser mai�scula (A a Z).
///

class Nome {    // Lorenzo - 200022610
    private:
        string nome;
        bool validar(string);
    public:
///
///@param Nome com 5 a 20 caracteres.
///
///@throw invalid_argument. Inv�lido caso nome fornecido n�o esteja de acordo com as regras de formato da classe.
///
        void setValor(string);
///
/// @return Nome v�lido.
///
        string getValor() const{
            return nome;
        }
};

/// Dom�nio Senha.

///
/// Classe Senha.
///
/// Regras de formato:
/// - Valor v�lido deve conter oito caracteres, sendo cada caractere letras mai�sculas ou min�sculas de A a Z, d�gito de 0 a 9 ou caractere especial.
/// - Os caracteres especiais v�lidos s�o: ! @ # $ % & ?
/// - N�o podem existir caracteres repetidos.
/// - Deve existir pelo menos uma letra (mai�scula ou min�scula), um d�gito ou caractere especial.
///

class Senha { 
    private:
        string senha;
        bool validar(string);
    public:
///
///@param Senha com caracteres alfanum�ricos e caracteres especiais.
///
///@throw invalid_argument. Senha inv�lida caso valor fornecido n�o esteja de acordo com as regras de formato da classe.
///
        void setValor(string);
///
/// @return Senha alfanum�rica com caractere especial.
///
        string getValor() const {
            return senha;
        }
};

/// Dom�nio Telefone.

///
/// Classe Telefone.
///
/// Regras de formato:
/// - Valor v�lido � composto por onze d�gitos, sendo os dois primeiros correspondentes ao c�digo de �rea.
/// - O c�digo deve ser um dos seguintes: 11, 12, 13, 14, 15, 16, 17, 18, 19, 21, 22, 24, 27, 28, 32, 33, 34, 35, 37, 38, 41, 42, 43, 44, 45, 46, 47, 48, 49, 51, 53, 54, 55, 61, 62, 63, 64, 65, 66, 67, 68, 69, 71, 73, 74, 75, 77, 79, 81, 82, 83, 84, 85, 86, 87, 88, 89, 91, 92, 93, 94, 95, 96, 97, 98, 99.
/// - Os nove �ltimos d�gitos podem ser de 0 a 9.
/// - N�o existe n�mero de telefone 000000000.
///

class Telefone {
    private:
        string telefone;
        bool validar(string);
    public:
///
///@param N�mero de telefone com c�digo de �rea.
///
///@throw invalid_argument. Inv�lido caso valor fornecido n�o esteja de acordo com as regras de formato da classe.
///
        void setValor(string);
///
/// @return Telefone com c�digo de �rea.
///
        string getValor() const{
            return telefone;
        }
};

/// Dom�nio Tipo.

///
/// Classe Tipo.
///
/// Regras de formato:
/// - Valor v�lido deve uma das seguintes palavras: auto, com�dia, drama, farsa, melodrama, mon�logo, musical, �pera, revista.
///

class Tipo { 
    private:
        string tipo;
        bool validar(string);
    public:
///
///@param Valor Tipo.
///
///@throw invalid_argument. Inv�lido caso o tipo fornecido n�o esteja de acordo com as regras de formato da classe.
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