/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.7
 */

#include "sipAPIlibqt_gui_cpp_sip.h"

#line 8 "composite_plugin_provider.sip"
#include <qt_gui_cpp/composite_plugin_provider.h>
#line 12 "/home/koki/ros_catkin_ws/build_isolated/qt_gui_cpp/sip/qt_gui_cpp_sip/siplibqt_gui_cpp_sipqt_gui_cppCompositePluginProvider.cpp"

#line 149 "/usr/share/sip/PyQt5/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 16 "/home/koki/ros_catkin_ws/build_isolated/qt_gui_cpp/sip/qt_gui_cpp_sip/siplibqt_gui_cpp_sipqt_gui_cppCompositePluginProvider.cpp"
#line 7 "plugin_provider.sip"
#include <qt_gui_cpp/plugin_provider.h>
#line 19 "/home/koki/ros_catkin_ws/build_isolated/qt_gui_cpp/sip/qt_gui_cpp_sip/siplibqt_gui_cpp_sipqt_gui_cppCompositePluginProvider.cpp"
#line 8 "plugin.sip"
#include <qt_gui_cpp/plugin.h>
#line 22 "/home/koki/ros_catkin_ws/build_isolated/qt_gui_cpp/sip/qt_gui_cpp_sip/siplibqt_gui_cpp_sipqt_gui_cppCompositePluginProvider.cpp"
#line 27 "/usr/share/sip/PyQt5/QtCore/qstring.sip"
#include <qstring.h>
#line 25 "/home/koki/ros_catkin_ws/build_isolated/qt_gui_cpp/sip/qt_gui_cpp_sip/siplibqt_gui_cpp_sipqt_gui_cppCompositePluginProvider.cpp"
#line 7 "plugin_context.sip"
#include <qt_gui_cpp/plugin_context.h>
#line 28 "/home/koki/ros_catkin_ws/build_isolated/qt_gui_cpp/sip/qt_gui_cpp_sip/siplibqt_gui_cpp_sipqt_gui_cppCompositePluginProvider.cpp"
#line 149 "/usr/share/sip/PyQt5/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 31 "/home/koki/ros_catkin_ws/build_isolated/qt_gui_cpp/sip/qt_gui_cpp_sip/siplibqt_gui_cpp_sipqt_gui_cppCompositePluginProvider.cpp"
#line 7 "plugin_descriptor.sip"
#include <qt_gui_cpp/plugin_descriptor.h>
#line 34 "/home/koki/ros_catkin_ws/build_isolated/qt_gui_cpp/sip/qt_gui_cpp_sip/siplibqt_gui_cpp_sipqt_gui_cppCompositePluginProvider.cpp"
#line 28 "/usr/share/sip/PyQt5/QtCore/qobject.sip"
#include <qobject.h>
#line 37 "/home/koki/ros_catkin_ws/build_isolated/qt_gui_cpp/sip/qt_gui_cpp_sip/siplibqt_gui_cpp_sipqt_gui_cppCompositePluginProvider.cpp"
#line 27 "/usr/share/sip/PyQt5/QtCore/qpycore_qmap.sip"
#include <qmap.h>
#line 40 "/home/koki/ros_catkin_ws/build_isolated/qt_gui_cpp/sip/qt_gui_cpp_sip/siplibqt_gui_cpp_sipqt_gui_cppCompositePluginProvider.cpp"


class sipqt_gui_cpp_CompositePluginProvider : public  ::qt_gui_cpp::CompositePluginProvider
{
public:
    sipqt_gui_cpp_CompositePluginProvider(const QList< ::qt_gui_cpp::PluginProvider*>&);
    sipqt_gui_cpp_CompositePluginProvider(const  ::qt_gui_cpp::CompositePluginProvider&);
    virtual ~sipqt_gui_cpp_CompositePluginProvider();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void set_plugin_providers(const QList< ::qt_gui_cpp::PluginProvider*>&);
    QMap< ::QString, ::QString> discover( ::QObject*);
    QList< ::qt_gui_cpp::PluginDescriptor*> discover_descriptors( ::QObject*);
    void* load(const  ::QString&, ::qt_gui_cpp::PluginContext*);
     ::qt_gui_cpp::Plugin* load_plugin(const  ::QString&, ::qt_gui_cpp::PluginContext*);
    void unload(void*);
    void unload_plugin( ::qt_gui_cpp::Plugin*);
    void shutdown();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipqt_gui_cpp_CompositePluginProvider(const sipqt_gui_cpp_CompositePluginProvider &);
    sipqt_gui_cpp_CompositePluginProvider &operator = (const sipqt_gui_cpp_CompositePluginProvider &);

    char sipPyMethods[8];
};

sipqt_gui_cpp_CompositePluginProvider::sipqt_gui_cpp_CompositePluginProvider(const QList< ::qt_gui_cpp::PluginProvider*>& a0):  ::qt_gui_cpp::CompositePluginProvider(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipqt_gui_cpp_CompositePluginProvider::sipqt_gui_cpp_CompositePluginProvider(const  ::qt_gui_cpp::CompositePluginProvider& a0):  ::qt_gui_cpp::CompositePluginProvider(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipqt_gui_cpp_CompositePluginProvider::~sipqt_gui_cpp_CompositePluginProvider()
{
    sipInstanceDestroyed(sipPySelf);
}

void sipqt_gui_cpp_CompositePluginProvider::set_plugin_providers(const QList< ::qt_gui_cpp::PluginProvider*>& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_set_plugin_providers);

    if (!sipMeth)
    {
         ::qt_gui_cpp::CompositePluginProvider::set_plugin_providers(a0);
        return;
    }

    extern void sipVH_libqt_gui_cpp_sip_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QList< ::qt_gui_cpp::PluginProvider*>&);

    sipVH_libqt_gui_cpp_sip_7(sipGILState, sipImportedVirtErrorHandlers_libqt_gui_cpp_sip_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

QMap< ::QString, ::QString> sipqt_gui_cpp_CompositePluginProvider::discover( ::QObject*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_discover);

    if (!sipMeth)
        return  ::qt_gui_cpp::CompositePluginProvider::discover(a0);

    extern QMap< ::QString, ::QString> sipVH_libqt_gui_cpp_sip_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*);

    return sipVH_libqt_gui_cpp_sip_0(sipGILState, sipImportedVirtErrorHandlers_libqt_gui_cpp_sip_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

QList< ::qt_gui_cpp::PluginDescriptor*> sipqt_gui_cpp_CompositePluginProvider::discover_descriptors( ::QObject*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_discover_descriptors);

    if (!sipMeth)
        return  ::qt_gui_cpp::CompositePluginProvider::discover_descriptors(a0);

    extern QList< ::qt_gui_cpp::PluginDescriptor*> sipVH_libqt_gui_cpp_sip_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*);

    return sipVH_libqt_gui_cpp_sip_1(sipGILState, sipImportedVirtErrorHandlers_libqt_gui_cpp_sip_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void* sipqt_gui_cpp_CompositePluginProvider::load(const  ::QString& a0, ::qt_gui_cpp::PluginContext*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_load);

    if (!sipMeth)
        return  ::qt_gui_cpp::CompositePluginProvider::load(a0,a1);

    extern void* sipVH_libqt_gui_cpp_sip_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&, ::qt_gui_cpp::PluginContext*);

    return sipVH_libqt_gui_cpp_sip_2(sipGILState, sipImportedVirtErrorHandlers_libqt_gui_cpp_sip_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}

 ::qt_gui_cpp::Plugin* sipqt_gui_cpp_CompositePluginProvider::load_plugin(const  ::QString& a0, ::qt_gui_cpp::PluginContext*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_load_plugin);

    if (!sipMeth)
        return  ::qt_gui_cpp::CompositePluginProvider::load_plugin(a0,a1);

    extern  ::qt_gui_cpp::Plugin* sipVH_libqt_gui_cpp_sip_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&, ::qt_gui_cpp::PluginContext*);

    return sipVH_libqt_gui_cpp_sip_3(sipGILState, sipImportedVirtErrorHandlers_libqt_gui_cpp_sip_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}

void sipqt_gui_cpp_CompositePluginProvider::unload(void*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_unload);

    if (!sipMeth)
    {
         ::qt_gui_cpp::CompositePluginProvider::unload(a0);
        return;
    }

    extern void sipVH_libqt_gui_cpp_sip_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, void*);

    sipVH_libqt_gui_cpp_sip_4(sipGILState, sipImportedVirtErrorHandlers_libqt_gui_cpp_sip_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipqt_gui_cpp_CompositePluginProvider::unload_plugin( ::qt_gui_cpp::Plugin*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_unload_plugin);

    if (!sipMeth)
    {
         ::qt_gui_cpp::CompositePluginProvider::unload_plugin(a0);
        return;
    }

    extern void sipVH_libqt_gui_cpp_sip_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::qt_gui_cpp::Plugin*);

    sipVH_libqt_gui_cpp_sip_5(sipGILState, sipImportedVirtErrorHandlers_libqt_gui_cpp_sip_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipqt_gui_cpp_CompositePluginProvider::shutdown()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_shutdown);

    if (!sipMeth)
    {
         ::qt_gui_cpp::CompositePluginProvider::shutdown();
        return;
    }

    extern void sipVH_libqt_gui_cpp_sip_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_libqt_gui_cpp_sip_6(sipGILState, sipImportedVirtErrorHandlers_libqt_gui_cpp_sip_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}


extern "C" {static PyObject *meth_qt_gui_cpp_CompositePluginProvider_set_plugin_providers(PyObject *, PyObject *);}
static PyObject *meth_qt_gui_cpp_CompositePluginProvider_set_plugin_providers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const QList< ::qt_gui_cpp::PluginProvider*>* a0;
        int a0State = 0;
         ::qt_gui_cpp::CompositePluginProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_qt_gui_cpp_CompositePluginProvider, &sipCpp, sipType_QList_0101qt_gui_cpp_PluginProvider,&a0, &a0State))
        {
            (sipSelfWasArg ? sipCpp-> ::qt_gui_cpp::CompositePluginProvider::set_plugin_providers(*a0) : sipCpp->set_plugin_providers(*a0));
            sipReleaseType(const_cast<QList< ::qt_gui_cpp::PluginProvider*> *>(a0),sipType_QList_0101qt_gui_cpp_PluginProvider,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_CompositePluginProvider, sipName_set_plugin_providers, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_qt_gui_cpp_CompositePluginProvider_discover_descriptors(PyObject *, PyObject *);}
static PyObject *meth_qt_gui_cpp_CompositePluginProvider_discover_descriptors(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QObject* a0;
         ::qt_gui_cpp::CompositePluginProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_qt_gui_cpp_CompositePluginProvider, &sipCpp, sipType_QObject, &a0))
        {
            QList< ::qt_gui_cpp::PluginDescriptor*>*sipRes;

            sipRes = new QList< ::qt_gui_cpp::PluginDescriptor*>((sipSelfWasArg ? sipCpp-> ::qt_gui_cpp::CompositePluginProvider::discover_descriptors(a0) : sipCpp->discover_descriptors(a0)));

            return sipConvertFromNewType(sipRes,sipType_QList_0101qt_gui_cpp_PluginDescriptor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_CompositePluginProvider, sipName_discover_descriptors, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_qt_gui_cpp_CompositePluginProvider_load(PyObject *, PyObject *);}
static PyObject *meth_qt_gui_cpp_CompositePluginProvider_load(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QString* a0;
        int a0State = 0;
         ::qt_gui_cpp::PluginContext* a1;
         ::qt_gui_cpp::CompositePluginProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J8", &sipSelf, sipType_qt_gui_cpp_CompositePluginProvider, &sipCpp, sipType_QString,&a0, &a0State, sipType_qt_gui_cpp_PluginContext, &a1))
        {
            void*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::qt_gui_cpp::CompositePluginProvider::load(*a0,a1) : sipCpp->load(*a0,a1));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_CompositePluginProvider, sipName_load, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_qt_gui_cpp_CompositePluginProvider_load_plugin(PyObject *, PyObject *);}
static PyObject *meth_qt_gui_cpp_CompositePluginProvider_load_plugin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QString* a0;
        int a0State = 0;
         ::qt_gui_cpp::PluginContext* a1;
         ::qt_gui_cpp::CompositePluginProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J8", &sipSelf, sipType_qt_gui_cpp_CompositePluginProvider, &sipCpp, sipType_QString,&a0, &a0State, sipType_qt_gui_cpp_PluginContext, &a1))
        {
             ::qt_gui_cpp::Plugin*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::qt_gui_cpp::CompositePluginProvider::load_plugin(*a0,a1) : sipCpp->load_plugin(*a0,a1));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromType(sipRes,sipType_qt_gui_cpp_Plugin,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_CompositePluginProvider, sipName_load_plugin, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_qt_gui_cpp_CompositePluginProvider_unload(PyObject *, PyObject *);}
static PyObject *meth_qt_gui_cpp_CompositePluginProvider_unload(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        void* a0;
         ::qt_gui_cpp::CompositePluginProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bv", &sipSelf, sipType_qt_gui_cpp_CompositePluginProvider, &sipCpp, &a0))
        {
            (sipSelfWasArg ? sipCpp-> ::qt_gui_cpp::CompositePluginProvider::unload(a0) : sipCpp->unload(a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_CompositePluginProvider, sipName_unload, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_qt_gui_cpp_CompositePluginProvider_shutdown(PyObject *, PyObject *);}
static PyObject *meth_qt_gui_cpp_CompositePluginProvider_shutdown(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::qt_gui_cpp::CompositePluginProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_qt_gui_cpp_CompositePluginProvider, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp-> ::qt_gui_cpp::CompositePluginProvider::shutdown() : sipCpp->shutdown());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_CompositePluginProvider, sipName_shutdown, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_qt_gui_cpp_CompositePluginProvider(void *, const sipTypeDef *);}
static void *cast_qt_gui_cpp_CompositePluginProvider(void *sipCppV, const sipTypeDef *targetType)
{
     ::qt_gui_cpp::CompositePluginProvider *sipCpp = reinterpret_cast< ::qt_gui_cpp::CompositePluginProvider *>(sipCppV);

    if (targetType == sipType_qt_gui_cpp_PluginProvider)
        return static_cast< ::qt_gui_cpp::PluginProvider *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_qt_gui_cpp_CompositePluginProvider(void *, int);}
static void release_qt_gui_cpp_CompositePluginProvider(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipqt_gui_cpp_CompositePluginProvider *>(sipCppV);
    else
        delete reinterpret_cast< ::qt_gui_cpp::CompositePluginProvider *>(sipCppV);
}


extern "C" {static void assign_qt_gui_cpp_CompositePluginProvider(void *, SIP_SSIZE_T, void *);}
static void assign_qt_gui_cpp_CompositePluginProvider(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::qt_gui_cpp::CompositePluginProvider *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::qt_gui_cpp::CompositePluginProvider *>(sipSrc);
}


extern "C" {static void *array_qt_gui_cpp_CompositePluginProvider(SIP_SSIZE_T);}
static void *array_qt_gui_cpp_CompositePluginProvider(SIP_SSIZE_T sipNrElem)
{
    return new  ::qt_gui_cpp::CompositePluginProvider[sipNrElem];
}


extern "C" {static void *copy_qt_gui_cpp_CompositePluginProvider(const void *, SIP_SSIZE_T);}
static void *copy_qt_gui_cpp_CompositePluginProvider(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::qt_gui_cpp::CompositePluginProvider(reinterpret_cast<const  ::qt_gui_cpp::CompositePluginProvider *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_qt_gui_cpp_CompositePluginProvider(sipSimpleWrapper *);}
static void dealloc_qt_gui_cpp_CompositePluginProvider(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipqt_gui_cpp_CompositePluginProvider *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_qt_gui_cpp_CompositePluginProvider(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_qt_gui_cpp_CompositePluginProvider(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_qt_gui_cpp_CompositePluginProvider(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipqt_gui_cpp_CompositePluginProvider *sipCpp = 0;

    {
        const QList< ::qt_gui_cpp::PluginProvider*>& a0def = QList<qt_gui_cpp::PluginProvider*>();
        const QList< ::qt_gui_cpp::PluginProvider*>* a0 = &a0def;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "|J1", sipType_QList_0101qt_gui_cpp_PluginProvider,&a0, &a0State))
        {
            sipCpp = new sipqt_gui_cpp_CompositePluginProvider(*a0);
            sipReleaseType(const_cast<QList< ::qt_gui_cpp::PluginProvider*> *>(a0),sipType_QList_0101qt_gui_cpp_PluginProvider,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::qt_gui_cpp::CompositePluginProvider* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_qt_gui_cpp_CompositePluginProvider, &a0))
        {
            sipCpp = new sipqt_gui_cpp_CompositePluginProvider(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_qt_gui_cpp_CompositePluginProvider[] = {{10, 255, 1}};


static PyMethodDef methods_qt_gui_cpp_CompositePluginProvider[] = {
    {SIP_MLNAME_CAST(sipName_discover_descriptors), meth_qt_gui_cpp_CompositePluginProvider_discover_descriptors, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_load), meth_qt_gui_cpp_CompositePluginProvider_load, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_load_plugin), meth_qt_gui_cpp_CompositePluginProvider_load_plugin, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_set_plugin_providers), meth_qt_gui_cpp_CompositePluginProvider_set_plugin_providers, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_shutdown), meth_qt_gui_cpp_CompositePluginProvider_shutdown, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_unload), meth_qt_gui_cpp_CompositePluginProvider_unload, METH_VARARGS, NULL}
};


static pyqt5ClassPluginDef plugin_qt_gui_cpp_CompositePluginProvider = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_libqt_gui_cpp_sip_qt_gui_cpp_CompositePluginProvider = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_qt_gui_cpp__CompositePluginProvider,
        {0},
        &plugin_qt_gui_cpp_CompositePluginProvider
    },
    {
        sipNameNr_CompositePluginProvider,
        {3, 255, 0},
        6, methods_qt_gui_cpp_CompositePluginProvider,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_qt_gui_cpp_CompositePluginProvider,
    0,
    init_type_qt_gui_cpp_CompositePluginProvider,
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
    dealloc_qt_gui_cpp_CompositePluginProvider,
    assign_qt_gui_cpp_CompositePluginProvider,
    array_qt_gui_cpp_CompositePluginProvider,
    copy_qt_gui_cpp_CompositePluginProvider,
    release_qt_gui_cpp_CompositePluginProvider,
    cast_qt_gui_cpp_CompositePluginProvider,
    0,
    0,
    0,
    0,
    0,
    0
};
