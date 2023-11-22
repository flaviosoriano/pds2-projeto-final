#include "cliente.hpp"

Cliente::Cliente(string nome, string cpf) : _nome(nome), _cpf(cpf), _pontos_fidelidade(0){}

Cliente::~Cliente(){}

void Cliente::MostrarInfo(){
     cout << "Nome: " << this->_nome << endl;
     cout << "CPF: " << this->_cpf << endl;
     cout << "Pontos: " << this->_pontos_fidelidade << endl;
     //Filmes alugados
}

void Cliente::AdicionarPontos(int pontos){
     this->_pontos_fidelidade += pontos;
}
void Cliente::ZerarPontos(){
     this->_pontos_fidelidade = 0;
}
int Cliente::RetornarPontos(){
     return(this->_pontos_fidelidade);
}

string Cliente::getNome(){
     return this->_nome;
}

string Cliente::getCpf(){
     return this->_cpf;
}

vector<Filme*> Cliente::getFilmesAlugados(){
     return this->_filmes_alugados;
}