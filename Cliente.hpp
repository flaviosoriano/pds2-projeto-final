#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <vector>

using namespace std;

class Cliente
{
private:
     string _nome;
     string _cpf;
     int _pontos_fidelidade;
     //vector<Filme*> _filmes_alugados;
public:
     Cliente(string nome, string cpf);
     ~Cliente();

     void MostrarInfo();


     void AdicionarPontos(int pontos);
     void ZerarPontos();
     int RetornarPontos();

};

#endif