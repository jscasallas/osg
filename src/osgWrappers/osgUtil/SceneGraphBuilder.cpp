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

#include <osg/Node>
#include <osgUtil/SceneGraphBuilder>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_VALUE_REFLECTOR(osgUtil::SceneGraphBuilder)
	I_DeclaringFile("osgUtil/SceneGraphBuilder");
	I_Constructor0(____SceneGraphBuilder,
	               "",
	               "");
	I_Method0(void, PushMatrix,
	          Properties::NON_VIRTUAL,
	          __void__PushMatrix,
	          "",
	          "");
	I_Method0(void, PopMatrix,
	          Properties::NON_VIRTUAL,
	          __void__PopMatrix,
	          "",
	          "");
	I_Method0(void, LoadIdentity,
	          Properties::NON_VIRTUAL,
	          __void__LoadIdentity,
	          "",
	          "");
	I_Method1(void, LoadMatrixd, IN, const GLdouble *, m,
	          Properties::NON_VIRTUAL,
	          __void__LoadMatrixd__C5_GLdouble_P1,
	          "",
	          "");
	I_Method1(void, MultMatrixd, IN, const GLdouble *, m,
	          Properties::NON_VIRTUAL,
	          __void__MultMatrixd__C5_GLdouble_P1,
	          "",
	          "");
	I_Method3(void, Translated, IN, GLdouble, x, IN, GLdouble, y, IN, GLdouble, z,
	          Properties::NON_VIRTUAL,
	          __void__Translated__GLdouble__GLdouble__GLdouble,
	          "",
	          "");
	I_Method3(void, Scaled, IN, GLdouble, x, IN, GLdouble, y, IN, GLdouble, z,
	          Properties::NON_VIRTUAL,
	          __void__Scaled__GLdouble__GLdouble__GLdouble,
	          "",
	          "");
	I_Method4(void, Rotated, IN, GLdouble, angle, IN, GLdouble, x, IN, GLdouble, y, IN, GLdouble, z,
	          Properties::NON_VIRTUAL,
	          __void__Rotated__GLdouble__GLdouble__GLdouble__GLdouble,
	          "",
	          "");
	I_Method2(void, BlendFunc, IN, GLenum, srcFactor, IN, GLenum, dstFactor,
	          Properties::NON_VIRTUAL,
	          __void__BlendFunc__GLenum__GLenum,
	          "",
	          "");
	I_Method1(void, CullFace, IN, GLenum, mode,
	          Properties::NON_VIRTUAL,
	          __void__CullFace__GLenum,
	          "",
	          "");
	I_Method1(void, DepthFunc, IN, GLenum, mode,
	          Properties::NON_VIRTUAL,
	          __void__DepthFunc__GLenum,
	          "",
	          "");
	I_Method1(void, FrontFace, IN, GLenum, mode,
	          Properties::NON_VIRTUAL,
	          __void__FrontFace__GLenum,
	          "",
	          "");
	I_Method2(void, LineStipple, IN, GLint, factor, IN, GLushort, pattern,
	          Properties::NON_VIRTUAL,
	          __void__LineStipple__GLint__GLushort,
	          "",
	          "");
	I_Method1(void, LineWidth, IN, GLfloat, lineWidth,
	          Properties::NON_VIRTUAL,
	          __void__LineWidth__GLfloat,
	          "",
	          "");
	I_Method1(void, PointSize, IN, GLfloat, pointSize,
	          Properties::NON_VIRTUAL,
	          __void__PointSize__GLfloat,
	          "",
	          "");
	I_Method2(void, PolygonMode, IN, GLenum, face, IN, GLenum, mode,
	          Properties::NON_VIRTUAL,
	          __void__PolygonMode__GLenum__GLenum,
	          "",
	          "");
	I_Method2(void, PolygonOffset, IN, GLfloat, factor, IN, GLfloat, units,
	          Properties::NON_VIRTUAL,
	          __void__PolygonOffset__GLfloat__GLfloat,
	          "",
	          "");
	I_Method1(void, PolygonStipple, IN, const GLubyte *, mask,
	          Properties::NON_VIRTUAL,
	          __void__PolygonStipple__C5_GLubyte_P1,
	          "",
	          "");
	I_Method1(void, ShadeModel, IN, GLenum, mode,
	          Properties::NON_VIRTUAL,
	          __void__ShadeModel__GLenum,
	          "",
	          "");
	I_Method1(void, Enable, IN, GLenum, mode,
	          Properties::NON_VIRTUAL,
	          __void__Enable__GLenum,
	          "",
	          "");
	I_Method1(void, Disable, IN, GLenum, mode,
	          Properties::NON_VIRTUAL,
	          __void__Disable__GLenum,
	          "",
	          "");
	I_Method4(void, Color4f, IN, GLfloat, red, IN, GLfloat, green, IN, GLfloat, blue, IN, GLfloat, alpha,
	          Properties::NON_VIRTUAL,
	          __void__Color4f__GLfloat__GLfloat__GLfloat__GLfloat,
	          "",
	          "");
	I_Method1(void, Color4fv, IN, GLfloat *, c,
	          Properties::NON_VIRTUAL,
	          __void__Color4fv__GLfloat_P1,
	          "",
	          "");
	I_Method3(void, Vertex3f, IN, GLfloat, x, IN, GLfloat, y, IN, GLfloat, z,
	          Properties::NON_VIRTUAL,
	          __void__Vertex3f__GLfloat__GLfloat__GLfloat,
	          "",
	          "");
	I_Method1(void, Vertex3fv, IN, GLfloat *, v,
	          Properties::NON_VIRTUAL,
	          __void__Vertex3fv__GLfloat_P1,
	          "",
	          "");
	I_Method3(void, Normal3f, IN, GLfloat, x, IN, GLfloat, y, IN, GLfloat, z,
	          Properties::NON_VIRTUAL,
	          __void__Normal3f__GLfloat__GLfloat__GLfloat,
	          "",
	          "");
	I_Method1(void, Normal3fv, IN, GLfloat *, n,
	          Properties::NON_VIRTUAL,
	          __void__Normal3fv__GLfloat_P1,
	          "",
	          "");
	I_Method1(void, TexCoord1f, IN, GLfloat, x,
	          Properties::NON_VIRTUAL,
	          __void__TexCoord1f__GLfloat,
	          "",
	          "");
	I_Method1(void, TexCoord1fv, IN, GLfloat *, tc,
	          Properties::NON_VIRTUAL,
	          __void__TexCoord1fv__GLfloat_P1,
	          "",
	          "");
	I_Method2(void, TexCoord2f, IN, GLfloat, x, IN, GLfloat, y,
	          Properties::NON_VIRTUAL,
	          __void__TexCoord2f__GLfloat__GLfloat,
	          "",
	          "");
	I_Method1(void, TexCoord2fv, IN, GLfloat *, tc,
	          Properties::NON_VIRTUAL,
	          __void__TexCoord2fv__GLfloat_P1,
	          "",
	          "");
	I_Method3(void, TexCoord3f, IN, GLfloat, x, IN, GLfloat, y, IN, GLfloat, z,
	          Properties::NON_VIRTUAL,
	          __void__TexCoord3f__GLfloat__GLfloat__GLfloat,
	          "",
	          "");
	I_Method1(void, TexCoord3fv, IN, GLfloat *, tc,
	          Properties::NON_VIRTUAL,
	          __void__TexCoord3fv__GLfloat_P1,
	          "",
	          "");
	I_Method4(void, TexCoord4f, IN, GLfloat, x, IN, GLfloat, y, IN, GLfloat, z, IN, GLfloat, w,
	          Properties::NON_VIRTUAL,
	          __void__TexCoord4f__GLfloat__GLfloat__GLfloat__GLfloat,
	          "",
	          "");
	I_Method1(void, TexCoord4fv, IN, GLfloat *, tc,
	          Properties::NON_VIRTUAL,
	          __void__TexCoord4fv__GLfloat_P1,
	          "",
	          "");
	I_Method1(void, Begin, IN, GLenum, mode,
	          Properties::NON_VIRTUAL,
	          __void__Begin__GLenum,
	          "",
	          "");
	I_Method0(void, End,
	          Properties::NON_VIRTUAL,
	          __void__End,
	          "",
	          "");
	I_Method1(void, QuadricDrawStyle, IN, GLenum, aDrawStyle,
	          Properties::NON_VIRTUAL,
	          __void__QuadricDrawStyle__GLenum,
	          "",
	          "");
	I_Method1(void, QuadricNormals, IN, GLenum, aNormals,
	          Properties::NON_VIRTUAL,
	          __void__QuadricNormals__GLenum,
	          "",
	          "");
	I_Method1(void, QuadricOrientation, IN, GLenum, aOrientation,
	          Properties::NON_VIRTUAL,
	          __void__QuadricOrientation__GLenum,
	          "",
	          "");
	I_Method1(void, QuadricTexture, IN, GLboolean, aTexture,
	          Properties::NON_VIRTUAL,
	          __void__QuadricTexture__GLboolean,
	          "",
	          "");
	I_Method5(void, Cylinder, IN, GLfloat, base, IN, GLfloat, top, IN, GLfloat, height, IN, GLint, slices, IN, GLint, stacks,
	          Properties::NON_VIRTUAL,
	          __void__Cylinder__GLfloat__GLfloat__GLfloat__GLint__GLint,
	          "",
	          "");
	I_Method4(void, Disk, IN, GLfloat, inner, IN, GLfloat, outer, IN, GLint, slices, IN, GLint, loops,
	          Properties::NON_VIRTUAL,
	          __void__Disk__GLfloat__GLfloat__GLint__GLint,
	          "",
	          "");
	I_Method6(void, PartialDisk, IN, GLfloat, inner, IN, GLfloat, outer, IN, GLint, slices, IN, GLint, loops, IN, GLfloat, start, IN, GLfloat, sweep,
	          Properties::NON_VIRTUAL,
	          __void__PartialDisk__GLfloat__GLfloat__GLint__GLint__GLfloat__GLfloat,
	          "",
	          "");
	I_Method3(void, Sphere, IN, GLfloat, radius, IN, GLint, slices, IN, GLint, stacks,
	          Properties::NON_VIRTUAL,
	          __void__Sphere__GLfloat__GLint__GLint,
	          "",
	          "");
	I_Method0(osg::Node *, getScene,
	          Properties::NON_VIRTUAL,
	          __osg_Node_P1__getScene,
	          "",
	          "");
	I_Method0(osg::Node *, takeScene,
	          Properties::NON_VIRTUAL,
	          __osg_Node_P1__takeScene,
	          "",
	          "");
	I_ProtectedMethod0(void, matrixChanged,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__matrixChanged,
	                   "",
	                   "");
	I_ProtectedMethod1(void, addAttribute, IN, osg::StateAttribute *, attribute,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__addAttribute__osg_StateAttribute_P1,
	                   "",
	                   "");
	I_ProtectedMethod2(void, addMode, IN, GLenum, mode, IN, bool, enabled,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__addMode__GLenum__bool,
	                   "",
	                   "");
	I_ProtectedMethod2(void, addTextureAttribute, IN, unsigned int, unit, IN, osg::StateAttribute *, attribute,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__addTextureAttribute__unsigned_int__osg_StateAttribute_P1,
	                   "",
	                   "");
	I_ProtectedMethod3(void, addTextureMode, IN, unsigned int, unit, IN, GLenum, mode, IN, bool, enabled,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__addTextureMode__unsigned_int__GLenum__bool,
	                   "",
	                   "");
	I_ProtectedMethod1(void, addShape, IN, osg::Shape *, shape,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__addShape__osg_Shape_P1,
	                   "",
	                   "");
	I_ProtectedMethod1(void, addDrawable, IN, osg::Drawable *, drawable,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__addDrawable__osg_Drawable_P1,
	                   "",
	                   "");
	I_ProtectedMethod0(void, newGeometry,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__newGeometry,
	                   "",
	                   "");
	I_ProtectedMethod0(void, allocateGeometry,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__allocateGeometry,
	                   "",
	                   "");
	I_ProtectedMethod0(void, completeGeometry,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__completeGeometry,
	                   "",
	                   "");
	I_ProtectedMethod0(void, allocateStateSet,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__allocateStateSet,
	                   "",
	                   "");
	I_SimpleProperty(osg::Node *, Scene, 
	                 __osg_Node_P1__getScene, 
	                 0);
END_REFLECTOR

