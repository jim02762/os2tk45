
/*
 * This file was generated by the SOM Compiler.
 * FileName: implrep.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

/*
 *   CLASS SPECIFICATION FOR IMPLEMENTATION REPOSITORY
 */


#ifndef SOM_ImplRepository_h
#define SOM_ImplRepository_h


#include <som.h>

/*
 * -- This emitter treats Method Tokens as Thunks by default.
 * -- Use the sc modifier "nothunks" to change this default
 */
#undef somresolve_
#define somresolve_(obj,mToken) ((somMethodProc*)((void)obj, mToken))

/*
 * Define the class name as an object type
 */
#ifndef ImplRepository
#define ImplRepository SOMObject
#endif
#include <somobj.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#ifndef Container
    #define Container SOMObject
#endif /* Container */
#ifndef ImplementationDef
    #define ImplementationDef SOMObject
#endif /* ImplementationDef */
#ifndef _IDL_SEQUENCE_ImplementationDef_defined
#define _IDL_SEQUENCE_ImplementationDef_defined
typedef struct {
    unsigned long _maximum;
    unsigned long _length;
    ImplementationDef **_buffer;
} _IDL_SEQUENCE_ImplementationDef;
#endif /* _IDL_SEQUENCE_ImplementationDef_defined */ 
#ifndef _IDL_SEQUENCE_string_defined
#define _IDL_SEQUENCE_string_defined
typedef struct {
    unsigned long _maximum;
    unsigned long _length;
    string *_buffer;
} _IDL_SEQUENCE_string;
#endif /* _IDL_SEQUENCE_string_defined */ 

#ifndef SOM_DONT_USE_SHORT_NAMES
#endif /* SOM_DONT_USE_SHORT_NAMES */

/*
 * End of bindings for IDL types.
 */

/*
 * Passthru lines: File: "C.h", "after"
 */

#include <impldef.h>

#ifdef SOM_STRICT_IDL
SOMEXTERN ImplRepository   SOMDLINK SOMD_ImplRepObject;
#else
SOMEXTERN ImplRepository * SOMDLINK SOMD_ImplRepObject;
#endif /* SOM_STRICT_IDL */


#define ImplRepository_MajorVersion 2
#define ImplRepository_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define ImplRepositoryNewClass c
#pragma linkage(c, system)
#define ImplRepositoryClassData d
#define ImplRepositoryCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */

/*
 * Include the metaclass file
 */
#ifndef SOM_SOMMSingleInstance_h
#include <snglicls.h>
#endif
/*--------------Migration------------*/
#define ImplRepository_classObj ImplRepositoryClassData.classObject
#define _ImplRepository ImplRepository_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK ImplRepositoryNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(ImplRepositoryNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct ImplRepositoryClassDataStructure {
	SOMClass *classObject;
	somMToken find_impldef;
	somMToken find_impldef_by_alias;
	somMToken find_impldef2;
	somMToken find_impldef_by_alias2;
	somMToken find_impldef_by_class;
	somMToken add_impldef;
	somMToken update_impldef;
	somMToken delete_impldef;
	somMToken add_class_to_impldef;
	somMToken remove_class_from_impldef;
	somMToken remove_class_from_all;
	somMToken find_classes_by_impldef;
	somMToken implr_get_impl;
	somMToken implr_search_impl;
	somMToken implr_search_class;
	somMToken implr_update_impl;
	somMToken find_all_impldefs;
} SOMDLINK ImplRepositoryClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct ImplRepositoryCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK ImplRepositoryCClassData;

/*
 * New and Renew macros for ImplRepository
 */
#define ImplRepositoryNew() \
   ( _ImplRepository ? \
	_somNew(_ImplRepository) \
	: ( ImplRepositoryNewClass(\
		ImplRepository_MajorVersion, \
		ImplRepository_MinorVersion),\
	   _somNew(_ImplRepository)))
#define ImplRepositoryRenew(buf) \
   ( _ImplRepository ? \
	_somRenew(_ImplRepository, buf) \
	: ( ImplRepositoryNewClass(\
		ImplRepository_MajorVersion, \
		ImplRepository_MinorVersion),\
	   _somRenew(_ImplRepository, buf)))

/*
 * Override method: somInit
 */
#define ImplRepository_somInit(somSelf) \
	SOMObject_somInit(somSelf)

/*
 * Override method: somUninit
 */
#define ImplRepository_somUninit(somSelf) \
	SOMObject_somUninit(somSelf)

/*
 * New Method: find_impldef
 */
typedef ImplementationDef*   SOMLINK somTP_ImplRepository_find_impldef(ImplRepository *somSelf, Environment *ev, 
		ImplId implid);
#pragma linkage(somTP_ImplRepository_find_impldef, system)
typedef somTP_ImplRepository_find_impldef *somTD_ImplRepository_find_impldef;
/*
 *  This method searches the Implementation Repository and returns
 *  an ImplementationDef object with the specified implid.
 */
#define somMD_ImplRepository_find_impldef "::ImplRepository::find_impldef"
#define ImplRepository_find_impldef(somSelf,ev,implid) \
    (SOM_Resolve(somSelf, ImplRepository, find_impldef) \
	(somSelf,ev,implid))
#ifndef SOMGD_find_impldef
    #if (defined(_find_impldef) || defined(__find_impldef))
        #undef _find_impldef
        #undef __find_impldef
        #define SOMGD_find_impldef 1
    #else
        #define _find_impldef ImplRepository_find_impldef
    #endif /* _find_impldef */
#endif /* SOMGD_find_impldef */

/*
 * New Method: find_impldef_by_alias
 */
typedef ImplementationDef*   SOMLINK somTP_ImplRepository_find_impldef_by_alias(ImplRepository *somSelf, Environment *ev, 
		string alias_name);
#pragma linkage(somTP_ImplRepository_find_impldef_by_alias, system)
typedef somTP_ImplRepository_find_impldef_by_alias *somTD_ImplRepository_find_impldef_by_alias;
/*
 *  This method searches the Implementation Repository and returns
 *  an ImplementationDef object with the specified name (alias).
 */
#define somMD_ImplRepository_find_impldef_by_alias "::ImplRepository::find_impldef_by_alias"
#define ImplRepository_find_impldef_by_alias(somSelf,ev,alias_name) \
    (SOM_Resolve(somSelf, ImplRepository, find_impldef_by_alias) \
	(somSelf,ev,alias_name))
#ifndef SOMGD_find_impldef_by_alias
    #if (defined(_find_impldef_by_alias) || defined(__find_impldef_by_alias))
        #undef _find_impldef_by_alias
        #undef __find_impldef_by_alias
        #define SOMGD_find_impldef_by_alias 1
    #else
        #define _find_impldef_by_alias ImplRepository_find_impldef_by_alias
    #endif /* _find_impldef_by_alias */
#endif /* SOMGD_find_impldef_by_alias */

/*
 * New Method: find_all_impldefs
 */
typedef ORBStatus   SOMLINK somTP_ImplRepository_find_all_impldefs(ImplRepository *somSelf, Environment *ev, 
		_IDL_SEQUENCE_ImplementationDef* outimpldefs);
#pragma linkage(somTP_ImplRepository_find_all_impldefs, system)
typedef somTP_ImplRepository_find_all_impldefs *somTD_ImplRepository_find_all_impldefs;
/*
 *  This method searches the Implementation Repository and returns
 *  all the ImplementationDef objects in it.
 */
#define somMD_ImplRepository_find_all_impldefs "::ImplRepository::find_all_impldefs"
#define ImplRepository_find_all_impldefs(somSelf,ev,outimpldefs) \
    (SOM_Resolve(somSelf, ImplRepository, find_all_impldefs) \
	(somSelf,ev,outimpldefs))
#ifndef SOMGD_find_all_impldefs
    #if (defined(_find_all_impldefs) || defined(__find_all_impldefs))
        #undef _find_all_impldefs
        #undef __find_all_impldefs
        #define SOMGD_find_all_impldefs 1
    #else
        #define _find_all_impldefs ImplRepository_find_all_impldefs
    #endif /* _find_all_impldefs */
#endif /* SOMGD_find_all_impldefs */

/*
 * New Method: find_impldef_by_class
 */
typedef _IDL_SEQUENCE_ImplementationDef   SOMLINK somTP_ImplRepository_find_impldef_by_class(ImplRepository *somSelf, Environment *ev, 
		string classname);
#pragma linkage(somTP_ImplRepository_find_impldef_by_class, system)
typedef somTP_ImplRepository_find_impldef_by_class *somTD_ImplRepository_find_impldef_by_class;
/*
 *  This method searches the class index and returns the sequence of
 *  ImplementationDef objects for servers which implement that class.
 */
#define somMD_ImplRepository_find_impldef_by_class "::ImplRepository::find_impldef_by_class"
#define ImplRepository_find_impldef_by_class(somSelf,ev,classname) \
    (SOM_Resolve(somSelf, ImplRepository, find_impldef_by_class) \
	(somSelf,ev,classname))
#ifndef SOMGD_find_impldef_by_class
    #if (defined(_find_impldef_by_class) || defined(__find_impldef_by_class))
        #undef _find_impldef_by_class
        #undef __find_impldef_by_class
        #define SOMGD_find_impldef_by_class 1
    #else
        #define _find_impldef_by_class ImplRepository_find_impldef_by_class
    #endif /* _find_impldef_by_class */
#endif /* SOMGD_find_impldef_by_class */

/*
 * New Method: add_impldef
 */
typedef void   SOMLINK somTP_ImplRepository_add_impldef(ImplRepository *somSelf, Environment *ev, 
		ImplementationDef* impldef);
#pragma linkage(somTP_ImplRepository_add_impldef, system)
typedef somTP_ImplRepository_add_impldef *somTD_ImplRepository_add_impldef;
/*
 *  This method inserts an ImplementationDef object into the Implementation
 *  Repository.
 */
#define somMD_ImplRepository_add_impldef "::ImplRepository::add_impldef"
#define ImplRepository_add_impldef(somSelf,ev,impldef) \
    (SOM_Resolve(somSelf, ImplRepository, add_impldef) \
	(somSelf,ev,impldef))
#ifndef SOMGD_add_impldef
    #if (defined(_add_impldef) || defined(__add_impldef))
        #undef _add_impldef
        #undef __add_impldef
        #define SOMGD_add_impldef 1
    #else
        #define _add_impldef ImplRepository_add_impldef
    #endif /* _add_impldef */
#endif /* SOMGD_add_impldef */

/*
 * New Method: update_impldef
 */
typedef void   SOMLINK somTP_ImplRepository_update_impldef(ImplRepository *somSelf, Environment *ev, 
		ImplementationDef* impldef);
#pragma linkage(somTP_ImplRepository_update_impldef, system)
typedef somTP_ImplRepository_update_impldef *somTD_ImplRepository_update_impldef;
/*
 *  This method replaces an ImplementationDef object in the Implementation
 *  Repository with the supplied object.  The "impl_id" attribute of the
 *  supplied object is used to find the object to replace in the Impl.
 *  Repository.
 */
#define somMD_ImplRepository_update_impldef "::ImplRepository::update_impldef"
#define ImplRepository_update_impldef(somSelf,ev,impldef) \
    (SOM_Resolve(somSelf, ImplRepository, update_impldef) \
	(somSelf,ev,impldef))
#ifndef SOMGD_update_impldef
    #if (defined(_update_impldef) || defined(__update_impldef))
        #undef _update_impldef
        #undef __update_impldef
        #define SOMGD_update_impldef 1
    #else
        #define _update_impldef ImplRepository_update_impldef
    #endif /* _update_impldef */
#endif /* SOMGD_update_impldef */

/*
 * New Method: delete_impldef
 */
typedef void   SOMLINK somTP_ImplRepository_delete_impldef(ImplRepository *somSelf, Environment *ev, 
		ImplId implid);
#pragma linkage(somTP_ImplRepository_delete_impldef, system)
typedef somTP_ImplRepository_delete_impldef *somTD_ImplRepository_delete_impldef;
/*
 *  This method deletes the ImplementationDef object with the specified
 *  implid from the Implementation Repository.
 */
#define somMD_ImplRepository_delete_impldef "::ImplRepository::delete_impldef"
#define ImplRepository_delete_impldef(somSelf,ev,implid) \
    (SOM_Resolve(somSelf, ImplRepository, delete_impldef) \
	(somSelf,ev,implid))
#ifndef SOMGD_delete_impldef
    #if (defined(_delete_impldef) || defined(__delete_impldef))
        #undef _delete_impldef
        #undef __delete_impldef
        #define SOMGD_delete_impldef 1
    #else
        #define _delete_impldef ImplRepository_delete_impldef
    #endif /* _delete_impldef */
#endif /* SOMGD_delete_impldef */

/*
 * New Method: add_class_to_impldef
 */
typedef void   SOMLINK somTP_ImplRepository_add_class_to_impldef(ImplRepository *somSelf, Environment *ev, 
		ImplId implid, 
		string classname);
#pragma linkage(somTP_ImplRepository_add_class_to_impldef, system)
typedef somTP_ImplRepository_add_class_to_impldef *somTD_ImplRepository_add_class_to_impldef;
/*
 *  This method associates the classname with the ImplementationDef
 *  whose id is "implid".  This is meant to indicate that the server
 *  (specified by the ImplementationDef) implements the named class.
 */
#define somMD_ImplRepository_add_class_to_impldef "::ImplRepository::add_class_to_impldef"
#define ImplRepository_add_class_to_impldef(somSelf,ev,implid,classname) \
    (SOM_Resolve(somSelf, ImplRepository, add_class_to_impldef) \
	(somSelf,ev,implid,classname))
#ifndef SOMGD_add_class_to_impldef
    #if (defined(_add_class_to_impldef) || defined(__add_class_to_impldef))
        #undef _add_class_to_impldef
        #undef __add_class_to_impldef
        #define SOMGD_add_class_to_impldef 1
    #else
        #define _add_class_to_impldef ImplRepository_add_class_to_impldef
    #endif /* _add_class_to_impldef */
#endif /* SOMGD_add_class_to_impldef */

/*
 * New Method: remove_class_from_impldef
 */
typedef void   SOMLINK somTP_ImplRepository_remove_class_from_impldef(ImplRepository *somSelf, Environment *ev, 
		ImplId implid, 
		string classname);
#pragma linkage(somTP_ImplRepository_remove_class_from_impldef, system)
typedef somTP_ImplRepository_remove_class_from_impldef *somTD_ImplRepository_remove_class_from_impldef;
/*
 *  This method removes the classname from the list of classnames
 *  associated with the ImplementationDef whose id is "implid".
 */
#define somMD_ImplRepository_remove_class_from_impldef "::ImplRepository::remove_class_from_impldef"
#define ImplRepository_remove_class_from_impldef(somSelf,ev,implid,classname) \
    (SOM_Resolve(somSelf, ImplRepository, remove_class_from_impldef) \
	(somSelf,ev,implid,classname))
#ifndef SOMGD_remove_class_from_impldef
    #if (defined(_remove_class_from_impldef) || defined(__remove_class_from_impldef))
        #undef _remove_class_from_impldef
        #undef __remove_class_from_impldef
        #define SOMGD_remove_class_from_impldef 1
    #else
        #define _remove_class_from_impldef ImplRepository_remove_class_from_impldef
    #endif /* _remove_class_from_impldef */
#endif /* SOMGD_remove_class_from_impldef */

/*
 * New Method: remove_class_from_all
 */
typedef void   SOMLINK somTP_ImplRepository_remove_class_from_all(ImplRepository *somSelf, Environment *ev, 
		string classname);
#pragma linkage(somTP_ImplRepository_remove_class_from_all, system)
typedef somTP_ImplRepository_remove_class_from_all *somTD_ImplRepository_remove_class_from_all;
/*
 *  This method removes the classname from all the ImplementationDefs.
 */
#define somMD_ImplRepository_remove_class_from_all "::ImplRepository::remove_class_from_all"
#define ImplRepository_remove_class_from_all(somSelf,ev,classname) \
    (SOM_Resolve(somSelf, ImplRepository, remove_class_from_all) \
	(somSelf,ev,classname))
#ifndef SOMGD_remove_class_from_all
    #if (defined(_remove_class_from_all) || defined(__remove_class_from_all))
        #undef _remove_class_from_all
        #undef __remove_class_from_all
        #define SOMGD_remove_class_from_all 1
    #else
        #define _remove_class_from_all ImplRepository_remove_class_from_all
    #endif /* _remove_class_from_all */
#endif /* SOMGD_remove_class_from_all */

/*
 * New Method: find_classes_by_impldef
 */
typedef _IDL_SEQUENCE_string   SOMLINK somTP_ImplRepository_find_classes_by_impldef(ImplRepository *somSelf, Environment *ev, 
		ImplId implid);
#pragma linkage(somTP_ImplRepository_find_classes_by_impldef, system)
typedef somTP_ImplRepository_find_classes_by_impldef *somTD_ImplRepository_find_classes_by_impldef;
/*
 *  This method searches the class index and returns the sequence of
 *  class names supported by a server with specified "implid".
 */
#define somMD_ImplRepository_find_classes_by_impldef "::ImplRepository::find_classes_by_impldef"
#define ImplRepository_find_classes_by_impldef(somSelf,ev,implid) \
    (SOM_Resolve(somSelf, ImplRepository, find_classes_by_impldef) \
	(somSelf,ev,implid))
#ifndef SOMGD_find_classes_by_impldef
    #if (defined(_find_classes_by_impldef) || defined(__find_classes_by_impldef))
        #undef _find_classes_by_impldef
        #undef __find_classes_by_impldef
        #define SOMGD_find_classes_by_impldef 1
    #else
        #define _find_classes_by_impldef ImplRepository_find_classes_by_impldef
    #endif /* _find_classes_by_impldef */
#endif /* SOMGD_find_classes_by_impldef */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define ImplRepository_somDefaultInit SOMObject_somDefaultInit
#define ImplRepository_somDestruct SOMObject_somDestruct
#define ImplRepository_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define ImplRepository_somDefaultAssign SOMObject_somDefaultAssign
#define ImplRepository_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define ImplRepository_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define ImplRepository_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define ImplRepository_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define ImplRepository_somDefaultVAssign SOMObject_somDefaultVAssign
#define ImplRepository_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define ImplRepository_somFree SOMObject_somFree
#define ImplRepository_somGetClass SOMObject_somGetClass
#define ImplRepository_somGetClassName SOMObject_somGetClassName
#define ImplRepository_somGetSize SOMObject_somGetSize
#define ImplRepository_somIsA SOMObject_somIsA
#define ImplRepository_somIsInstanceOf SOMObject_somIsInstanceOf
#define ImplRepository_somRespondsTo SOMObject_somRespondsTo
#define ImplRepository_somDispatch SOMObject_somDispatch
#define ImplRepository_somClassDispatch SOMObject_somClassDispatch
#define ImplRepository_somCastObj SOMObject_somCastObj
#define ImplRepository_somResetObj SOMObject_somResetObj
#define ImplRepository_somDispatchV SOMObject_somDispatchV
#define ImplRepository_somDispatchL SOMObject_somDispatchL
#define ImplRepository_somDispatchA SOMObject_somDispatchA
#define ImplRepository_somDispatchD SOMObject_somDispatchD
#define ImplRepository_somPrintSelf SOMObject_somPrintSelf
#define ImplRepository_somDumpSelf SOMObject_somDumpSelf
#define ImplRepository_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_ImplRepository_h */