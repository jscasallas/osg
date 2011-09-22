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

#include <osgDB/PluginQuery>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

#include <osg/observer_ptr>
	
BEGIN_OBJECT_REFLECTOR(osgDB::ReaderWriterInfo)
	I_DeclaringFile("osgDB/PluginQuery");
	I_BaseType(osg::Referenced);
	I_Constructor0(____ReaderWriterInfo,
	               "",
	               "");
	I_PublicMemberProperty(std::string, plugin);
	I_PublicMemberProperty(std::string, description);
	I_PublicMemberProperty(osgDB::ReaderWriter::FormatDescriptionMap, protocols);
	I_PublicMemberProperty(osgDB::ReaderWriter::FormatDescriptionMap, extensions);
	I_PublicMemberProperty(osgDB::ReaderWriter::FormatDescriptionMap, options);
END_REFLECTOR

TYPE_NAME_ALIAS(std::list< std::string >, osgDB::FileNameList)

TYPE_NAME_ALIAS(std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > >, osgDB::ReaderWriterInfoList)

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgDB::ReaderWriterInfo >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osgDB::ReaderWriterInfo *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osgDB::ReaderWriterInfo > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osgDB::ReaderWriterInfo *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osgDB::ReaderWriterInfo *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osgDB::ReaderWriterInfo > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osgDB::ReaderWriterInfo *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

STD_LIST_REFLECTOR(std::list< osg::ref_ptr< osgDB::ReaderWriterInfo > >)

STD_LIST_REFLECTOR(std::list< std::string >)

