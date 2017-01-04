#define __A_OUT_GNU_H__
#define __GNU_EXEC_MACROS__
enum machine_type ;
#if !defined (N_MAGIC)
#define N_MAGIC(exec) ((exec).a_info & 0xffff)
#define N_MACHTYPE(exec) ((enum machine_type)(((exec).a_info >> 16) & 0xff))
#define N_FLAGS(exec) (((exec).a_info >> 24) & 0xff)
#define N_SET_INFO(exec, magic, type, flags) \
((exec).a_info = ((magic) & 0xffff) \
| (((int)(type) & 0xff) << 16) \
| (((flags) & 0xff) << 24))
#define N_SET_MAGIC(exec, magic) \
((exec).a_info = (((exec).a_info & 0xffff0000) | ((magic) & 0xffff)))
#define N_SET_MACHTYPE(exec, machtype) \
((exec).a_info = \
((exec).a_info&0xff00ffff) | ((((int)(machtype))&0xff) << 16))
#define N_SET_FLAGS(exec, flags) \
((exec).a_info = \
((exec).a_info&0x00ffffff) | (((flags) & 0xff) << 24))
#define OMAGIC 0407
#define NMAGIC 0410
#define ZMAGIC 0413
#define QMAGIC 0314
#define CMAGIC 0421
#if !defined (N_BADMAG)
#define N_BADMAG(x)	  (N_MAGIC(x) != OMAGIC		\
&& N_MAGIC(x) != NMAGIC		\
&& N_MAGIC(x) != ZMAGIC \
&& N_MAGIC(x) != QMAGIC)
#define _N_HDROFF(x) (1024 - sizeof (struct exec))
#if !defined (N_TXTOFF)
#define N_TXTOFF(x) \
(N_MAGIC(x) == ZMAGIC ? _N_HDROFF((x)) + sizeof (struct exec) : \
(N_MAGIC(x) == QMAGIC ? 0 : sizeof (struct exec)))
#if !defined (N_DATOFF)
#define N_DATOFF(x) (N_TXTOFF(x) + (x).a_text)
#if !defined (N_TRELOFF)
#define N_TRELOFF(x) (N_DATOFF(x) + (x).a_data)
#if !defined (N_DRELOFF)
#define N_DRELOFF(x) (N_TRELOFF(x) + N_TRSIZE(x))
#if !defined (N_SYMOFF)
#define N_SYMOFF(x) (N_DRELOFF(x) + N_DRSIZE(x))
#if !defined (N_STROFF)
#define N_STROFF(x) (N_SYMOFF(x) + N_SYMSIZE(x))
#if !defined (N_TXTADDR)
#define N_TXTADDR(x) (N_MAGIC(x) == QMAGIC ? PAGE_SIZE : 0)
#if defined(vax) || defined(hp300) || defined(pyr)
#define SEGMENT_SIZE page_size
#define	SEGMENT_SIZE	0x2000
#define SEGMENT_SIZE 0x20000
#if defined(m68k) && defined(PORTAR)
#define PAGE_SIZE 0x400
#define SEGMENT_SIZE PAGE_SIZE
#if defined(__i386__) || defined(__mc68000__)
#define SEGMENT_SIZE	1024
#define SEGMENT_SIZE	PAGE_SIZE
#define SEGMENT_SIZE   getpagesize()
#define _N_SEGMENT_ROUND(x) ALIGN(x, SEGMENT_SIZE)
#define _N_TXTENDADDR(x) (N_TXTADDR(x)+(x).a_text)
#define N_DATADDR(x) \
(N_MAGIC(x)==OMAGIC? (_N_TXTENDADDR(x)) \
: (_N_SEGMENT_ROUND (_N_TXTENDADDR(x))))
#if !defined (N_BSSADDR)
#define N_BSSADDR(x) (N_DATADDR(x) + (x).a_data)
#if !defined (N_NLIST_DECLARED)
struct nlist ;
#if !defined (N_UNDF)
#define N_UNDF 0
#if !defined (N_ABS)
#define N_ABS 2
#if !defined (N_TEXT)
#define N_TEXT 4
#if !defined (N_DATA)
#define N_DATA 6
#if !defined (N_BSS)
#define N_BSS 8
#if !defined (N_FN)
#define N_FN 15
#if !defined (N_EXT)
#define N_EXT 1
#if !defined (N_TYPE)
#define N_TYPE 036
#if !defined (N_STAB)
#define N_STAB 0340
#define N_INDR 0xa
#define	N_SETA	0x14
#define	N_SETT	0x16
#define	N_SETD	0x18
#define	N_SETB	0x1A
#define N_SETV	0x1C
#if !defined (N_RELOCATION_INFO_DECLARED)
struct relocation_info
;
