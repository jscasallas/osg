// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/CopyOp>
#include <osg/Vec3>
#include <osgUtil/HalfWayMapGenerator>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgUtil::HalfWayMapGenerator)
	I_DeclaringFile("osgUtil/HalfWayMapGenerator");
	I_BaseType(osgUtil::CubeMapGenerator);
	I_ConstructorWithDefaults2(IN, const osg::Vec3 &, light_direction, , IN, int, texture_size, 64,
	                           ____HalfWayMapGenerator__C5_osg_Vec3_R1__int,
	                           "",
	                           "");
	I_Constructor2(IN, const osgUtil::HalfWayMapGenerator &, copy, IN, const osg::CopyOp &, copyop,
	               ____HalfWayMapGenerator__C5_HalfWayMapGenerator_R1__C5_osg_CopyOp_R1,
	               "",
	               "");
	I_ProtectedMethod1(osg::Vec4, compute_color, IN, const osg::Vec3 &, R,
	                   Properties::VIRTUAL,
	                   Properties::CONST,
	                   __osg_Vec4__compute_color__C5_osg_Vec3_R1,
	                   "Override this method to define how colors are computed. ",
	                   "The parameter R is the reflection vector, pointing from the center of the cube. The return value should be the RGBA color associated with that reflection ray. ");
END_REFLECTOR
