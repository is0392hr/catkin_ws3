/*
 * Module code.
 *
 * Generated by SIP 4.19.7
 */

#include "sipAPIPyKDL.h"

#line 329 "/home/koki/ros_catkin_ws/src/orocos_kinematics_dynamics/python_orocos_kdl/PyKDL/kinfam.sip"
#include <kdl/chainfksolver.hpp>
using namespace KDL;
#line 13 "/home/koki/ros_catkin_ws/build_isolated/python_orocos_kdl/install/PyKDL/sipPyKDLpart4.cpp"

#line 223 "/home/koki/ros_catkin_ws/src/orocos_kinematics_dynamics/python_orocos_kdl/PyKDL/kinfam.sip"
#include <kdl/jntarrayvel.hpp>
using namespace KDL;
#line 18 "/home/koki/ros_catkin_ws/build_isolated/python_orocos_kdl/install/PyKDL/sipPyKDLpart4.cpp"
#line 159 "/home/koki/ros_catkin_ws/src/orocos_kinematics_dynamics/python_orocos_kdl/PyKDL/framevel.sip"
#include <kdl/framevel.hpp>
using namespace KDL;
#line 22 "/home/koki/ros_catkin_ws/build_isolated/python_orocos_kdl/install/PyKDL/sipPyKDLpart4.cpp"


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_ChainFkSolverVel(void *, const sipTypeDef *);}
static void *cast_ChainFkSolverVel(void *sipCppV, const sipTypeDef *targetType)
{
     ::ChainFkSolverVel *sipCpp = reinterpret_cast< ::ChainFkSolverVel *>(sipCppV);

    if (targetType == sipType_SolverI)
        return static_cast< ::SolverI *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_ChainFkSolverVel(void *, int);}
static void release_ChainFkSolverVel(void *sipCppV, int)
{
    delete reinterpret_cast< ::ChainFkSolverVel *>(sipCppV);
}


extern "C" {static void dealloc_ChainFkSolverVel(sipSimpleWrapper *);}
static void dealloc_ChainFkSolverVel(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_ChainFkSolverVel(sipGetAddress(sipSelf), 0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_ChainFkSolverVel[] = {{29, 255, 1}};


sipClassTypeDef sipTypeDef_PyKDL_ChainFkSolverVel = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_ChainFkSolverVel,
        {0},
        0
    },
    {
        sipNameNr_ChainFkSolverVel,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_ChainFkSolverVel,
    0,
    0,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_ChainFkSolverVel,
    0,
    0,
    0,
    release_ChainFkSolverVel,
    cast_ChainFkSolverVel,
    0,
    0,
    0,
    0,
    0,
    0
};

#line 320 "/home/koki/ros_catkin_ws/src/orocos_kinematics_dynamics/python_orocos_kdl/PyKDL/kinfam.sip"
#include <kdl/chainfksolver.hpp>
using namespace KDL;
#line 112 "/home/koki/ros_catkin_ws/build_isolated/python_orocos_kdl/install/PyKDL/sipPyKDLpart4.cpp"

#line 172 "/home/koki/ros_catkin_ws/src/orocos_kinematics_dynamics/python_orocos_kdl/PyKDL/kinfam.sip"
#include <kdl/jntarray.hpp>
using namespace KDL;
#line 117 "/home/koki/ros_catkin_ws/build_isolated/python_orocos_kdl/install/PyKDL/sipPyKDLpart4.cpp"
#line 201 "/home/koki/ros_catkin_ws/src/orocos_kinematics_dynamics/python_orocos_kdl/PyKDL/frames.sip"
#include <kdl/frames.hpp>
#include <kdl/frames_io.hpp>
#include <sstream>
using namespace KDL;
#line 123 "/home/koki/ros_catkin_ws/build_isolated/python_orocos_kdl/install/PyKDL/sipPyKDLpart4.cpp"


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_ChainFkSolverPos(void *, const sipTypeDef *);}
static void *cast_ChainFkSolverPos(void *sipCppV, const sipTypeDef *targetType)
{
     ::ChainFkSolverPos *sipCpp = reinterpret_cast< ::ChainFkSolverPos *>(sipCppV);

    if (targetType == sipType_SolverI)
        return static_cast< ::SolverI *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_ChainFkSolverPos(void *, int);}
static void release_ChainFkSolverPos(void *sipCppV, int)
{
    delete reinterpret_cast< ::ChainFkSolverPos *>(sipCppV);
}


extern "C" {static void dealloc_ChainFkSolverPos(sipSimpleWrapper *);}
static void dealloc_ChainFkSolverPos(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_ChainFkSolverPos(sipGetAddress(sipSelf), 0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_ChainFkSolverPos[] = {{29, 255, 1}};


sipClassTypeDef sipTypeDef_PyKDL_ChainFkSolverPos = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_ChainFkSolverPos,
        {0},
        0
    },
    {
        sipNameNr_ChainFkSolverPos,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_ChainFkSolverPos,
    0,
    0,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_ChainFkSolverPos,
    0,
    0,
    0,
    release_ChainFkSolverPos,
    cast_ChainFkSolverPos,
    0,
    0,
    0,
    0,
    0,
    0
};

#line 309 "/home/koki/ros_catkin_ws/src/orocos_kinematics_dynamics/python_orocos_kdl/PyKDL/kinfam.sip"
#include <kdl/solveri.hpp>
using namespace KDL;
#line 213 "/home/koki/ros_catkin_ws/build_isolated/python_orocos_kdl/install/PyKDL/sipPyKDLpart4.cpp"



extern "C" {static PyObject *meth_SolverI_getError(PyObject *, PyObject *);}
static PyObject *meth_SolverI_getError(PyObject *, PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(NULL, sipName_SolverI, sipName_getError, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_SolverI_strError(PyObject *, PyObject *);}
static PyObject *meth_SolverI_strError(PyObject *, PyObject *)
{

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(NULL, sipName_SolverI, sipName_strError, NULL);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_SolverI(void *, int);}
static void release_SolverI(void *sipCppV, int)
{
    delete reinterpret_cast< ::SolverI *>(sipCppV);
}


extern "C" {static void dealloc_SolverI(sipSimpleWrapper *);}
static void dealloc_SolverI(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_SolverI(sipGetAddress(sipSelf), 0);
    }
}


static PyMethodDef methods_SolverI[] = {
    {SIP_MLNAME_CAST(sipName_getError), meth_SolverI_getError, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_strError), meth_SolverI_strError, METH_VARARGS, NULL}
};


sipClassTypeDef sipTypeDef_PyKDL_SolverI = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_SolverI,
        {0},
        0
    },
    {
        sipNameNr_SolverI,
        {0, 0, 1},
        2, methods_SolverI,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    0,
    0,
    0,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_SolverI,
    0,
    0,
    0,
    release_SolverI,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};

#line 253 "/home/koki/ros_catkin_ws/src/orocos_kinematics_dynamics/python_orocos_kdl/PyKDL/kinfam.sip"
#include <kdl/jntarray.hpp>
using namespace KDL;
#line 315 "/home/koki/ros_catkin_ws/build_isolated/python_orocos_kdl/install/PyKDL/sipPyKDLpart4.cpp"

#line 201 "/home/koki/ros_catkin_ws/src/orocos_kinematics_dynamics/python_orocos_kdl/PyKDL/frames.sip"
#include <kdl/frames.hpp>
#include <kdl/frames_io.hpp>
#include <sstream>
using namespace KDL;
#line 322 "/home/koki/ros_catkin_ws/build_isolated/python_orocos_kdl/install/PyKDL/sipPyKDLpart4.cpp"
#line 102 "/home/koki/ros_catkin_ws/src/orocos_kinematics_dynamics/python_orocos_kdl/PyKDL/frames.sip"
#include <kdl/frames.hpp>
#include <kdl/frames_io.hpp>
#include <sstream>
using namespace KDL;
#line 328 "/home/koki/ros_catkin_ws/build_isolated/python_orocos_kdl/install/PyKDL/sipPyKDLpart4.cpp"
#line 26 "/home/koki/ros_catkin_ws/src/orocos_kinematics_dynamics/python_orocos_kdl/PyKDL/frames.sip"
#include <kdl/frames.hpp>
#include <kdl/frames_io.hpp>
#include <sstream>
using namespace KDL;
#line 334 "/home/koki/ros_catkin_ws/build_isolated/python_orocos_kdl/install/PyKDL/sipPyKDLpart4.cpp"
#line 281 "/home/koki/ros_catkin_ws/src/orocos_kinematics_dynamics/python_orocos_kdl/PyKDL/frames.sip"
#include <kdl/frames.hpp>
#include <kdl/frames_io.hpp>
#include <sstream>
using namespace KDL;
#line 340 "/home/koki/ros_catkin_ws/build_isolated/python_orocos_kdl/install/PyKDL/sipPyKDLpart4.cpp"
#line 21 "/home/koki/ros_catkin_ws/src/orocos_kinematics_dynamics/python_orocos_kdl/PyKDL/std_string.sip"
#include <string>
#line 343 "/home/koki/ros_catkin_ws/build_isolated/python_orocos_kdl/install/PyKDL/sipPyKDLpart4.cpp"


PyDoc_STRVAR(doc_Jacobian_rows, "rows(self) -> int");

extern "C" {static PyObject *meth_Jacobian_rows(PyObject *, PyObject *);}
static PyObject *meth_Jacobian_rows(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::Jacobian *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Jacobian, &sipCpp))
        {
            uint sipRes;

            sipRes = sipCpp->rows();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Jacobian, sipName_rows, doc_Jacobian_rows);

    return NULL;
}


PyDoc_STRVAR(doc_Jacobian_columns, "columns(self) -> int");

extern "C" {static PyObject *meth_Jacobian_columns(PyObject *, PyObject *);}
static PyObject *meth_Jacobian_columns(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::Jacobian *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Jacobian, &sipCpp))
        {
            uint sipRes;

            sipRes = sipCpp->columns();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Jacobian, sipName_columns, doc_Jacobian_columns);

    return NULL;
}


PyDoc_STRVAR(doc_Jacobian_resize, "resize(self, newNrOfColumns: int)");

extern "C" {static PyObject *meth_Jacobian_resize(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_Jacobian_resize(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        uint a0;
         ::Jacobian *sipCpp;

        static const char *sipKwdList[] = {
            sipName_newNrOfColumns,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bu", &sipSelf, sipType_Jacobian, &sipCpp, &a0))
        {
            sipCpp->resize(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Jacobian, sipName_resize, doc_Jacobian_resize);

    return NULL;
}


PyDoc_STRVAR(doc_Jacobian_getColumn, "getColumn(self, i: int) -> Twist");

extern "C" {static PyObject *meth_Jacobian_getColumn(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_Jacobian_getColumn(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        uint a0;
        const  ::Jacobian *sipCpp;

        static const char *sipKwdList[] = {
            sipName_i,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bu", &sipSelf, sipType_Jacobian, &sipCpp, &a0))
        {
             ::Twist*sipRes;

            sipRes = new  ::Twist(sipCpp->getColumn(a0));

            return sipConvertFromNewType(sipRes,sipType_Twist,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Jacobian, sipName_getColumn, doc_Jacobian_getColumn);

    return NULL;
}


PyDoc_STRVAR(doc_Jacobian_setColumn, "setColumn(self, i: int, t: Twist)");

extern "C" {static PyObject *meth_Jacobian_setColumn(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_Jacobian_setColumn(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        uint a0;
        const  ::Twist* a1;
         ::Jacobian *sipCpp;

        static const char *sipKwdList[] = {
            sipName_i,
            sipName_t,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BuJ9", &sipSelf, sipType_Jacobian, &sipCpp, &a0, sipType_Twist, &a1))
        {
            sipCpp->setColumn(a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Jacobian, sipName_setColumn, doc_Jacobian_setColumn);

    return NULL;
}


PyDoc_STRVAR(doc_Jacobian_changeRefPoint, "changeRefPoint(self, base_AB: Vector)");

extern "C" {static PyObject *meth_Jacobian_changeRefPoint(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_Jacobian_changeRefPoint(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::Vector* a0;
         ::Jacobian *sipCpp;

        static const char *sipKwdList[] = {
            sipName_base_AB,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9", &sipSelf, sipType_Jacobian, &sipCpp, sipType_Vector, &a0))
        {
            sipCpp->changeRefPoint(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Jacobian, sipName_changeRefPoint, doc_Jacobian_changeRefPoint);

    return NULL;
}


PyDoc_STRVAR(doc_Jacobian_changeBase, "changeBase(self, rot: Rotation)");

extern "C" {static PyObject *meth_Jacobian_changeBase(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_Jacobian_changeBase(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::Rotation* a0;
         ::Jacobian *sipCpp;

        static const char *sipKwdList[] = {
            sipName_rot,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9", &sipSelf, sipType_Jacobian, &sipCpp, sipType_Rotation, &a0))
        {
            sipCpp->changeBase(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Jacobian, sipName_changeBase, doc_Jacobian_changeBase);

    return NULL;
}


PyDoc_STRVAR(doc_Jacobian_changeRefFrame, "changeRefFrame(self, frame: Frame)");

extern "C" {static PyObject *meth_Jacobian_changeRefFrame(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_Jacobian_changeRefFrame(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::Frame* a0;
         ::Jacobian *sipCpp;

        static const char *sipKwdList[] = {
            sipName_frame,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9", &sipSelf, sipType_Jacobian, &sipCpp, sipType_Frame, &a0))
        {
            sipCpp->changeRefFrame(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Jacobian, sipName_changeRefFrame, doc_Jacobian_changeRefFrame);

    return NULL;
}


extern "C" {static PyObject *slot_Jacobian___repr__(PyObject *);}
static PyObject *slot_Jacobian___repr__(PyObject *sipSelf)
{
     ::Jacobian *sipCpp = reinterpret_cast< ::Jacobian *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Jacobian));

    if (!sipCpp)
        return 0;


    {
        {
            const  ::std::string*sipRes = 0;

#line 287 "/home/koki/ros_catkin_ws/src/orocos_kinematics_dynamics/python_orocos_kdl/PyKDL/kinfam.sip"
    std::stringstream ss;
    ss<<sipCpp->data;
    std::string s(ss.str());
    sipRes=&s;
#line 615 "/home/koki/ros_catkin_ws/build_isolated/python_orocos_kdl/install/PyKDL/sipPyKDLpart4.cpp"

            return sipConvertFromType(const_cast< ::std::string *>(sipRes),sipType_std_string,NULL);
        }
    }

    return 0;
}


extern "C" {static int slot_Jacobian___setitem__(PyObject *,PyObject *);}
static int slot_Jacobian___setitem__(PyObject *sipSelf,PyObject *sipArgs)
{
     ::Jacobian *sipCpp = reinterpret_cast< ::Jacobian *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Jacobian));

    if (!sipCpp)
        return -1;

    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;
        double a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "Td", &PyTuple_Type, &a0, &a1))
        {
#line 276 "/home/koki/ros_catkin_ws/src/orocos_kinematics_dynamics/python_orocos_kdl/PyKDL/kinfam.sip"
    int i,j;
    PyArg_ParseTuple(a0,"ii",&i,&j);
    if (i < 0 || j < 0 || i > 5 || j >= (int)sipCpp->columns()) {
        PyErr_SetString(PyExc_IndexError, "Jacobian index out of range");
        return 0;
    }
    (*sipCpp)(i,j)=a1;
#line 649 "/home/koki/ros_catkin_ws/build_isolated/python_orocos_kdl/install/PyKDL/sipPyKDLpart4.cpp"

            return 0;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Jacobian, sipName___setitem__, NULL);

    return -1;
}


extern "C" {static PyObject *slot_Jacobian___getitem__(PyObject *,PyObject *);}
static PyObject *slot_Jacobian___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Jacobian *sipCpp = reinterpret_cast< ::Jacobian *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Jacobian));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1T", &PyTuple_Type, &a0))
        {
            double sipRes = 0;

#line 265 "/home/koki/ros_catkin_ws/src/orocos_kinematics_dynamics/python_orocos_kdl/PyKDL/kinfam.sip"
    int i,j;
    PyArg_ParseTuple(a0,"ii",&i,&j);
    if (i < 0 || j < 0 || i > 5 || j >= (int)sipCpp->columns()) {
        PyErr_SetString(PyExc_IndexError, "Jacobian index out of range");
        return 0;
    }
    sipRes=(*sipCpp)(i,j);
#line 687 "/home/koki/ros_catkin_ws/build_isolated/python_orocos_kdl/install/PyKDL/sipPyKDLpart4.cpp"

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Jacobian, sipName___getitem__, NULL);

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_Jacobian(void *, int);}
static void release_Jacobian(void *sipCppV, int)
{
    delete reinterpret_cast< ::Jacobian *>(sipCppV);
}


extern "C" {static void dealloc_Jacobian(sipSimpleWrapper *);}
static void dealloc_Jacobian(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_Jacobian(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_Jacobian(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Jacobian(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::Jacobian *sipCpp = 0;

    {
        uint a0;

        static const char *sipKwdList[] = {
            sipName_size,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "u", &a0))
        {
            sipCpp = new  ::Jacobian(a0);

            return sipCpp;
        }
    }

    {
        const  ::Jacobian* a0;

        static const char *sipKwdList[] = {
            sipName_arg,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9", sipType_Jacobian, &a0))
        {
            sipCpp = new  ::Jacobian(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Jacobian[] = {
    {(void *)slot_Jacobian___repr__, repr_slot},
    {(void *)slot_Jacobian___setitem__, setitem_slot},
    {(void *)slot_Jacobian___getitem__, getitem_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Jacobian[] = {
    {SIP_MLNAME_CAST(sipName_changeBase), (PyCFunction)meth_Jacobian_changeBase, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_Jacobian_changeBase)},
    {SIP_MLNAME_CAST(sipName_changeRefFrame), (PyCFunction)meth_Jacobian_changeRefFrame, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_Jacobian_changeRefFrame)},
    {SIP_MLNAME_CAST(sipName_changeRefPoint), (PyCFunction)meth_Jacobian_changeRefPoint, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_Jacobian_changeRefPoint)},
    {SIP_MLNAME_CAST(sipName_columns), meth_Jacobian_columns, METH_VARARGS, SIP_MLDOC_CAST(doc_Jacobian_columns)},
    {SIP_MLNAME_CAST(sipName_getColumn), (PyCFunction)meth_Jacobian_getColumn, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_Jacobian_getColumn)},
    {SIP_MLNAME_CAST(sipName_resize), (PyCFunction)meth_Jacobian_resize, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_Jacobian_resize)},
    {SIP_MLNAME_CAST(sipName_rows), meth_Jacobian_rows, METH_VARARGS, SIP_MLDOC_CAST(doc_Jacobian_rows)},
    {SIP_MLNAME_CAST(sipName_setColumn), (PyCFunction)meth_Jacobian_setColumn, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_Jacobian_setColumn)}
};

PyDoc_STRVAR(doc_Jacobian, "\1Jacobian(size: int)\n"
"Jacobian(arg: Jacobian)");


sipClassTypeDef sipTypeDef_PyKDL_Jacobian = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_Jacobian,
        {0},
        0
    },
    {
        sipNameNr_Jacobian,
        {0, 0, 1},
        8, methods_Jacobian,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_Jacobian,
    -1,
    -1,
    0,
    slots_Jacobian,
    init_type_Jacobian,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_Jacobian,
    0,
    0,
    0,
    release_Jacobian,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};

#line 223 "/home/koki/ros_catkin_ws/src/orocos_kinematics_dynamics/python_orocos_kdl/PyKDL/kinfam.sip"
#include <kdl/jntarrayvel.hpp>
using namespace KDL;
#line 835 "/home/koki/ros_catkin_ws/build_isolated/python_orocos_kdl/install/PyKDL/sipPyKDLpart4.cpp"

#line 172 "/home/koki/ros_catkin_ws/src/orocos_kinematics_dynamics/python_orocos_kdl/PyKDL/kinfam.sip"
#include <kdl/jntarray.hpp>
using namespace KDL;
#line 840 "/home/koki/ros_catkin_ws/build_isolated/python_orocos_kdl/install/PyKDL/sipPyKDLpart4.cpp"


PyDoc_STRVAR(doc_JntArrayVel_resize, "resize(self, newSize: int)");

extern "C" {static PyObject *meth_JntArrayVel_resize(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_JntArrayVel_resize(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        uint a0;
         ::JntArrayVel *sipCpp;

        static const char *sipKwdList[] = {
            sipName_newSize,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bu", &sipSelf, sipType_JntArrayVel, &sipCpp, &a0))
        {
            sipCpp->resize(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_JntArrayVel, sipName_resize, doc_JntArrayVel_resize);

    return NULL;
}


PyDoc_STRVAR(doc_JntArrayVel_value, "value(self) -> JntArray");

extern "C" {static PyObject *meth_JntArrayVel_value(PyObject *, PyObject *);}
static PyObject *meth_JntArrayVel_value(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::JntArrayVel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_JntArrayVel, &sipCpp))
        {
             ::JntArray*sipRes;

            sipRes = new  ::JntArray(sipCpp->value());

            return sipConvertFromNewType(sipRes,sipType_JntArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_JntArrayVel, sipName_value, doc_JntArrayVel_value);

    return NULL;
}


PyDoc_STRVAR(doc_JntArrayVel_deriv, "deriv(self) -> JntArray");

extern "C" {static PyObject *meth_JntArrayVel_deriv(PyObject *, PyObject *);}
static PyObject *meth_JntArrayVel_deriv(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::JntArrayVel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_JntArrayVel, &sipCpp))
        {
             ::JntArray*sipRes;

            sipRes = new  ::JntArray(sipCpp->deriv());

            return sipConvertFromNewType(sipRes,sipType_JntArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_JntArrayVel, sipName_deriv, doc_JntArrayVel_deriv);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_JntArrayVel(void *, int);}
static void release_JntArrayVel(void *sipCppV, int)
{
    delete reinterpret_cast< ::JntArrayVel *>(sipCppV);
}


extern "C" {static void dealloc_JntArrayVel(sipSimpleWrapper *);}
static void dealloc_JntArrayVel(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_JntArrayVel(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_JntArrayVel(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_JntArrayVel(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::JntArrayVel *sipCpp = 0;

    {
        uint a0;

        static const char *sipKwdList[] = {
            sipName_size,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "u", &a0))
        {
            sipCpp = new  ::JntArrayVel(a0);

            return sipCpp;
        }
    }

    {
        const  ::JntArray* a0;
        const  ::JntArray* a1;

        static const char *sipKwdList[] = {
            sipName_q,
            sipName_qdot,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9J9", sipType_JntArray, &a0, sipType_JntArray, &a1))
        {
            sipCpp = new  ::JntArrayVel(*a0,*a1);

            return sipCpp;
        }
    }

    {
        const  ::JntArray* a0;

        static const char *sipKwdList[] = {
            sipName_q,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9", sipType_JntArray, &a0))
        {
            sipCpp = new  ::JntArrayVel(*a0);

            return sipCpp;
        }
    }

    {
        const  ::JntArrayVel* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_JntArrayVel, &a0))
        {
            sipCpp = new  ::JntArrayVel(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_JntArrayVel[] = {
    {SIP_MLNAME_CAST(sipName_deriv), meth_JntArrayVel_deriv, METH_VARARGS, SIP_MLDOC_CAST(doc_JntArrayVel_deriv)},
    {SIP_MLNAME_CAST(sipName_resize), (PyCFunction)meth_JntArrayVel_resize, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_JntArrayVel_resize)},
    {SIP_MLNAME_CAST(sipName_value), meth_JntArrayVel_value, METH_VARARGS, SIP_MLDOC_CAST(doc_JntArrayVel_value)}
};


extern "C" {static PyObject *varget_JntArrayVel_q(void *, PyObject *, PyObject *);}
static PyObject *varget_JntArrayVel_q(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::JntArray*sipVal;
     ::JntArrayVel *sipCpp = reinterpret_cast< ::JntArrayVel *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -18);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->q;

    sipPy = sipConvertFromType(sipVal, sipType_JntArray, NULL);

    if (sipPy)
    {
        sipKeepReference(sipPy, -17, sipPySelf);
        sipKeepReference(sipPySelf, -18, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_JntArrayVel_q(void *, PyObject *, PyObject *);}
static int varset_JntArrayVel_q(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::JntArray*sipVal;
     ::JntArrayVel *sipCpp = reinterpret_cast< ::JntArrayVel *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::JntArray *>(sipForceConvertToType(sipPy,sipType_JntArray,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->q = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_JntArrayVel_qdot(void *, PyObject *, PyObject *);}
static PyObject *varget_JntArrayVel_qdot(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::JntArray*sipVal;
     ::JntArrayVel *sipCpp = reinterpret_cast< ::JntArrayVel *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -20);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->qdot;

    sipPy = sipConvertFromType(sipVal, sipType_JntArray, NULL);

    if (sipPy)
    {
        sipKeepReference(sipPy, -19, sipPySelf);
        sipKeepReference(sipPySelf, -20, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_JntArrayVel_qdot(void *, PyObject *, PyObject *);}
static int varset_JntArrayVel_qdot(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::JntArray*sipVal;
     ::JntArrayVel *sipCpp = reinterpret_cast< ::JntArrayVel *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::JntArray *>(sipForceConvertToType(sipPy,sipType_JntArray,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->qdot = *sipVal;

    return 0;
}

sipVariableDef variables_JntArrayVel[] = {
    {InstanceVariable, sipName_q, (PyMethodDef *)varget_JntArrayVel_q, (PyMethodDef *)varset_JntArrayVel_q, NULL, NULL},
    {InstanceVariable, sipName_qdot, (PyMethodDef *)varget_JntArrayVel_qdot, (PyMethodDef *)varset_JntArrayVel_qdot, NULL, NULL},
};

PyDoc_STRVAR(doc_JntArrayVel, "\1JntArrayVel(size: int)\n"
"JntArrayVel(q: JntArray, qdot: JntArray)\n"
"JntArrayVel(q: JntArray)\n"
"JntArrayVel(JntArrayVel)");


sipClassTypeDef sipTypeDef_PyKDL_JntArrayVel = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_JntArrayVel,
        {0},
        0
    },
    {
        sipNameNr_JntArrayVel,
        {0, 0, 1},
        3, methods_JntArrayVel,
        0, 0,
        2, variables_JntArrayVel,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_JntArrayVel,
    -1,
    -1,
    0,
    0,
    init_type_JntArrayVel,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_JntArrayVel,
    0,
    0,
    0,
    release_JntArrayVel,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
