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

#include <osg/Camera>
#include <osg/CopyOp>
#include <osg/Object>
#include <osgGA/GUIEventAdapter>
#include <osgViewer/View>
#include <osgWidget/EventInterface>
#include <osgWidget/ScriptEngine>
#include <osgWidget/StyleManager>
#include <osgWidget/Types>
#include <osgWidget/Widget>
#include <osgWidget/Window>
#include <osgWidget/WindowManager>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osgWidget::WindowManager::WmFlags)
	I_DeclaringFile("osgWidget/WindowManager");
	I_EnumLabel(osgWidget::WindowManager::WM_USE_LUA);
	I_EnumLabel(osgWidget::WindowManager::WM_USE_PYTHON);
	I_EnumLabel(osgWidget::WindowManager::WM_USE_RENDERBINS);
	I_EnumLabel(osgWidget::WindowManager::WM_PICK_DEBUG);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgWidget::WindowManager::PointerDirection)
	I_DeclaringFile("osgWidget/WindowManager");
	I_EnumLabel(osgWidget::WindowManager::PD_NONE);
	I_EnumLabel(osgWidget::WindowManager::PD_LEFT);
	I_EnumLabel(osgWidget::WindowManager::PD_RIGHT);
	I_EnumLabel(osgWidget::WindowManager::PD_UP);
	I_EnumLabel(osgWidget::WindowManager::PD_DOWN);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgWidget::WindowManager::PointerFocusMode)
	I_DeclaringFile("osgWidget/WindowManager");
	I_EnumLabel(osgWidget::WindowManager::PFM_FOCUS);
	I_EnumLabel(osgWidget::WindowManager::PFM_UNFOCUS);
	I_EnumLabel(osgWidget::WindowManager::PFM_SLOPPY);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgWidget::WindowManager)
	I_DeclaringFile("osgWidget/WindowManager");
	I_BaseType(osg::Switch);
	I_BaseType(osgWidget::UIObjectParent< Window >);
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "clone an object of the same type as the node. ",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "return a clone of a node, with Object* return type. ",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "return true if this and obj are of the same kind of object. ",
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
	I_ConstructorWithDefaults5(IN, osgViewer::View *, x, 0, IN, osgWidget::point_type, x, 0.0f, IN, osgWidget::point_type, x, 0.0f, IN, unsigned, int, 0, IN, unsigned, int, 0,
	                           ____WindowManager__osgViewer_View_P1__point_type__point_type__unsigned__unsigned,
	                           "",
	                           "");
	I_Constructor2(IN, const osgWidget::WindowManager &, x, IN, const osg::CopyOp &, x,
	               ____WindowManager__C5_WindowManager_R1__C5_osg_CopyOp_R1,
	               "",
	               "");
	I_Method3(bool, pickAtXY, IN, float, x, IN, float, x, IN, osgWidget::WidgetList &, x,
	          Properties::NON_VIRTUAL,
	          __bool__pickAtXY__float__float__WidgetList_R1,
	          "",
	          "");
	I_Method1(bool, setFocused, IN, osgWidget::Window *, x,
	          Properties::NON_VIRTUAL,
	          __bool__setFocused__Window_P1,
	          "",
	          "");
	I_Method2(void, setPointerXY, IN, float, x, IN, float, x,
	          Properties::NON_VIRTUAL,
	          __void__setPointerXY__float__float,
	          "",
	          "");
	I_Method1(void, setStyleManager, IN, osgWidget::StyleManager *, x,
	          Properties::NON_VIRTUAL,
	          __void__setStyleManager__StyleManager_P1,
	          "",
	          "");
	I_MethodWithDefaults1(void, resizeAllWindows, IN, bool, x, true,
	                      Properties::NON_VIRTUAL,
	                      __void__resizeAllWindows__bool,
	                      "",
	                      "");
	I_Method2(osgWidget::XYCoord, windowXY, IN, double, x, IN, double, x,
	          Properties::NON_VIRTUAL,
	          __XYCoord__windowXY__double__double,
	          "",
	          "");
	I_Method2(osgWidget::XYCoord, localXY, IN, double, x, IN, double, x,
	          Properties::NON_VIRTUAL,
	          __XYCoord__localXY__double__double,
	          "",
	          "");
	I_Method2(bool, pointerMove, IN, float, x, IN, float, x,
	          Properties::NON_VIRTUAL,
	          __bool__pointerMove__float__float,
	          "",
	          "");
	I_Method2(bool, pointerDrag, IN, float, x, IN, float, x,
	          Properties::NON_VIRTUAL,
	          __bool__pointerDrag__float__float,
	          "",
	          "");
	I_Method2(bool, mouseScroll, IN, float, x, IN, float, x,
	          Properties::NON_VIRTUAL,
	          __bool__mouseScroll__float__float,
	          "",
	          "");
	I_Method0(osg::Camera *, createParentOrthoCamera,
	          Properties::NON_VIRTUAL,
	          __osg_Camera_P1__createParentOrthoCamera,
	          "",
	          "");
	I_Method0(unsigned int, getNodeMask,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getNodeMask,
	          "Get the node Mask. ",
	          "");
	I_Method0(osgWidget::point_type, getWidth,
	          Properties::NON_VIRTUAL,
	          __point_type__getWidth,
	          "",
	          "");
	I_Method0(osgWidget::point_type, getHeight,
	          Properties::NON_VIRTUAL,
	          __point_type__getHeight,
	          "",
	          "");
	I_Method0(bool, isUsingLua,
	          Properties::NON_VIRTUAL,
	          __bool__isUsingLua,
	          "",
	          "");
	I_Method0(bool, isUsingPython,
	          Properties::NON_VIRTUAL,
	          __bool__isUsingPython,
	          "",
	          "");
	I_Method0(bool, isUsingRenderBins,
	          Properties::NON_VIRTUAL,
	          __bool__isUsingRenderBins,
	          "",
	          "");
	I_Method0(int, getMouseKeysDown,
	          Properties::NON_VIRTUAL,
	          __int__getMouseKeysDown,
	          "",
	          "");
	I_Method0(osgWidget::ScriptEngine *, getLuaEngine,
	          Properties::NON_VIRTUAL,
	          __ScriptEngine_P1__getLuaEngine,
	          "",
	          "");
	I_Method0(const osgWidget::ScriptEngine *, getLuaEngine,
	          Properties::NON_VIRTUAL,
	          __C5_ScriptEngine_P1__getLuaEngine,
	          "",
	          "");
	I_Method0(osgWidget::ScriptEngine *, getPythonEngine,
	          Properties::NON_VIRTUAL,
	          __ScriptEngine_P1__getPythonEngine,
	          "",
	          "");
	I_Method0(const osgWidget::ScriptEngine *, getPythonEngine,
	          Properties::NON_VIRTUAL,
	          __C5_ScriptEngine_P1__getPythonEngine,
	          "",
	          "");
	I_Method0(osgWidget::StyleManager *, getStyleManager,
	          Properties::NON_VIRTUAL,
	          __StyleManager_P1__getStyleManager,
	          "",
	          "");
	I_Method0(const osgWidget::StyleManager *, getStyleManager,
	          Properties::NON_VIRTUAL,
	          __C5_StyleManager_P1__getStyleManager,
	          "",
	          "");
	I_Method0(osgWidget::WindowManager::PointerDirection, getPointerVerticalDirection,
	          Properties::NON_VIRTUAL,
	          __PointerDirection__getPointerVerticalDirection,
	          "",
	          "");
	I_Method0(osgWidget::WindowManager::PointerDirection, getPointerHorizontalDirection,
	          Properties::NON_VIRTUAL,
	          __PointerDirection__getPointerHorizontalDirection,
	          "",
	          "");
	I_Method0(osgWidget::WindowManager::PointerFocusMode, getPointerFocusMode,
	          Properties::NON_VIRTUAL,
	          __PointerFocusMode__getPointerFocusMode,
	          "",
	          "");
	I_Method0(int, getPointerDirectionVector,
	          Properties::NON_VIRTUAL,
	          __int__getPointerDirectionVector,
	          "",
	          "");
	I_Method0(bool, isPointerMovingUp,
	          Properties::NON_VIRTUAL,
	          __bool__isPointerMovingUp,
	          "",
	          "");
	I_Method0(bool, isPointerMovingDown,
	          Properties::NON_VIRTUAL,
	          __bool__isPointerMovingDown,
	          "",
	          "");
	I_Method0(bool, isPointerMovingLeft,
	          Properties::NON_VIRTUAL,
	          __bool__isPointerMovingLeft,
	          "",
	          "");
	I_Method0(bool, isPointerMovingRight,
	          Properties::NON_VIRTUAL,
	          __bool__isPointerMovingRight,
	          "",
	          "");
	I_Method0(bool, isPointerMovingVertically,
	          Properties::NON_VIRTUAL,
	          __bool__isPointerMovingVertically,
	          "",
	          "");
	I_Method0(bool, isPointerMovingHorizontally,
	          Properties::NON_VIRTUAL,
	          __bool__isPointerMovingHorizontally,
	          "",
	          "");
	I_Method0(bool, isLeftMouseButtonDown,
	          Properties::NON_VIRTUAL,
	          __bool__isLeftMouseButtonDown,
	          "",
	          "");
	I_Method0(bool, isMiddleMouseButtonDown,
	          Properties::NON_VIRTUAL,
	          __bool__isMiddleMouseButtonDown,
	          "",
	          "");
	I_Method0(bool, isRightMouseButtonDown,
	          Properties::NON_VIRTUAL,
	          __bool__isRightMouseButtonDown,
	          "",
	          "");
	I_Method0(bool, isMouseScrollingUp,
	          Properties::NON_VIRTUAL,
	          __bool__isMouseScrollingUp,
	          "",
	          "");
	I_Method0(bool, isMouseScrollingDown,
	          Properties::NON_VIRTUAL,
	          __bool__isMouseScrollingDown,
	          "",
	          "");
	I_Method1(bool, setFocusedByName, IN, const std::string &, name,
	          Properties::NON_VIRTUAL,
	          __bool__setFocusedByName__C5_std_string_R1,
	          "",
	          "");
	I_Method1(void, setScrollingMotion, IN, osgGA::GUIEventAdapter::ScrollingMotion, sm,
	          Properties::NON_VIRTUAL,
	          __void__setScrollingMotion__osgGA_GUIEventAdapter_ScrollingMotion,
	          "",
	          "");
	I_Method1(void, setPointerFocusMode, IN, osgWidget::WindowManager::PointerFocusMode, pfm,
	          Properties::NON_VIRTUAL,
	          __void__setPointerFocusMode__PointerFocusMode,
	          "",
	          "");
	I_Method1(void, setWidth, IN, osgWidget::point_type, w,
	          Properties::NON_VIRTUAL,
	          __void__setWidth__point_type,
	          "",
	          "");
	I_Method1(void, setHeight, IN, osgWidget::point_type, h,
	          Properties::NON_VIRTUAL,
	          __void__setHeight__point_type,
	          "",
	          "");
	I_Method2(void, setSize, IN, osgWidget::point_type, w, IN, osgWidget::point_type, h,
	          Properties::NON_VIRTUAL,
	          __void__setSize__point_type__point_type,
	          "",
	          "");
	I_Method2(void, setWindowSize, IN, osgWidget::point_type, w, IN, osgWidget::point_type, h,
	          Properties::NON_VIRTUAL,
	          __void__setWindowSize__point_type__point_type,
	          "",
	          "");
	I_Method2(bool, mousePushedLeft, IN, float, x, IN, float, y,
	          Properties::NON_VIRTUAL,
	          __bool__mousePushedLeft__float__float,
	          "",
	          "");
	I_Method2(bool, mousePushedMiddle, IN, float, x, IN, float, y,
	          Properties::NON_VIRTUAL,
	          __bool__mousePushedMiddle__float__float,
	          "",
	          "");
	I_Method2(bool, mousePushedRight, IN, float, x, IN, float, y,
	          Properties::NON_VIRTUAL,
	          __bool__mousePushedRight__float__float,
	          "",
	          "");
	I_Method2(bool, mouseReleasedLeft, IN, float, x, IN, float, y,
	          Properties::NON_VIRTUAL,
	          __bool__mouseReleasedLeft__float__float,
	          "",
	          "");
	I_Method2(bool, mouseReleasedMiddle, IN, float, x, IN, float, y,
	          Properties::NON_VIRTUAL,
	          __bool__mouseReleasedMiddle__float__float,
	          "",
	          "");
	I_Method2(bool, mouseReleasedRight, IN, float, x, IN, float, y,
	          Properties::NON_VIRTUAL,
	          __bool__mouseReleasedRight__float__float,
	          "",
	          "");
	I_Method2(bool, keyDown, IN, int, x, IN, int, x,
	          Properties::NON_VIRTUAL,
	          __bool__keyDown__int__int,
	          "",
	          "");
	I_Method2(bool, keyUp, IN, int, x, IN, int, x,
	          Properties::NON_VIRTUAL,
	          __bool__keyUp__int__int,
	          "",
	          "");
	I_StaticMethod2(void, setEventFromInterface, IN, osgWidget::Event &, x, IN, osgWidget::EventInterface *, x,
	                __void__setEventFromInterface__Event_R1__EventInterface_P1_S,
	                "",
	                "");
	I_SimpleProperty(osgWidget::Window *, Focused, 
	                 0, 
	                 __bool__setFocused__Window_P1);
	I_SimpleProperty(const std::string &, FocusedByName, 
	                 0, 
	                 __bool__setFocusedByName__C5_std_string_R1);
	I_SimpleProperty(osgWidget::point_type, Height, 
	                 __point_type__getHeight, 
	                 __void__setHeight__point_type);
	I_SimpleProperty(osgWidget::ScriptEngine *, LuaEngine, 
	                 __ScriptEngine_P1__getLuaEngine, 
	                 0);
	I_SimpleProperty(int, MouseKeysDown, 
	                 __int__getMouseKeysDown, 
	                 0);
	I_SimpleProperty(unsigned int, NodeMask, 
	                 __unsigned_int__getNodeMask, 
	                 0);
	I_SimpleProperty(int, PointerDirectionVector, 
	                 __int__getPointerDirectionVector, 
	                 0);
	I_SimpleProperty(osgWidget::WindowManager::PointerFocusMode, PointerFocusMode, 
	                 __PointerFocusMode__getPointerFocusMode, 
	                 __void__setPointerFocusMode__PointerFocusMode);
	I_SimpleProperty(osgWidget::WindowManager::PointerDirection, PointerHorizontalDirection, 
	                 __PointerDirection__getPointerHorizontalDirection, 
	                 0);
	I_SimpleProperty(osgWidget::WindowManager::PointerDirection, PointerVerticalDirection, 
	                 __PointerDirection__getPointerVerticalDirection, 
	                 0);
	I_SimpleProperty(osgWidget::ScriptEngine *, PythonEngine, 
	                 __ScriptEngine_P1__getPythonEngine, 
	                 0);
	I_SimpleProperty(osgGA::GUIEventAdapter::ScrollingMotion, ScrollingMotion, 
	                 0, 
	                 __void__setScrollingMotion__osgGA_GUIEventAdapter_ScrollingMotion);
	I_SimpleProperty(osgWidget::StyleManager *, StyleManager, 
	                 __StyleManager_P1__getStyleManager, 
	                 __void__setStyleManager__StyleManager_P1);
	I_SimpleProperty(osgWidget::point_type, Width, 
	                 __point_type__getWidth, 
	                 __void__setWidth__point_type);
END_REFLECTOR

TYPE_NAME_ALIAS(osgUtil::LineSegmentIntersector::Intersections, osgWidget::Intersections)

BEGIN_VALUE_REFLECTOR(osgWidget::UIObjectParent< osgWidget::Window >)
	I_DeclaringFile("osgWidget/UIObjectParent");
	I_Constructor0(____Window >,
	               "",
	               "");
	I_Method0(osgWidget::UIObjectParent< osgWidget::Window >::Iterator, begin,
	          Properties::NON_VIRTUAL,
	          __Iterator__begin,
	          "",
	          "");
	I_Method0(osgWidget::UIObjectParent< osgWidget::Window >::ConstIterator, begin,
	          Properties::NON_VIRTUAL,
	          __ConstIterator__begin,
	          "",
	          "");
	I_Method0(osgWidget::UIObjectParent< osgWidget::Window >::Iterator, end,
	          Properties::NON_VIRTUAL,
	          __Iterator__end,
	          "",
	          "");
	I_Method0(osgWidget::UIObjectParent< osgWidget::Window >::ConstIterator, end,
	          Properties::NON_VIRTUAL,
	          __ConstIterator__end,
	          "",
	          "");
	I_Method0(osgWidget::UIObjectParent< osgWidget::Window >::Vector::size_type, size,
	          Properties::NON_VIRTUAL,
	          __Vector_size_type__size,
	          "",
	          "");
	I_Method1(osgWidget::UIObjectParent< osgWidget::Window >::object_type *, getByName, IN, const std::string &, name,
	          Properties::NON_VIRTUAL,
	          __object_type_P1__getByName__C5_std_string_R1,
	          "",
	          "");
	I_Method1(const osgWidget::UIObjectParent< osgWidget::Window >::object_type *, getByName, IN, const std::string &, name,
	          Properties::NON_VIRTUAL,
	          __C5_object_type_P1__getByName__C5_std_string_R1,
	          "",
	          "");
	I_Method1(osgWidget::UIObjectParent< osgWidget::Window >::object_type *, getByIndex, IN, unsigned int, index,
	          Properties::NON_VIRTUAL,
	          __object_type_P1__getByIndex__unsigned_int,
	          "",
	          "");
	I_Method1(const osgWidget::UIObjectParent< osgWidget::Window >::object_type *, getByIndex, IN, unsigned int, index,
	          Properties::NON_VIRTUAL,
	          __C5_object_type_P1__getByIndex__unsigned_int,
	          "",
	          "");
	I_Method0(unsigned int, getNumObjects,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getNumObjects,
	          "",
	          "");
	I_Method0(osgWidget::UIObjectParent< osgWidget::Window >::Vector &, getObjects,
	          Properties::NON_VIRTUAL,
	          __Vector_R1__getObjects,
	          "",
	          "");
	I_Method0(const osgWidget::UIObjectParent< osgWidget::Window >::Vector &, getObjects,
	          Properties::NON_VIRTUAL,
	          __C5_Vector_R1__getObjects,
	          "",
	          "");
	I_ProtectedMethod1(bool, _remove, IN, osgWidget::UIObjectParent< osgWidget::Window >::object_type *, obj,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __bool___remove__object_type_P1,
	                   "",
	                   "");
	I_ProtectedMethod1(bool, _removeByName, IN, const std::string &, name,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __bool___removeByName__C5_std_string_R1,
	                   "",
	                   "");
	I_SimpleProperty(osgWidget::UIObjectParent< osgWidget::Window >::Vector &, Objects, 
	                 __Vector_R1__getObjects, 
	                 0);
END_REFLECTOR

