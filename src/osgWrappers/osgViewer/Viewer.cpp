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

#include <osg/ApplicationUsage>
#include <osg/ArgumentParser>
#include <osg/Camera>
#include <osg/CopyOp>
#include <osg/FrameStamp>
#include <osg/Node>
#include <osg/Object>
#include <osg/Stats>
#include <osg/Timer>
#include <osg/View>
#include <osgViewer/GraphicsWindow>
#include <osgViewer/Viewer>
#include <osgViewer/ViewerBase>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgViewer::Viewer)
	I_DeclaringFile("osgViewer/Viewer");
	I_BaseType(osgViewer::ViewerBase);
	I_BaseType(osgViewer::View);
	I_Constructor0(____Viewer,
	               "",
	               "");
	I_Constructor1(IN, osg::ArgumentParser &, arguments,
	               Properties::NON_EXPLICIT,
	               ____Viewer__osg_ArgumentParser_R1,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgViewer::Viewer &, viewer, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____Viewer__C5_osgViewer_Viewer_R1__C5_osg_CopyOp_R1,
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
	I_Method1(void, take, IN, osg::View &, rhs,
	          Properties::VIRTUAL,
	          __void__take__osg_View_R1,
	          "Take all the settings, Camera and Slaves from the passed in view(er), leaving it empty. ",
	          "");
	I_Method1(void, setViewerStats, IN, osg::Stats *, stats,
	          Properties::VIRTUAL,
	          __void__setViewerStats__osg_Stats_P1,
	          "Set the Stats object used for collect various frame related timing and scene graph stats. ",
	          "");
	I_Method0(osg::Stats *, getViewerStats,
	          Properties::VIRTUAL,
	          __osg_Stats_P1__getViewerStats,
	          "Get the Viewers Stats object. ",
	          "");
	I_Method0(const osg::Stats *, getViewerStats,
	          Properties::VIRTUAL,
	          __C5_osg_Stats_P1__getViewerStats,
	          "Get the Viewers Stats object. ",
	          "");
	I_Method1(bool, readConfiguration, IN, const std::string &, filename,
	          Properties::VIRTUAL,
	          __bool__readConfiguration__C5_std_string_R1,
	          "read the viewer configuration from a configuration file. ",
	          "");
	I_Method0(bool, isRealized,
	          Properties::VIRTUAL,
	          __bool__isRealized,
	          "Get whether at least of one of this viewers windows are realized. ",
	          "");
	I_Method0(void, realize,
	          Properties::VIRTUAL,
	          __void__realize,
	          "set up windows and associated threads. ",
	          "");
	I_Method1(void, setStartTick, IN, osg::Timer_t, tick,
	          Properties::VIRTUAL,
	          __void__setStartTick__osg_Timer_t,
	          "",
	          "");
	I_MethodWithDefaults1(void, setReferenceTime, IN, double, time, 0.0,
	                      Properties::NON_VIRTUAL,
	                      __void__setReferenceTime__double,
	                      "",
	                      "");
	I_Method1(void, setSceneData, IN, osg::Node *, node,
	          Properties::VIRTUAL,
	          __void__setSceneData__osg_Node_P1,
	          "Set the sene graph data that viewer with view. ",
	          "");
	I_Method4(osgViewer::GraphicsWindowEmbedded *, setUpViewerAsEmbeddedInWindow, IN, int, x, IN, int, y, IN, int, width, IN, int, height,
	          Properties::VIRTUAL,
	          __GraphicsWindowEmbedded_P1__setUpViewerAsEmbeddedInWindow__int__int__int__int,
	          "Convenience method for setting up the viewer so it can be used embedded in an external managed window. ",
	          "Returns the GraphicsWindowEmbedded that can be used by applications to pass in events to the viewer. ");
	I_Method0(double, elapsedTime,
	          Properties::VIRTUAL,
	          __double__elapsedTime,
	          "",
	          "");
	I_Method0(osg::FrameStamp *, getViewerFrameStamp,
	          Properties::VIRTUAL,
	          __osg_FrameStamp_P1__getViewerFrameStamp,
	          "",
	          "");
	I_Method0(int, run,
	          Properties::VIRTUAL,
	          __int__run,
	          "Execute a main frame loop. ",
	          "Equivalent to while (!viewer.done()) viewer.frame(); Also calls realize() if the viewer is not already realized, and installs trackball manipulator if one is not already assigned. ");
	I_MethodWithDefaults1(void, advance, IN, double, simulationTime, USE_REFERENCE_TIME,
	                      Properties::VIRTUAL,
	                      __void__advance__double,
	                      "",
	                      "");
	I_Method0(void, eventTraversal,
	          Properties::VIRTUAL,
	          __void__eventTraversal,
	          "",
	          "");
	I_Method0(void, updateTraversal,
	          Properties::VIRTUAL,
	          __void__updateTraversal,
	          "",
	          "");
	I_Method1(void, setCameraWithFocus, IN, osg::Camera *, camera,
	          Properties::NON_VIRTUAL,
	          __void__setCameraWithFocus__osg_Camera_P1,
	          "",
	          "");
	I_Method0(osg::Camera *, getCameraWithFocus,
	          Properties::NON_VIRTUAL,
	          __osg_Camera_P1__getCameraWithFocus,
	          "",
	          "");
	I_Method0(const osg::Camera *, getCameraWithFocus,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Camera_P1__getCameraWithFocus,
	          "",
	          "");
	I_MethodWithDefaults2(void, getCameras, IN, osgViewer::ViewerBase::Cameras &, cameras, , IN, bool, onlyActive, true,
	                      Properties::VIRTUAL,
	                      __void__getCameras__Cameras_R1__bool,
	                      "",
	                      "");
	I_MethodWithDefaults2(void, getContexts, IN, osgViewer::ViewerBase::Contexts &, contexts, , IN, bool, onlyValid, true,
	                      Properties::VIRTUAL,
	                      __void__getContexts__Contexts_R1__bool,
	                      "",
	                      "");
	I_MethodWithDefaults2(void, getAllThreads, IN, osgViewer::ViewerBase::Threads &, threads, , IN, bool, onlyActive, true,
	                      Properties::VIRTUAL,
	                      __void__getAllThreads__Threads_R1__bool,
	                      "",
	                      "");
	I_MethodWithDefaults2(void, getOperationThreads, IN, osgViewer::ViewerBase::OperationThreads &, threads, , IN, bool, onlyActive, true,
	                      Properties::VIRTUAL,
	                      __void__getOperationThreads__OperationThreads_R1__bool,
	                      "",
	                      "");
	I_MethodWithDefaults2(void, getScenes, IN, osgViewer::ViewerBase::Scenes &, scenes, , IN, bool, onlyValid, true,
	                      Properties::VIRTUAL,
	                      __void__getScenes__Scenes_R1__bool,
	                      "",
	                      "");
	I_MethodWithDefaults2(void, getViews, IN, osgViewer::ViewerBase::Views &, views, , IN, bool, onlyValid, true,
	                      Properties::VIRTUAL,
	                      __void__getViews__Views_R1__bool,
	                      "",
	                      "");
	I_Method1(void, getUsage, IN, osg::ApplicationUsage &, usage,
	          Properties::VIRTUAL,
	          __void__getUsage__osg_ApplicationUsage_R1,
	          "Get the keyboard and mouse usage of this viewer. ",
	          "");
	I_ProtectedMethod0(void, constructorInit,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__constructorInit,
	                   "",
	                   "");
	I_ProtectedMethod0(void, viewerInit,
	                   Properties::VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__viewerInit,
	                   "",
	                   "");
	I_SimpleProperty(osg::Camera *, CameraWithFocus, 
	                 __osg_Camera_P1__getCameraWithFocus, 
	                 __void__setCameraWithFocus__osg_Camera_P1);
	I_SimpleProperty(double, ReferenceTime, 
	                 0, 
	                 __void__setReferenceTime__double);
	I_SimpleProperty(osg::Node *, SceneData, 
	                 0, 
	                 __void__setSceneData__osg_Node_P1);
	I_SimpleProperty(osg::Timer_t, StartTick, 
	                 0, 
	                 __void__setStartTick__osg_Timer_t);
	I_SimpleProperty(osg::FrameStamp *, ViewerFrameStamp, 
	                 __osg_FrameStamp_P1__getViewerFrameStamp, 
	                 0);
	I_SimpleProperty(osg::Stats *, ViewerStats, 
	                 __osg_Stats_P1__getViewerStats, 
	                 __void__setViewerStats__osg_Stats_P1);
END_REFLECTOR

