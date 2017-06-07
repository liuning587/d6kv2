//-----------------------------------------------------------------------------
// File:			DPItypes.h
//
// Copyright:		Copyright (c) DM Corporation          
//
// Contents: 		This file defines the types used in DPI
//
// Comments: 		
//
//-----------------------------------------------------------------------------

#ifndef __DPITYPES
#define __DPITYPES

/* if DPIVER is not defined, assume version 01.01 */
#ifndef DPIVER
#define DPIVER	0x0101
#endif  /* DPIVER */

#ifdef __cplusplus
extern "C" { 			/* Assume C declarations for C++   */
#endif  /* __cplusplus */

/* environment specific definitions */
#ifndef EXPORT
#define EXPORT   
#endif

#ifndef DllImport
#if defined (_WINDOWS) || defined (WIN32)
#define DllImport   __declspec( dllimport )
#define DllExport   __declspec( dllexport )
#else
#define DllImport 
#define DllExport 
#endif //DWINDOWS
#endif

/* DPI declaration data types */
typedef signed char     sdbyte;
typedef unsigned char   udbyte;

#define UDBYTE_MAX  ((udbyte)0xff) 
#define UDBYTE_MIN  ((udbyte)0) 
#define SDBYTE_MAX  ((sdbyte)127) 
#define SDBYTE_MIN  ((sdbyte)-128) 


typedef   signed short    sdint2;
typedef unsigned short    udint2;

#define UDINT2_MAX ((udint2)0xffff) 
#define UDINT2_MIN ((udint2)0) 
#define SDINT2_MAX ((sdint2)32767) 
#define SDINT2_MIN ((sdint2)-32768) 


typedef   signed int  sdint4;                   
typedef unsigned int  udint4;                   

#define UDINT4_MAX ((udint4)0xffffffff) 
#define UDINT4_MIN ((udint4)0) 
#define SDINT4_MAX ((sdint4)2147483647) 
#define SDINT4_MIN ((sdint4)-2147483647 - 1) 


#ifdef WIN32
typedef __int64    sdint8;
typedef unsigned __int64 udint8;
#else
typedef long long int sdint8;
typedef unsigned long long int udint8;
#endif //DWINDOWS

#if defined(WIN32) || defined(LINUX)
#define SDINT8_MAX          (sdint8)0x7FFFFFFFFFFFFFFFLL
#define SDINT8_MIN          ((sdint8)(-0x7FFFFFFFFFFFFFFFLL) - (sdint8)1LL)
#define UDINT8_MAX          ((udint8)0xFFFFFFFFFFFFFFFFULL)
#define SDINT8_UNDEFINED	(sdint8)0xFFFFFFFFFFFFFFFFLL
#else
#define SDINT8_MAX          0x7FFFFFFFFFFFFFFFLL
#define SDINT8_MIN          (-0x7FFFFFFFFFFFFFFFLL - 1LL)
#define UDINT8_MAX          ((udint8)0xFFFFFFFFFFFFFFFFLL)
#define SDINT8_UNDEFINED    0xFFFFFFFFFFFFFFFFLL
#endif

#ifdef DM64
typedef sdint8      slength;
typedef udint8      ulength;
#define SLENGTH_MAX SDINT8_MAX
#define ULENGTH_MAX UDINT8_MAX
#else
typedef sdint4      slength;
typedef udint4      ulength;
#define SLENGTH_MAX SDINT4_MAX
#define ULENGTH_MAX UDINT4_MAX
#endif

typedef void *      dpointer;

/* function return type */
typedef sdint2      DPIRETURN;

typedef float       dfloat;

typedef double      ddouble;

/* generic data structures */
typedef void*					dhandle;
typedef dhandle                 dhenv;
typedef dhandle                 dhcon;
typedef dhandle                 dhstmt;
typedef dhandle                 dhdesc;
typedef dhandle                 dhloblctr;
typedef dhandle                 dhobjdesc;
typedef dhandle                 dhobj;

typedef ulength         hndlsz;

#ifdef __cplusplus
}                                    /* End of extern "C" { */
#endif  /* __cplusplus */

#endif /* #ifndef __DPITYPES */
