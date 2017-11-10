#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <list>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    if(argc < 2)
    {
        cout << "ERRO: Programa deve receber nome de arquivo como parâmetro de entrada.\n";
        return 1;
    }

    string fileName = argv[1];
    string nome = argv[2];
    ifstream file(fileName);
     if (!file.is_open())
    {
        cout << "ERRO: Programa não conseguiu abrir o arquivo '" + fileName + "'.\n";
        return 1;
    }

    map<string,int>dic;
    string line{};
   int count{};
    while (!file.eof())
    {
        getline(file,line);
        
        // Transforma todos caracteres para caixa alta (maiúsculo)
        transform(line.begin(), line.end(), line.begin(), ::toupper);
        // Transforma o argv[2] em maiúsculo.
        transform(nome.begin(), nome.end(), nome.begin(), ::toupper);
        istringstream in(line);
        string word;
        while(in >> word){
        	 // Apaga todos caracteres que não são letras nem números
        	word.erase( std::remove_if(word.begin(), word.end(), not1(::ptr_fun((int(*)(int))::isalnum))), word.end() );
            if( !word.empty() )
            {
            	++dic[word];
            	count++;
            }
        }
     }

     for(auto s : dic){
     	if(s.first == nome){
     		  cout << "A palavra " << nome << " acontece " << s.second << " vezes. \n";
     	}
     }
     return 0;
    
}
