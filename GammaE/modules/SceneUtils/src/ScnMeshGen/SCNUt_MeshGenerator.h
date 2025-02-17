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
// %X% %Q% %Z% %W%

#ifndef SCNUt_MeshGenerator_h
#define SCNUt_MeshGenerator_h 1

// GammaE_E3D
#include "GammaE_E3D.h"
// SCNUt_TriScene
#include "SCNUt_TriScene.h"

class SCNUt_MeshGenerator
{
    public:
        SCNUt_MeshGenerator();

        ~SCNUt_MeshGenerator();

        CGMesh* GenerateMesh(SCNUt_TriScene &Scene);

        // Additional Public Declarations

    protected:
        // Additional Protected Declarations

    private:
        // Additional Private Declarations

    private:                    // Additional Implementation Declarations
};

// Class SCNUt_MeshGenerator

#endif
