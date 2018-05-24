//+-----------------------------------------------------------------------------
//| Included files
//+-----------------------------------------------------------------------------
#include "StdAfx.h"
#include "ModelGeosetFace.h"


//+-----------------------------------------------------------------------------
//| Constructor
//+-----------------------------------------------------------------------------
MODEL_GEOSET_FACE::MODEL_GEOSET_FACE()
{
	Index1 = INVALID_INDEX;
	Index2 = INVALID_INDEX;
	Index3 = INVALID_INDEX;
}


//+-----------------------------------------------------------------------------
//| Destructor
//+-----------------------------------------------------------------------------
MODEL_GEOSET_FACE::~MODEL_GEOSET_FACE()
{
	Clear();
}


//+-----------------------------------------------------------------------------
//| Clears the geoset face
//+-----------------------------------------------------------------------------
VOID MODEL_GEOSET_FACE::Clear()
{
	//Empty
}
