#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>
#include <unordered_set>
using namespace std;

    int hmCedula=1722966650;
    string hmNombreCompleto="Harryson Ariel Montesdeoca Rhea";
    string hmCorreoElectronico="harryson.montesdeoca@epn.edu.ec";
    int hmIntentos=1;
    string hmUsuarioProfe="profe";
    int hmClaveProfe=1234;

    int hmVerificadorCedula=0;
    string hmVerificadorNombreCompleto;
    string hmVerificadorCorreo;
    
    
void hmCombinatoriaNombre_Impar(){
string word = "Haryson AielMtdcRh"; 
  vector<string> combinations;  

  
  for (int i = 0; i < word.length() - 2; ++i) {
    for (int j = i + 1; j < word.length() - 1; ++j) {
      for (int k = j + 1; k < word.length(); ++k) {
        string combination = ""; 
        combination += word[i];
        combination += word[j];
        combination += word[k];
        combinations.push_back(combination); 
      }
    }
  }

  
    cout<<"\nCombinatorias: " <<word << endl;
  for (const string& str : combinations) {
    cout << str << endl;
  }
}
void hmMostrarUsuario()
{
	for (int i = 0; i < hmCorreoElectronico.length(); i++)
	{
    hmCorreoElectronico[i] = tolower(hmCorreoElectronico[i]);
  	}

	for (int i = 0; i < hmNombreCompleto.length(); i++)
	{
    hmNombreCompleto[i] = toupper(hmNombreCompleto[i]);
  	}
	cout<<"\nCEDULA: "<<hmCedula<<endl;
	cout<<"CORREO: "<<hmCorreoElectronico<<endl;
	cout<<"NOMBRE: "<<hmNombreCompleto<<endl;
}

void hmConjuntoSinRepetidosNombre_Impar(){
   string s="Harryson Ariel Montesdeoca Rhea";

  unordered_set<char> char_set;

  for (char c : s) {
    char_set.insert(c);
  }

  for (char c : s) {
    if (char_set.count(c) == 1) { 
      cout << c;
      
      char_set.erase(c); 
      
    }
  }
}


void ppToUpperStr(string str)
{
    for (int x=0; x < str.length(); x++)
        str[x] = toupper(str[x]);
}

int main(void){

    
   
do{
cout<<"Usuario: ";
cin>>hmVerificadorCorreo;
cout<<"Clave  : ";
cin>>hmVerificadorCedula;
cout<<"Nro de intentos: "<<hmIntentos<<endl;
if(((hmVerificadorCorreo=="harryson.montesdeoca@epn.edu.ec")&&(hmVerificadorCedula==1722966650))||((hmVerificadorCorreo=="profe")&&(hmVerificadorCedula==1234))){
    ppToUpperStr(hmVerificadorCorreo);
    cout<<"\nBienvenido "<<ppToUpperStr;
    hmIntentos+=5;    
    
}
hmIntentos++;
if((hmIntentos>3)&&(hmIntentos<5)){
    cout<<"\nLo sentimos tu usuario y clave son incorrectos..!";
    cout.flush();
    cout<<"\nGracias";
    }
}
while(hmIntentos<4);

int hmMenu=0;

cout<<hmVerificadorCorreo<<", selecciona:"<<endl;
cout<<"1. Mostrar Usuario"<<endl;
cout<<"2. Barra de carga"<<endl;
cout<<"3. Combinatoria"<<endl;
cout<<"0. Salir"<<endl;
cout<<"<+>Ingresa Opc: ";cin>>hmMenu;
    if(hmMenu==1){
          hmMostrarUsuario();
      }
  if(hmMenu==2){
      
  }
   if(hmMenu==3){

    cout<<"Cadena Nombre:"<<hmNombreCompleto; 
    cout<<"\nConjunto sin repetidos:";
    hmConjuntoSinRepetidosNombre_Impar();
    cout<<"\nLongitud Cadena: "<<hmNombreCompleto.length();
  
   hmCombinatoriaNombre_Impar();
   }

   if(hmMenu==0){
    return 0;
     }
     //
}
    
