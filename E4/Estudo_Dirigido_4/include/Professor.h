#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Pessoa.h"

class Professor : public Pessoa
{
    public:
        static unsigned contProfessor;
        Professor(unsigned Nu_Siape, string Ds_Titulo,
                  string Local_Gabinete, string Nu_Telefone,
                  string En_Email, string En_Web,
                  string Ic_Classe, Pessoa pessoa);
        virtual ~Professor() {};

        unsigned Get_Nu_SIAPE() { return _Nu_SIAPE; }
        void Set_Nu_SIAPE(unsigned val) { _Nu_SIAPE = val; }
        string Get_Ds_Titulo() { return _Ds_Titulo; }
        void Set_Ds_Titulo(string val) { _Ds_Titulo = val; }
        string Get_Local_Gabinete() { return _Local_Gabinete; }
        void Set_Local_Gabinete(string val) { _Local_Gabinete = val; }
        string Get_Nu_Telefone() { return _Nu_Telefone; }
        void Set_Nu_Telefone(string val) { _Nu_Telefone = val; }
        string Get_En_Email() { return _En_Email; }
        void Set_En_Email(string val) { _En_Email = val; }
        string Get_En_Web() { return _En_Web; }
        void Set_En_Web(string val) { _En_Web = val; }
        unsigned Get_Cd_Professor() { return GetCd_Pessoa(); }
        void Set_Cd_Professor(unsigned val) { _Cd_Professor = val; }
        string Get_Ic_Classe() { return _Ic_Classe; }
        void Set_Ic_Classe(string val) { _Ic_Classe = val; }



    private:
        unsigned _Nu_SIAPE;
        string _Ds_Titulo;
        string _Local_Gabinete;
        string _Nu_Telefone;
        string _En_Email;
        string _En_Web;
        unsigned _Cd_Professor;
        string _Ic_Classe;
};

#endif // PROFESSOR_H