#define __DIVA_DI_DBG_INC__
#if !defined (dtrc)
#define dtrc(a)
#if !defined (dbug)
#define dbug(a)
#if !defined USE_EXTENDED_DEBUGS
extern void (*dprintf)(char*, ...);
