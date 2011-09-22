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
#include <osg/Fog>
#include <osg/Geometry>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/PrimitiveSet>
#include <osg/RenderInfo>
#include <osg/StateSet>
#include <osg/Vec3>
#include <osg/Vec4>
#include <osgParticle/PrecipitationEffect>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_VALUE_REFLECTOR(osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell)
	I_DeclaringFile("osgParticle/PrecipitationEffect");
	I_Constructor3(IN, int, in_i, IN, int, in_j, IN, int, in_k,
	               ____Cell__int__int__int,
	               "",
	               "");
	I_PublicMemberProperty(int, i);
	I_PublicMemberProperty(int, j);
	I_PublicMemberProperty(int, k);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime)
	I_DeclaringFile("osgParticle/PrecipitationEffect");
	I_Constructor0(____DepthMatrixStartTime,
	               "",
	               "");
	I_PublicMemberProperty(float, depth);
	I_PublicMemberProperty(float, startTime);
	I_PublicMemberProperty(osg::Matrix, modelview);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgParticle::PrecipitationEffect::PrecipitationDrawable::LessFunctor)
	I_DeclaringFile("osgParticle/PrecipitationEffect");
	I_Constructor0(____LessFunctor,
	               "",
	               "");
END_REFLECTOR

TYPE_NAME_ALIAS(std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell COMMA  osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >, osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap)

BEGIN_OBJECT_REFLECTOR(osgParticle::PrecipitationEffect::PrecipitationDrawable)
	I_DeclaringFile("osgParticle/PrecipitationEffect");
	I_BaseType(osg::Drawable);
	I_Constructor0(____PrecipitationDrawable,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgParticle::PrecipitationEffect::PrecipitationDrawable &, copy, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____PrecipitationDrawable__C5_PrecipitationDrawable_R1__C5_osg_CopyOp_R1,
	                           "",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, supports, IN, const osg::PrimitiveFunctor &, x,
	          Properties::VIRTUAL,
	          __bool__supports__C5_osg_PrimitiveFunctor_R1,
	          "Return true if the Drawable subclass supports accept(PrimitiveFunctor&). ",
	          "");
	I_Method1(void, accept, IN, osg::PrimitiveFunctor &, x,
	          Properties::VIRTUAL,
	          __void__accept__osg_PrimitiveFunctor_R1,
	          "Accept a PrimitiveFunctor and call its methods to tell it about the internal primitives that this Drawable has. ",
	          "return true if functor handled by drawable, return false on failure of drawable to generate functor calls. Note, PrimtiveFunctor only provides const access of the primitives, as primitives may be procedurally generated so one cannot modify it. ");
	I_Method1(bool, supports, IN, const osg::PrimitiveIndexFunctor &, x,
	          Properties::VIRTUAL,
	          __bool__supports__C5_osg_PrimitiveIndexFunctor_R1,
	          "Return true if the Drawable subclass supports accept(PrimitiveIndexFunctor&). ",
	          "");
	I_Method1(void, accept, IN, osg::PrimitiveIndexFunctor &, x,
	          Properties::VIRTUAL,
	          __void__accept__osg_PrimitiveIndexFunctor_R1,
	          "Accept a PrimitiveIndexFunctor and call its methods to tell it about the internal primitives that this Drawable has. ",
	          "return true if functor handled by drawable, return false on failure of drawable to generate functor calls. Note, PrimtiveIndexFunctor only provide const access of the primitives, as primitives may be procedurally generated so one cannot modify it. ");
	I_Method1(void, setRequiresPreviousMatrix, IN, bool, flag,
	          Properties::NON_VIRTUAL,
	          __void__setRequiresPreviousMatrix__bool,
	          "",
	          "");
	I_Method0(bool, getRequiresPreviousMatrix,
	          Properties::NON_VIRTUAL,
	          __bool__getRequiresPreviousMatrix,
	          "",
	          "");
	I_Method1(void, setGeometry, IN, osg::Geometry *, geom,
	          Properties::NON_VIRTUAL,
	          __void__setGeometry__osg_Geometry_P1,
	          "",
	          "");
	I_Method0(osg::Geometry *, getGeometry,
	          Properties::NON_VIRTUAL,
	          __osg_Geometry_P1__getGeometry,
	          "",
	          "");
	I_Method0(const osg::Geometry *, getGeometry,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Geometry_P1__getGeometry,
	          "",
	          "");
	I_Method1(void, setDrawType, IN, GLenum, type,
	          Properties::NON_VIRTUAL,
	          __void__setDrawType__GLenum,
	          "",
	          "");
	I_Method0(GLenum, getDrawType,
	          Properties::NON_VIRTUAL,
	          __GLenum__getDrawType,
	          "",
	          "");
	I_Method1(void, setNumberOfVertices, IN, unsigned int, numVertices,
	          Properties::NON_VIRTUAL,
	          __void__setNumberOfVertices__unsigned_int,
	          "",
	          "");
	I_Method0(unsigned int, getNumberOfVertices,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getNumberOfVertices,
	          "",
	          "");
	I_Method1(void, drawImplementation, IN, osg::RenderInfo &, renderInfo,
	          Properties::VIRTUAL,
	          __void__drawImplementation__osg_RenderInfo_R1,
	          "drawImplementation(RenderInfo&) is a pure virtual method for the actual implementation of OpenGL drawing calls, such as vertex arrays and primitives, that must be implemented in concrete subclasses of the Drawable base class, examples include osg::Geometry and osg::ShapeDrawable. ",
	          " param renderInfo The osg::RenderInfo object that encapsulates the current rendering information including the osg::State OpenGL state for the current graphics context.  ");
	I_Method0(osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap &, getCurrentCellMatrixMap,
	          Properties::NON_VIRTUAL,
	          __CellMatrixMap_R1__getCurrentCellMatrixMap,
	          "",
	          "");
	I_Method0(osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap &, getPreviousCellMatrixMap,
	          Properties::NON_VIRTUAL,
	          __CellMatrixMap_R1__getPreviousCellMatrixMap,
	          "",
	          "");
	I_Method0(void, newFrame,
	          Properties::NON_VIRTUAL,
	          __void__newFrame,
	          "",
	          "");
	I_SimpleProperty(osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap &, CurrentCellMatrixMap, 
	                 __CellMatrixMap_R1__getCurrentCellMatrixMap, 
	                 0);
	I_SimpleProperty(GLenum, DrawType, 
	                 __GLenum__getDrawType, 
	                 __void__setDrawType__GLenum);
	I_SimpleProperty(osg::Geometry *, Geometry, 
	                 __osg_Geometry_P1__getGeometry, 
	                 __void__setGeometry__osg_Geometry_P1);
	I_SimpleProperty(unsigned int, NumberOfVertices, 
	                 __unsigned_int__getNumberOfVertices, 
	                 __void__setNumberOfVertices__unsigned_int);
	I_SimpleProperty(osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap &, PreviousCellMatrixMap, 
	                 __CellMatrixMap_R1__getPreviousCellMatrixMap, 
	                 0);
	I_SimpleProperty(bool, RequiresPreviousMatrix, 
	                 __bool__getRequiresPreviousMatrix, 
	                 __void__setRequiresPreviousMatrix__bool);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgParticle::PrecipitationEffect)
	I_DeclaringFile("osgParticle/PrecipitationEffect");
	I_BaseType(osg::Node);
	I_Constructor0(____PrecipitationEffect,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgParticle::PrecipitationEffect &, copy, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____PrecipitationEffect__C5_PrecipitationEffect_R1__C5_osg_CopyOp_R1,
	                           "",
	                           "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the node's library. ",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the node's class type. ",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "return true if this and obj are of the same kind of object. ",
	          "");
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osg_NodeVisitor_R1,
	          "Visitor Pattern : calls the apply method of a NodeVisitor with this node's type. ",
	          "");
	I_Method1(void, traverse, IN, osg::NodeVisitor &, x,
	          Properties::VIRTUAL,
	          __void__traverse__osg_NodeVisitor_R1,
	          "Traverse downwards : calls children's accept method with NodeVisitor. ",
	          "");
	I_Method1(void, rain, IN, float, intensity,
	          Properties::NON_VIRTUAL,
	          __void__rain__float,
	          "Set all the parameters to create an rain effect of specified intensity. ",
	          "");
	I_Method1(void, snow, IN, float, intensity,
	          Properties::NON_VIRTUAL,
	          __void__snow__float,
	          "Set all the parameters to create an snow effect of specified intensity. ",
	          "");
	I_Method1(void, setMaximumParticleDensity, IN, float, density,
	          Properties::NON_VIRTUAL,
	          __void__setMaximumParticleDensity__float,
	          "",
	          "");
	I_Method0(float, setMaximumParticleDensity,
	          Properties::NON_VIRTUAL,
	          __float__setMaximumParticleDensity,
	          "",
	          "");
	I_Method1(void, setWind, IN, const osg::Vec3 &, wind,
	          Properties::NON_VIRTUAL,
	          __void__setWind__C5_osg_Vec3_R1,
	          "",
	          "");
	I_Method0(const osg::Vec3 &, getWind,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec3_R1__getWind,
	          "",
	          "");
	I_Method1(void, setPosition, IN, const osg::Vec3 &, position,
	          Properties::NON_VIRTUAL,
	          __void__setPosition__C5_osg_Vec3_R1,
	          "",
	          "");
	I_Method0(const osg::Vec3 &, getPosition,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec3_R1__getPosition,
	          "",
	          "");
	I_Method1(void, setCellSize, IN, const osg::Vec3 &, cellSize,
	          Properties::NON_VIRTUAL,
	          __void__setCellSize__C5_osg_Vec3_R1,
	          "",
	          "");
	I_Method0(const osg::Vec3 &, getCellSize,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec3_R1__getCellSize,
	          "",
	          "");
	I_Method1(void, setParticleSpeed, IN, float, particleSpeed,
	          Properties::NON_VIRTUAL,
	          __void__setParticleSpeed__float,
	          "",
	          "");
	I_Method0(float, getParticleSpeed,
	          Properties::NON_VIRTUAL,
	          __float__getParticleSpeed,
	          "",
	          "");
	I_Method1(void, setParticleSize, IN, float, particleSize,
	          Properties::NON_VIRTUAL,
	          __void__setParticleSize__float,
	          "",
	          "");
	I_Method0(float, getParticleSize,
	          Properties::NON_VIRTUAL,
	          __float__getParticleSize,
	          "",
	          "");
	I_Method1(void, setParticleColor, IN, const osg::Vec4 &, color,
	          Properties::NON_VIRTUAL,
	          __void__setParticleColor__C5_osg_Vec4_R1,
	          "",
	          "");
	I_Method0(const osg::Vec4 &, getParticleColor,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec4_R1__getParticleColor,
	          "",
	          "");
	I_Method1(void, setNearTransition, IN, float, nearTransition,
	          Properties::NON_VIRTUAL,
	          __void__setNearTransition__float,
	          "",
	          "");
	I_Method0(float, getNearTransition,
	          Properties::NON_VIRTUAL,
	          __float__getNearTransition,
	          "",
	          "");
	I_Method1(void, setFarTransition, IN, float, farTransition,
	          Properties::NON_VIRTUAL,
	          __void__setFarTransition__float,
	          "",
	          "");
	I_Method0(float, getFarTransition,
	          Properties::NON_VIRTUAL,
	          __float__getFarTransition,
	          "",
	          "");
	I_Method1(void, setUseFarLineSegments, IN, bool, useFarLineSegments,
	          Properties::NON_VIRTUAL,
	          __void__setUseFarLineSegments__bool,
	          "",
	          "");
	I_Method0(bool, getUseFarLineSegments,
	          Properties::NON_VIRTUAL,
	          __bool__getUseFarLineSegments,
	          "",
	          "");
	I_Method1(void, setFog, IN, osg::Fog *, fog,
	          Properties::NON_VIRTUAL,
	          __void__setFog__osg_Fog_P1,
	          "",
	          "");
	I_Method0(osg::Fog *, getFog,
	          Properties::NON_VIRTUAL,
	          __osg_Fog_P1__getFog,
	          "",
	          "");
	I_Method0(const osg::Fog *, getFog,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Fog_P1__getFog,
	          "",
	          "");
	I_Method0(osg::Geometry *, getQuadGeometry,
	          Properties::NON_VIRTUAL,
	          __osg_Geometry_P1__getQuadGeometry,
	          "",
	          "");
	I_Method0(osg::StateSet *, getQuadStateSet,
	          Properties::NON_VIRTUAL,
	          __osg_StateSet_P1__getQuadStateSet,
	          "",
	          "");
	I_Method0(osg::Geometry *, getLineGeometry,
	          Properties::NON_VIRTUAL,
	          __osg_Geometry_P1__getLineGeometry,
	          "",
	          "");
	I_Method0(osg::StateSet *, getLineStateSet,
	          Properties::NON_VIRTUAL,
	          __osg_StateSet_P1__getLineStateSet,
	          "",
	          "");
	I_Method0(osg::Geometry *, getPointGeometry,
	          Properties::NON_VIRTUAL,
	          __osg_Geometry_P1__getPointGeometry,
	          "",
	          "");
	I_Method0(osg::StateSet *, getPointStateSet,
	          Properties::NON_VIRTUAL,
	          __osg_StateSet_P1__getPointStateSet,
	          "",
	          "");
	I_ProtectedMethod1(void, compileGLObjects, IN, osg::RenderInfo &, renderInfo,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __void__compileGLObjects__osg_RenderInfo_R1,
	                   "",
	                   "");
	I_ProtectedMethod0(void, update,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__update,
	                   "",
	                   "");
	I_ProtectedMethod4(void, createGeometry, IN, unsigned int, numParticles, IN, osg::Geometry *, quad_geometry, IN, osg::Geometry *, line_geometry, IN, osg::Geometry *, point_geometry,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__createGeometry__unsigned_int__osg_Geometry_P1__osg_Geometry_P1__osg_Geometry_P1,
	                   "",
	                   "");
	I_ProtectedMethod1(void, setUpGeometries, IN, unsigned int, numParticles,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__setUpGeometries__unsigned_int,
	                   "",
	                   "");


	I_SimpleProperty(const osg::Vec3 &, CellSize, 
	                 __C5_osg_Vec3_R1__getCellSize, 
	                 __void__setCellSize__C5_osg_Vec3_R1);
	I_SimpleProperty(float, FarTransition, 
	                 __float__getFarTransition, 
	                 __void__setFarTransition__float);
	I_SimpleProperty(osg::Fog *, Fog, 
	                 __osg_Fog_P1__getFog, 
	                 __void__setFog__osg_Fog_P1);
	I_SimpleProperty(osg::Geometry *, LineGeometry, 
	                 __osg_Geometry_P1__getLineGeometry, 
	                 0);
	I_SimpleProperty(osg::StateSet *, LineStateSet, 
	                 __osg_StateSet_P1__getLineStateSet, 
	                 0);
	I_SimpleProperty(float, MaximumParticleDensity, 
	                 0, 
	                 __void__setMaximumParticleDensity__float);
	I_SimpleProperty(float, NearTransition, 
	                 __float__getNearTransition, 
	                 __void__setNearTransition__float);
	I_SimpleProperty(const osg::Vec4 &, ParticleColor, 
	                 __C5_osg_Vec4_R1__getParticleColor, 
	                 __void__setParticleColor__C5_osg_Vec4_R1);
	I_SimpleProperty(float, ParticleSize, 
	                 __float__getParticleSize, 
	                 __void__setParticleSize__float);
	I_SimpleProperty(float, ParticleSpeed, 
	                 __float__getParticleSpeed, 
	                 __void__setParticleSpeed__float);
	I_SimpleProperty(osg::Geometry *, PointGeometry, 
	                 __osg_Geometry_P1__getPointGeometry, 
	                 0);
	I_SimpleProperty(osg::StateSet *, PointStateSet, 
	                 __osg_StateSet_P1__getPointStateSet, 
	                 0);
	I_SimpleProperty(const osg::Vec3 &, Position, 
	                 __C5_osg_Vec3_R1__getPosition, 
	                 __void__setPosition__C5_osg_Vec3_R1);
	I_SimpleProperty(osg::Geometry *, QuadGeometry, 
	                 __osg_Geometry_P1__getQuadGeometry, 
	                 0);
	I_SimpleProperty(osg::StateSet *, QuadStateSet, 
	                 __osg_StateSet_P1__getQuadStateSet, 
	                 0);
	I_SimpleProperty(bool, UseFarLineSegments, 
	                 __bool__getUseFarLineSegments, 
	                 __void__setUseFarLineSegments__bool);
	I_SimpleProperty(const osg::Vec3 &, Wind, 
	                 __C5_osg_Vec3_R1__getWind, 
	                 __void__setWind__C5_osg_Vec3_R1);
END_REFLECTOR

STD_MAP_REFLECTOR(std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell COMMA  osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >)

