#ifndef __ZERYNTH__
#define __ZERYNTH__

#include <stdint.h>
#include "vosal.h"
#include "vhal.h"
#include "lang.h"
#include "vbl.h"


#define C_NATIVE(name) err_t name(int nargs, PObject *self, PObject **args, PObject **res)
#define C_NATIVE_UNWARN() (void)nargs;(void)self;(void)args;(void)res

/* VIPERLIB */
#define NANOS  0x00
#define MICROS  0x01
#define MILLIS  0x02
#define SECONDS 0x03

#define TIME_U(n,u) (((n)<<2)|(u))
#define GET_TIME_UNIT(n) ((n)&0x03)
#define GET_TIME_VALUE(n) ((n)>>2)


#define malloc(x) gc_malloc(x)
#define free(x) gc_free(x)
#define calloc(n,m) gc_malloc((n)*(m))
#define gc_calloc(n,m) gc_malloc((n)*(m))

#if defined(ZERYNTH_PRINTF)
	#define printf(...) vbl_printf_stdout(__VA_ARGS__)
#else
	#define printf(...)
#endif


#if defined(ZERYNTH_DEBUG)

#define debug(...) vbl_printf_stdout(__VA_ARGS__)

#else

#define debug(...)

#endif


/* VOS LAYER */



/* VHAL LAYER */



/* Zerynth OBJECTS */


#endif
