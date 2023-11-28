//~~~~
// Peter SARRITZU
// SNIR2
// DD/MM/AAAA
//~~~~
#include <iostream> // bibliotheque de gestion des E/S
#include <conio.h>  // gestion de la console (ici _getch())
#include <string>
#include <vector>
#include "ipv6.h"

using namespace std;
//AUTRES

//FONCTION PRINCIPALE
int main()
{
    IPV6 adr("0000:BCDEK:0000:0000:0000:0000:0000:0000");
    //IPV6 adr("0000:0000:0000:0000:0000:0000:0000:0001");
    string simplifie=adr.getAdresse();
    bool oui=adr.getError();
    

    cin.get();
    cin.ignore();
    return EXIT_SUCCESS;
}