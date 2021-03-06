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
#include <osg/Image>
#include <osg/Object>
#include <osg/State>
#include <osg/StateAttribute>
#include <osg/Texture3D>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osg::Texture3D::Extensions)
	I_DeclaringFile("osg/Texture3D");
	I_BaseType(osg::Referenced);
	I_Constructor1(IN, unsigned int, contextID,
	               Properties::NON_EXPLICIT,
	               ____Extensions__unsigned_int,
	               "",
	               "");
	I_Constructor1(IN, const osg::Texture3D::Extensions &, rhs,
	               Properties::NON_EXPLICIT,
	               ____Extensions__C5_Extensions_R1,
	               "",
	               "");
	I_Method1(void, lowestCommonDenominator, IN, const osg::Texture3D::Extensions &, rhs,
	          Properties::NON_VIRTUAL,
	          __void__lowestCommonDenominator__C5_Extensions_R1,
	          "",
	          "");
	I_Method1(void, setupGLExtensions, IN, unsigned int, contextID,
	          Properties::NON_VIRTUAL,
	          __void__setupGLExtensions__unsigned_int,
	          "",
	          "");
	I_Method1(void, setTexture3DSupported, IN, bool, flag,
	          Properties::NON_VIRTUAL,
	          __void__setTexture3DSupported__bool,
	          "",
	          "");
	I_Method0(bool, isTexture3DSupported,
	          Properties::NON_VIRTUAL,
	          __bool__isTexture3DSupported,
	          "",
	          "");
	I_Method1(void, setTexture3DFast, IN, bool, flag,
	          Properties::NON_VIRTUAL,
	          __void__setTexture3DFast__bool,
	          "",
	          "");
	I_Method0(bool, isTexture3DFast,
	          Properties::NON_VIRTUAL,
	          __bool__isTexture3DFast,
	          "",
	          "");
	I_Method1(void, setMaxTexture3DSize, IN, GLint, maxsize,
	          Properties::NON_VIRTUAL,
	          __void__setMaxTexture3DSize__GLint,
	          "",
	          "");
	I_Method0(GLint, maxTexture3DSize,
	          Properties::NON_VIRTUAL,
	          __GLint__maxTexture3DSize,
	          "",
	          "");
	I_Method10(void, glTexImage3D, IN, GLenum, target, IN, GLint, level, IN, GLenum, internalFormat, IN, GLsizei, width, IN, GLsizei, height, IN, GLsizei, depth, IN, GLint, border, IN, GLenum, format, IN, GLenum, type, IN, const GLvoid *, pixels,
	           Properties::NON_VIRTUAL,
	           __void__glTexImage3D__GLenum__GLint__GLenum__GLsizei__GLsizei__GLsizei__GLint__GLenum__GLenum__C5_GLvoid_P1,
	           "",
	           "");
	I_Method11(void, glTexSubImage3D, IN, GLenum, target, IN, GLint, level, IN, GLint, xoffset, IN, GLint, yoffset, IN, GLint, zoffset, IN, GLsizei, width, IN, GLsizei, height, IN, GLsizei, depth, IN, GLenum, format, IN, GLenum, type, IN, const GLvoid *, pixels,
	           Properties::NON_VIRTUAL,
	           __void__glTexSubImage3D__GLenum__GLint__GLint__GLint__GLint__GLsizei__GLsizei__GLsizei__GLenum__GLenum__C5_GLvoid_P1,
	           "",
	           "");
	I_Method9(void, glCopyTexSubImage3D, IN, GLenum, target, IN, GLint, level, IN, GLint, xoffset, IN, GLint, yoffset, IN, GLint, zoffset, IN, GLint, x, IN, GLint, y, IN, GLsizei, width, IN, GLsizei, height,
	          Properties::NON_VIRTUAL,
	          __void__glCopyTexSubImage3D__GLenum__GLint__GLint__GLint__GLint__GLint__GLint__GLsizei__GLsizei,
	          "",
	          "");
	I_Method0(bool, isCompressedTexImage3DSupported,
	          Properties::NON_VIRTUAL,
	          __bool__isCompressedTexImage3DSupported,
	          "",
	          "");
	I_Method9(void, glCompressedTexImage3D, IN, GLenum, target, IN, GLint, level, IN, GLenum, internalformat, IN, GLsizei, width, IN, GLsizei, height, IN, GLsizei, depth, IN, GLint, border, IN, GLsizei, imageSize, IN, const GLvoid *, data,
	          Properties::NON_VIRTUAL,
	          __void__glCompressedTexImage3D__GLenum__GLint__GLenum__GLsizei__GLsizei__GLsizei__GLint__GLsizei__C5_GLvoid_P1,
	          "",
	          "");
	I_Method0(bool, isCompressedTexSubImage3DSupported,
	          Properties::NON_VIRTUAL,
	          __bool__isCompressedTexSubImage3DSupported,
	          "",
	          "");
	I_Method11(void, glCompressedTexSubImage3D, IN, GLenum, target, IN, GLint, level, IN, GLint, xoffset, IN, GLint, yoffset, IN, GLint, zoffset, IN, GLsizei, width, IN, GLsizei, height, IN, GLsizei, depth, IN, GLenum, format, IN, GLsizei, imageSize, IN, const GLvoid *, data,
	           Properties::NON_VIRTUAL,
	           __void__glCompressedTexSubImage3D__GLenum__GLint__GLint__GLint__GLint__GLsizei__GLsizei__GLsizei__GLenum__GLsizei__C5_GLvoid_P1,
	           "",
	           "");
	I_Method8(void, gluBuild3DMipmaps, IN, GLenum, target, IN, GLint, internalFormat, IN, GLsizei, width, IN, GLsizei, height, IN, GLsizei, depth, IN, GLenum, format, IN, GLenum, type, IN, const GLvoid *, data,
	          Properties::NON_VIRTUAL,
	          __void__gluBuild3DMipmaps__GLenum__GLint__GLsizei__GLsizei__GLsizei__GLenum__GLenum__C5_GLvoid_P1,
	          "",
	          "");






	I_SimpleProperty(GLint, MaxTexture3DSize, 
	                 0, 
	                 __void__setMaxTexture3DSize__GLint);
	I_SimpleProperty(bool, Texture3DFast, 
	                 0, 
	                 __void__setTexture3DFast__bool);
	I_SimpleProperty(bool, Texture3DSupported, 
	                 0, 
	                 __void__setTexture3DSupported__bool);
END_REFLECTOR

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osg::Texture3D::SubloadCallback)
	I_DeclaringFile("osg/Texture3D");
	I_BaseType(osg::Referenced);
	I_Constructor0(____SubloadCallback,
	               "",
	               "");
	I_Method2(void, load, IN, const osg::Texture3D &, texture, IN, osg::State &, state,
	          Properties::PURE_VIRTUAL,
	          __void__load__C5_Texture3D_R1__State_R1,
	          "",
	          "");
	I_Method2(void, subload, IN, const osg::Texture3D &, texture, IN, osg::State &, state,
	          Properties::PURE_VIRTUAL,
	          __void__subload__C5_Texture3D_R1__State_R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::Texture3D)
	I_DeclaringFile("osg/Texture3D");
	I_BaseType(osg::Texture);
	I_Constructor0(____Texture3D,
	               "",
	               "");
	I_Constructor1(IN, osg::Image *, image,
	               Properties::NON_EXPLICIT,
	               ____Texture3D__Image_P1,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::Texture3D &, text, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Texture3D__C5_Texture3D_R1__C5_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an attribute, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an attribute, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "Return true if this and obj are of the same kind of object. ",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "Return the name of the attribute's library. ",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "Return the name of the attribute's class type. ",
	          "");
	I_Method0(osg::StateAttribute::Type, getType,
	          Properties::VIRTUAL,
	          __Type__getType,
	          "Return the Type identifier of the attribute's class type. ",
	          "");
	I_Method1(int, compare, IN, const osg::StateAttribute &, rhs,
	          Properties::VIRTUAL,
	          __int__compare__C5_StateAttribute_R1,
	          "Return -1 if *this < *rhs, 0 if *this==*rhs, 1 if *this>*rhs. ",
	          "");
	I_Method0(GLenum, getTextureTarget,
	          Properties::VIRTUAL,
	          __GLenum__getTextureTarget,
	          "",
	          "");
	I_Method1(void, setImage, IN, osg::Image *, image,
	          Properties::NON_VIRTUAL,
	          __void__setImage__Image_P1,
	          "Sets the texture image. ",
	          "");
	I_Method0(osg::Image *, getImage,
	          Properties::NON_VIRTUAL,
	          __Image_P1__getImage,
	          "Gets the texture image. ",
	          "");
	I_Method0(const osg::Image *, getImage,
	          Properties::NON_VIRTUAL,
	          __C5_Image_P1__getImage,
	          "Gets the const texture image. ",
	          "");
	I_Method1(unsigned int &, getModifiedCount, IN, unsigned int, contextID,
	          Properties::NON_VIRTUAL,
	          __unsigned_int_R1__getModifiedCount__unsigned_int,
	          "",
	          "");
	I_Method2(void, setImage, IN, unsigned, int, IN, osg::Image *, image,
	          Properties::VIRTUAL,
	          __void__setImage__unsigned__Image_P1,
	          "Sets the texture image, ignoring face. ",
	          "");
	I_Method1(osg::Image *, getImage, IN, unsigned, int,
	          Properties::VIRTUAL,
	          __Image_P1__getImage__unsigned,
	          "Gets the texture image, ignoring face. ",
	          "");
	I_Method1(const osg::Image *, getImage, IN, unsigned, int,
	          Properties::VIRTUAL,
	          __C5_Image_P1__getImage__unsigned,
	          "Gets the const texture image, ignoring face. ",
	          "");
	I_Method0(unsigned int, getNumImages,
	          Properties::VIRTUAL,
	          __unsigned_int__getNumImages,
	          "Gets the number of images that can be assigned to the Texture. ",
	          "");
	I_Method3(void, setTextureSize, IN, int, width, IN, int, height, IN, int, depth,
	          Properties::NON_VIRTUAL,
	          __void__setTextureSize__int__int__int,
	          "Sets the texture width, height, and depth. ",
	          "If width, height, or depth are zero, calculate the respective value from the source image size. ");
	I_Method3(void, getTextureSize, IN, int &, width, IN, int &, height, IN, int &, depth,
	          Properties::NON_VIRTUAL,
	          __void__getTextureSize__int_R1__int_R1__int_R1,
	          "Gets the texture subload width. ",
	          "");
	I_Method1(void, setTextureWidth, IN, int, width,
	          Properties::NON_VIRTUAL,
	          __void__setTextureWidth__int,
	          "",
	          "");
	I_Method1(void, setTextureHeight, IN, int, height,
	          Properties::NON_VIRTUAL,
	          __void__setTextureHeight__int,
	          "",
	          "");
	I_Method1(void, setTextureDepth, IN, int, depth,
	          Properties::NON_VIRTUAL,
	          __void__setTextureDepth__int,
	          "",
	          "");
	I_Method0(int, getTextureWidth,
	          Properties::VIRTUAL,
	          __int__getTextureWidth,
	          "",
	          "");
	I_Method0(int, getTextureHeight,
	          Properties::VIRTUAL,
	          __int__getTextureHeight,
	          "",
	          "");
	I_Method0(int, getTextureDepth,
	          Properties::VIRTUAL,
	          __int__getTextureDepth,
	          "",
	          "");
	I_Method1(void, setSubloadCallback, IN, osg::Texture3D::SubloadCallback *, cb,
	          Properties::NON_VIRTUAL,
	          __void__setSubloadCallback__SubloadCallback_P1,
	          "",
	          "");
	I_Method0(osg::Texture3D::SubloadCallback *, getSubloadCallback,
	          Properties::NON_VIRTUAL,
	          __SubloadCallback_P1__getSubloadCallback,
	          "",
	          "");
	I_Method0(const osg::Texture3D::SubloadCallback *, getSubloadCallback,
	          Properties::NON_VIRTUAL,
	          __C5_SubloadCallback_P1__getSubloadCallback,
	          "",
	          "");
	I_Method1(void, setNumMipmapLevels, IN, unsigned int, num,
	          Properties::NON_VIRTUAL,
	          __void__setNumMipmapLevels__unsigned_int,
	          "Helper function. ",
	          "Sets the number of mipmap levels created for this texture. Should only be called within an osg::Texture::apply(), or during a custom OpenGL texture load. ");
	I_Method0(unsigned int, getNumMipmapLevels,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getNumMipmapLevels,
	          "Gets the number of mipmap levels created. ",
	          "");
	I_Method8(void, copyTexSubImage3D, IN, osg::State &, state, IN, int, xoffset, IN, int, yoffset, IN, int, zoffset, IN, int, x, IN, int, y, IN, int, width, IN, int, height,
	          Properties::NON_VIRTUAL,
	          __void__copyTexSubImage3D__State_R1__int__int__int__int__int__int__int,
	          "Copies a two-dimensional texture subimage, as per glCopyTexSubImage3D. ",
	          "Updates a portion of an existing OpenGL texture object from the current OpenGL background framebuffer contents at position x, y with width width and height height. Loads framebuffer data into the texture using offsets xoffset, yoffset, and zoffset. width and height must be powers of two. ");
	I_Method1(void, apply, IN, osg::State &, state,
	          Properties::VIRTUAL,
	          __void__apply__State_R1,
	          "Bind the texture object. ",
	          "If the texture object hasn't already been compiled, create the texture mipmap levels. ");
	I_StaticMethod2(osg::Texture3D::Extensions *, getExtensions, IN, unsigned int, contextID, IN, bool, createIfNotInitalized,
	                __Extensions_P1__getExtensions__unsigned_int__bool_S,
	                "Encapsulates queries of extension availability, obtains extension function pointers, and provides convenience wrappers for calling extension functions. ",
	                "");
	I_StaticMethod2(void, setExtensions, IN, unsigned int, contextID, IN, osg::Texture3D::Extensions *, extensions,
	                __void__setExtensions__unsigned_int__Extensions_P1_S,
	                "Overrides Extensions objects across graphics contexts. ",
	                "Typically used to ensure the same lowest common denominator of extensions on systems with different graphics pipes. ");
	I_ProtectedMethod6(void, computeRequiredTextureDimensions, IN, osg::State &, state, IN, const osg::Image &, image, IN, GLsizei &, width, IN, GLsizei &, height, IN, GLsizei &, depth, IN, GLsizei &, numMipmapLevels,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __void__computeRequiredTextureDimensions__State_R1__C5_osg_Image_R1__GLsizei_R1__GLsizei_R1__GLsizei_R1__GLsizei_R1,
	                   "",
	                   "");
	I_ProtectedMethod0(void, computeInternalFormat,
	                   Properties::VIRTUAL,
	                   Properties::CONST,
	                   __void__computeInternalFormat,
	                   "",
	                   "");
	I_ProtectedMethod1(void, allocateMipmap, IN, osg::State &, state,
	                   Properties::VIRTUAL,
	                   Properties::CONST,
	                   __void__allocateMipmap__State_R1,
	                   "Allocate mipmap levels of the texture by subsequent calling of glTexImage* function. ",
	                   "");
	I_ProtectedMethod7(void, applyTexImage3D, IN, GLenum, target, IN, osg::Image *, image, IN, osg::State &, state, IN, GLsizei &, inwidth, IN, GLsizei &, inheight, IN, GLsizei &, indepth, IN, GLsizei &, numMipmapLevels,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __void__applyTexImage3D__GLenum__Image_P1__State_R1__GLsizei_R1__GLsizei_R1__GLsizei_R1__GLsizei_R1,
	                   "",
	                   "");
	I_SimpleProperty(osg::Image *, Image, 
	                 __Image_P1__getImage, 
	                 __void__setImage__Image_P1);
	I_SimpleProperty(unsigned int, NumMipmapLevels, 
	                 0, 
	                 __void__setNumMipmapLevels__unsigned_int);
	I_SimpleProperty(osg::Texture3D::SubloadCallback *, SubloadCallback, 
	                 __SubloadCallback_P1__getSubloadCallback, 
	                 __void__setSubloadCallback__SubloadCallback_P1);
	I_SimpleProperty(int, TextureDepth, 
	                 __int__getTextureDepth, 
	                 __void__setTextureDepth__int);
	I_SimpleProperty(int, TextureHeight, 
	                 __int__getTextureHeight, 
	                 __void__setTextureHeight__int);
	I_SimpleProperty(GLenum, TextureTarget, 
	                 __GLenum__getTextureTarget, 
	                 0);
	I_SimpleProperty(int, TextureWidth, 
	                 __int__getTextureWidth, 
	                 __void__setTextureWidth__int);
	I_SimpleProperty(osg::StateAttribute::Type, Type, 
	                 __Type__getType, 
	                 0);
END_REFLECTOR

