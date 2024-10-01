#include "./toCode.h"
#include "toCode.h"

toCode::toCode(gragh g)
{
    this->G = new gragh(g);
}

toCode::~toCode()
{
    delete this->G;
}
