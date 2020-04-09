// Programa Agenda Prof. G Ferreira -EDI2020-
// Tarea: Agregar atributo email
//        Reempazar for por foreach(C++2011)

#include <iostream>
#include <list>

using namespace std;

class Contacto 
{
    private:
        string nombre;
        int telefono;
        string email;
    
    public:
        Contacto(){}

        ~Contacto(){}

        void setContacto(string nom, int tel, string mail)  
        {
            nombre = nom;
            telefono = tel;
            email = mail;
        }

        string getNombre() 
        {
            return nombre;
        }
        int getTelefono() 
        {
            return telefono;
        }
        string getEmail()
        {
            return email;
        }
     

};

class Agenda 
{
    private:    
        list <Contacto> contactos;
    
    public:
        ~Agenda() {}

        void addContacto(Contacto* nContacto)
        {
            contactos.push_back(*nContacto);
        }

        void listarContactos()
        {
            cout<<"-------------------------"<<endl;
            cout<<"   Agenda de Contactos    "<<endl;
            cout<<"-------------------------"<<endl;

           // list<Contacto>::iterator ite;
           //     for(ite=contactos.begin(); ite != contactos.end(); ite++)

          //   
                for (Contacto contacto : contactos )
                {
                    cout << "Nombre:  " << contacto.getNombre() << endl;
                    cout << "Telefono:  " << contacto.getTelefono() << endl;
                    cout << "Email:   " << contacto.getEmail() << endl;
                }

            cout<<"-------------------------"<<endl;
        }
};

int main() 
{
        Contacto* contacto = new Contacto();
        contacto->setContacto("Celes", 4324324,"direccion@mmm.com" );
        //cout<<contacto->getNombre()<<endl;

        Contacto* contacto2 = new Contacto();
        contacto2->setContacto("Luis", 9399929,"direccion2@mmm.com");

        Agenda* agenda = new Agenda();

        agenda->addContacto(contacto);
        agenda->addContacto(contacto2);

        agenda->listarContactos();

        delete contacto;
        delete agenda;

        cin.ignore();
        cin.get();
        return 0;
}