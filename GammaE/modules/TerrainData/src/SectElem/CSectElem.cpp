// -----------------------------------------------------------------------------
/*! \class
 *  \brief
 *  \author David M&aacute;rquez de la Cruz
 *  \version 1.5
 *  \date 1999-2009
 *  \par Copyright (c) 1999 David M&aacute;rquez de la Cruz
 *  \par GammaE License
 */
// -----------------------------------------------------------------------------
// CSectElem
#include "SectElem\CSectElem.h"

// Class CSectElem

CSectElem::CSectElem()
{
}

CSectElem::~CSectElem()
{
}

CSectElem & CSectElem::Sum (CSectElem &a, CSectElem &b)
{
    return(*this);
}

CSectElem & CSectElem::Mult (CSectElem &a, CSectElem &b)
{
    return(*this);
}

CSectElem & CSectElem::LinInterpolate (CSectElem &a, CSectElem &b, float fFactor)
{
    return(*this);
}

CSectElem & CSectElem::CosInterpolate (CSectElem &a, CSectElem &b, float fFactor)
{
    return(*this);
}

CSectElem & CSectElem::Clear ()
{
    return(*this);
}

CSectElem & CSectElem::Add (CSectElem &a)
{
    return(*this);
}

CSectElem & CSectElem::Mult (CSectElem &a)
{
    return(*this);
}

CSectElem & CSectElem::Scale (float a)
{
    return(*this);
}

// Additional Declarations
