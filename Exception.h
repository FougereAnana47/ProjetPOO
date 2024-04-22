#ifndef EXCEPTION_H_
#define EXCEPTION_H_

#include <iostream>

class Exception { };
class EX_ContratDejaSigne : public Exception { };
class EX_PersonneNonValide : public Exception { };

#endif