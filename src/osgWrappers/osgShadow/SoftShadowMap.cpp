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
#include <osg/Object>
#include <osgShadow/SoftShadowMap>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgShadow::SoftShadowMap)
	I_DeclaringFile("osgShadow/SoftShadowMap");
	I_BaseType(osgShadow::ShadowMap);
	I_Constructor0(____SoftShadowMap,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgShadow::SoftShadowMap &, es, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____SoftShadowMap__C5_SoftShadowMap_R1__C5_osg_CopyOp_R1,
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
	I_Method1(void, setSoftnessWidth, IN, const float, softnessWidth,
	          Properties::NON_VIRTUAL,
	          __void__setSoftnessWidth__C5_float,
	          "Set the values for width of the soft penumbra the shader will use. ",
	          "Zero is for hard shadow (no penumbra). 0.01 is already very soft penumbra. Default is 0.005. ");
	I_Method0(float, getSoftnessWidth,
	          Properties::NON_VIRTUAL,
	          __float__getSoftnessWidth,
	          "Get the value used for width of the soft penumbra in the shader. ",
	          "");
	I_Method1(void, setJitteringScale, IN, const float, jitteringScale,
	          Properties::NON_VIRTUAL,
	          __void__setJitteringScale__C5_float,
	          "Set the values for jittering scale the shader will use. ",
	          "Zero is no jittering (i.e. see the banding in penumbra) High values (>64) cause 'pixelization' of the penumbra. Usually but not necessarily power of two number. Default is 32. ");
	I_Method0(float, getJitteringScale,
	          Properties::NON_VIRTUAL,
	          __float__getJitteringScale,
	          "Get the value used for jittering scale in the shader. ",
	          "");
	I_Method1(void, setJitterTextureUnit, IN, unsigned int, jitterTextureUnit,
	          Properties::NON_VIRTUAL,
	          __void__setJitterTextureUnit__unsigned_int,
	          "Set the texture unit that the jitter texture will be applied on. ",
	          "");
	I_Method0(unsigned int, getJitterTextureUnit,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getJitterTextureUnit,
	          "Get the texture unit that the jitter texture will be applied on. ",
	          "");
	I_Method1(void, setBias, IN, float, bias,
	          Properties::NON_VIRTUAL,
	          __void__setBias__float,
	          "Add a small bias to the z-value, this can reduce shadow acne problem. ",
	          "This is the same as calling setPolygonOffset(osg::Vec2(bias,0)); Suitable values are 0-0.005 Default is 0. ");
	I_Method0(float, getBias,
	          Properties::NON_VIRTUAL,
	          __float__getBias,
	          "Return the bias value. ",
	          "");
	I_ProtectedMethod0(void, createUniforms,
	                   Properties::VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__createUniforms,
	                   "Create the managed Uniforms. ",
	                   "");
	I_ProtectedMethod0(void, createShaders,
	                   Properties::VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__createShaders,
	                   "",
	                   "");
	I_ProtectedMethod1(void, initJittering, IN, osg::StateSet *, ss,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__initJittering__osg_StateSet_P1,
	                   "",
	                   "");
	I_SimpleProperty(float, Bias, 
	                 __float__getBias, 
	                 __void__setBias__float);
	I_SimpleProperty(unsigned int, JitterTextureUnit, 
	                 __unsigned_int__getJitterTextureUnit, 
	                 __void__setJitterTextureUnit__unsigned_int);
	I_SimpleProperty(float, JitteringScale, 
	                 __float__getJitteringScale, 
	                 0);
	I_SimpleProperty(float, SoftnessWidth, 
	                 __float__getSoftnessWidth, 
	                 0);
END_REFLECTOR

