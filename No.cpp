#include "Leitor.h"
#include <iostream>
#include <fstream>
#include <string>
#include "../Grafo.h"
using namespace std;

No::~No()
{
    //dtor
}

No * No::getProxNo(){

 return proxNo;
}
