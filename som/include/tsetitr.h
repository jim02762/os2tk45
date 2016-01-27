
/*
 * This file was generated by the SOM Compiler.
 * FileName: tsetitr.h.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emith: 2.47
 */

/*
 *    COMPONENT_NAME: somuc
 * 
 *    ORIGINS: 82, 81, 27
 * 
 * 
 *     25H7912  (C)  COPYRIGHT International Business Machines Corp. 1992,1996,1996
 *    All Rights Reserved
 *    Licensed Materials - Property of IBM
 *    US Government Users Restricted Rights - Use, duplication or
 *    disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 * 
 *    Copyright � 1988, 1989 Apple Computer, Inc. All rights reserved.
 * 
 * CLASS_NAME: somf_TSetIterator
 * 
 * DESCRIPTION: An iterator for TSet's that will iterate over all of the objects
 *              in a set.
 * 
 */


#ifndef SOM_somf_TSetIterator_h
#define SOM_somf_TSetIterator_h


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
#ifndef somf_TSetIterator
#define somf_TSetIterator SOMObject
#endif
#include <titeratr.h>

/*
 * Start of bindings for IDL types
 */

#ifndef SOMClass
    #define SOMClass SOMObject
#endif /* SOMClass */
#ifndef somf_MCollectible
    #define somf_MCollectible SOMObject
#endif /* somf_MCollectible */
#ifndef somf_TSet
    #define somf_TSet SOMObject
#endif /* somf_TSet */
#ifndef TSAssoc
    #define TSAssoc SOMObject
#endif /* TSAssoc */

/*
 * End of bindings for IDL types.
 */

/*
 * Passthru lines: File: "C.h", "after"
 */

#include <tset.h>
#include <mcollect.h>

#define somf_TSetIterator_MajorVersion 2
#define somf_TSetIterator_MinorVersion 1

/*
 * External name shortening if required
 */
#ifdef SOM_USE_SHORT_EXTERNAL_NAMES
#define somf_TSetIteratorNewClass c
#pragma linkage(c, system)
#define somf_TSetIteratorClassData d
#define somf_TSetIteratorCClassData x
#endif /* SOM_USE_SHORT_EXTERNAL_NAMES */
/*--------------Migration------------*/
#define somf_TSetIterator_classObj somf_TSetIteratorClassData.classObject
#define _somf_TSetIterator somf_TSetIterator_classObj

/*
 * Declare the class creation procedure
 */
SOMEXTERN SOMClass * SOMLINK somf_TSetIteratorNewClass(integer4 somtmajorVersion,
		integer4 somtminorVersion);
#pragma linkage(somf_TSetIteratorNewClass, system)

/*
 * Declare the class data structure
 */
SOMEXTERN struct somf_TSetIteratorClassDataStructure {
	SOMClass *classObject;
	somMToken somfTSetIteratorInit;
} SOMDLINK somf_TSetIteratorClassData;

/*
 * Declare the C specific class data structure
 */
SOMEXTERN struct somf_TSetIteratorCClassDataStructure {
	somMethodTabs parentMtab;
	somDToken instanceDataToken;
} SOMDLINK somf_TSetIteratorCClassData;

/*
 * New and Renew macros for somf_TSetIterator
 */
#define somf_TSetIteratorNew() \
   ( _somf_TSetIterator ? \
	_somNew(_somf_TSetIterator) \
	: ( somf_TSetIteratorNewClass(\
		somf_TSetIterator_MajorVersion, \
		somf_TSetIterator_MinorVersion),\
	   _somNew(_somf_TSetIterator)))
#define somf_TSetIteratorRenew(buf) \
   ( _somf_TSetIterator ? \
	_somRenew(_somf_TSetIterator, buf) \
	: ( somf_TSetIteratorNewClass(\
		somf_TSetIterator_MajorVersion, \
		somf_TSetIterator_MinorVersion),\
	   _somRenew(_somf_TSetIterator, buf)))

/*
 * Override method: somUninit
 */
#define somf_TSetIterator_somUninit(somSelf) \
	SOMObject_somUninit(somSelf)

/*
 * Override method: somfNext
 */
#define somf_TSetIterator_somfNext(somSelf,ev) \
	somf_TIterator_somfNext(somSelf,ev)

/*
 * Override method: somfFirst
 */
#define somf_TSetIterator_somfFirst(somSelf,ev) \
	somf_TIterator_somfFirst(somSelf,ev)

/*
 * Override method: somfRemove
 */
#define somf_TSetIterator_somfRemove(somSelf,ev) \
	somf_TIterator_somfRemove(somSelf,ev)

/*
 * New Method: somfTSetIteratorInit
 */
typedef somf_TSetIterator*   SOMLINK somTP_somf_TSetIterator_somfTSetIteratorInit(somf_TSetIterator *somSelf, Environment *ev, 
		somf_TSet* h);
#pragma linkage(somTP_somf_TSetIterator_somfTSetIteratorInit, system)
typedef somTP_somf_TSetIterator_somfTSetIteratorInit *somTD_somf_TSetIterator_somfTSetIteratorInit;
/*
 *  Initialize somf_TSetIterator using somf_TSet h.
 */
#define somMD_somf_TSetIterator_somfTSetIteratorInit "::somf_TSetIterator::somfTSetIteratorInit"
#define somf_TSetIterator_somfTSetIteratorInit(somSelf,ev,h) \
    (SOM_Resolve(somSelf, somf_TSetIterator, somfTSetIteratorInit) \
	(somSelf,ev,h))
#ifndef SOMGD_somfTSetIteratorInit
    #if (defined(_somfTSetIteratorInit) || defined(__somfTSetIteratorInit))
        #undef _somfTSetIteratorInit
        #undef __somfTSetIteratorInit
        #define SOMGD_somfTSetIteratorInit 1
    #else
        #define _somfTSetIteratorInit somf_TSetIterator_somfTSetIteratorInit
    #endif /* _somfTSetIteratorInit */
#endif /* SOMGD_somfTSetIteratorInit */
#ifndef SOM_DONT_USE_INHERITED_MACROS
#define somf_TSetIterator_somDefaultInit SOMObject_somDefaultInit
#define somf_TSetIterator_somDestruct SOMObject_somDestruct
#define somf_TSetIterator_somDefaultCopyInit SOMObject_somDefaultCopyInit
#define somf_TSetIterator_somDefaultAssign SOMObject_somDefaultAssign
#define somf_TSetIterator_somDefaultConstCopyInit SOMObject_somDefaultConstCopyInit
#define somf_TSetIterator_somDefaultVCopyInit SOMObject_somDefaultVCopyInit
#define somf_TSetIterator_somDefaultConstVCopyInit SOMObject_somDefaultConstVCopyInit
#define somf_TSetIterator_somDefaultConstAssign SOMObject_somDefaultConstAssign
#define somf_TSetIterator_somDefaultVAssign SOMObject_somDefaultVAssign
#define somf_TSetIterator_somDefaultConstVAssign SOMObject_somDefaultConstVAssign
#define somf_TSetIterator_somInit SOMObject_somInit
#define somf_TSetIterator_somFree SOMObject_somFree
#define somf_TSetIterator_somGetClass SOMObject_somGetClass
#define somf_TSetIterator_somGetClassName SOMObject_somGetClassName
#define somf_TSetIterator_somGetSize SOMObject_somGetSize
#define somf_TSetIterator_somIsA SOMObject_somIsA
#define somf_TSetIterator_somIsInstanceOf SOMObject_somIsInstanceOf
#define somf_TSetIterator_somRespondsTo SOMObject_somRespondsTo
#define somf_TSetIterator_somDispatch SOMObject_somDispatch
#define somf_TSetIterator_somClassDispatch SOMObject_somClassDispatch
#define somf_TSetIterator_somCastObj SOMObject_somCastObj
#define somf_TSetIterator_somResetObj SOMObject_somResetObj
#define somf_TSetIterator_somDispatchV SOMObject_somDispatchV
#define somf_TSetIterator_somDispatchL SOMObject_somDispatchL
#define somf_TSetIterator_somDispatchA SOMObject_somDispatchA
#define somf_TSetIterator_somDispatchD SOMObject_somDispatchD
#define somf_TSetIterator_somPrintSelf SOMObject_somPrintSelf
#define somf_TSetIterator_somDumpSelf SOMObject_somDumpSelf
#define somf_TSetIterator_somDumpSelfInt SOMObject_somDumpSelfInt
#endif /* SOM_DONT_USE_INHERITED_MACROS */

#endif       /* SOM_somf_TSetIterator_h */