#define OBSTACK_INTERFACE_VERSION 1
#if !defined _LIBC && defined __GNU_LIBRARY__ && __GNU_LIBRARY__ > 1
# include <gnu-versions.h>
# if _GNU_OBSTACK_INTERFACE_VERSION == OBSTACK_INTERFACE_VERSION
#  define ELIDE_CODE
# endif
# if HAVE_INTTYPES_H
#  include <inttypes.h>
# endif
# if HAVE_STDINT_H || defined _LIBC
#  include <stdint.h>
# endif
union fooround
;
struct fooalign
;
enum
;
# ifndef COPYING_UNIT
#  define COPYING_UNIT int
# endif
static void print_and_abort (void);
void (*obstack_alloc_failed_handler) (void) = print_and_abort;
# ifdef _LIBC
#  if SHLIB_COMPAT (libc, GLIBC_2_0, GLIBC_2_3_4)
struct obstack *_obstack_compat;
compat_symbol (libc, _obstack_compat, _obstack, GLIBC_2_0);
#  endif
# endif
# define CALL_CHUNKFUN(h, size) \
(((h) -> use_extra_arg) \
? (*(h)->chunkfun) ((h)->extra_arg, (size)) \
: (*(struct _obstack_chunk *(*) (long)) (h)->chunkfun) ((size)))
# define CALL_FREEFUN(h, old_chunk) \
do  while (0)
int
_obstack_begin (struct obstack *h,
int size, int alignment,
void *(*chunkfun) (long),
void (*freefun) (void *))
int
_obstack_begin_1 (struct obstack *h, int size, int alignment,
void *(*chunkfun) (void *, long),
void (*freefun) (void *, void *),
void *arg)
void
_obstack_newchunk (struct obstack *h, int length)
# ifdef _LIBC
libc_hidden_def (_obstack_newchunk)
# endif
int _obstack_allocated_p (struct obstack *h, void *obj);
int
_obstack_allocated_p (struct obstack *h, void *obj)
# undef obstack_free
void
obstack_free (struct obstack *h, void *obj)
# ifdef _LIBC
strong_alias (obstack_free, _obstack_free)
# endif
int
_obstack_memory_used (struct obstack *h)
# ifdef _LIBC
#  include <libio/iolibio.h>
# endif
# ifndef __attribute__
#  if __GNUC__ < 2 || (__GNUC__ == 2 && __GNUC_MINOR__ < 5)
#   define __attribute__(Spec)
#  endif
# endif
static void
print_and_abort (void)
