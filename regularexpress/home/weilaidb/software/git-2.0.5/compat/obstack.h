#define _OBSTACK_H 1
# define PTR_INT_TYPE __PTRDIFF_TYPE__
# include <stddef.h>
# define PTR_INT_TYPE ptrdiff_t
#define __BPTR_ALIGN(B, P, A) ((B) + (((P) - (B) + (A)) & ~(A)))
#define __PTR_ALIGN(B, P, A)						    \
__BPTR_ALIGN (sizeof (PTR_INT_TYPE) < sizeof (void *) ? (B) : (char *) 0, \
P, A)
struct _obstack_chunk
;
struct obstack
;
extern void _obstack_newchunk (struct obstack *, int);
extern int _obstack_begin (struct obstack *, int, int,
void *(*) (long), void (*) (void *));
extern int _obstack_begin_1 (struct obstack *, int, int,
void *(*) (void *, long),
void (*) (void *, void *), void *);
extern int _obstack_memory_used (struct obstack *);
void obstack_free (struct obstack *, void *);
extern void (*obstack_alloc_failed_handler) (void);
#define obstack_base(h) ((void *) (h)->object_base)
#define obstack_chunk_size(h) ((h)->chunk_size)
#define obstack_next_free(h)	((h)->next_free)
#define obstack_alignment_mask(h) ((h)->alignment_mask)
#define obstack_init(h)						\
_obstack_begin ((h), 0, 0,					\
(void *(*) (long)) obstack_chunk_alloc,	\
(void (*) (void *)) obstack_chunk_free)
#define obstack_begin(h, size)					\
_obstack_begin ((h), (size), 0,				\
(void *(*) (long)) obstack_chunk_alloc,	\
(void (*) (void *)) obstack_chunk_free)
#define obstack_specify_allocation(h, size, alignment, chunkfun, freefun)  \
_obstack_begin ((h), (size), (alignment),				   \
(void *(*) (long)) (chunkfun),			   \
(void (*) (void *)) (freefun))
#define obstack_specify_allocation_with_arg(h, size, alignment, chunkfun, freefun, arg) \
_obstack_begin_1 ((h), (size), (alignment),				\
(void *(*) (void *, long)) (chunkfun),		\
(void (*) (void *, void *)) (freefun), (arg))
#define obstack_chunkfun(h, newchunkfun) \
((h) -> chunkfun = (struct _obstack_chunk *(*)(void *, long)) (newchunkfun))
#define obstack_freefun(h, newfreefun) \
((h) -> freefun = (void (*)(void *, struct _obstack_chunk *)) (newfreefun))
#define obstack_1grow_fast(h,achar) (*((h)->next_free)++ = (achar))
#define obstack_blank_fast(h,n) ((h)->next_free += (n))
#define obstack_memory_used(h) _obstack_memory_used (h)
#if defined __GNUC__ && defined __STDC__ && __STDC__
# if __GNUC__ < 2 || (__NeXT__ && !__GNUC_MINOR__)
#  define __extension__
# endif
# define obstack_object_size(OBSTACK)					\
__extension__								\
()
# define obstack_room(OBSTACK)						\
__extension__								\
()
# define obstack_make_room(OBSTACK,length)				\
__extension__								\
()
# define obstack_empty_p(OBSTACK)					\
__extension__								\
()
# define obstack_grow(OBSTACK,where,length)				\
__extension__								\
()
# define obstack_grow0(OBSTACK,where,length)				\
__extension__								\
()
# define obstack_1grow(OBSTACK,datum)					\
__extension__								\
()
# define obstack_ptr_grow(OBSTACK,datum)				\
__extension__								\
()				\
# define obstack_int_grow(OBSTACK,datum)				\
__extension__								\
()
# define obstack_ptr_grow_fast(OBSTACK,aptr)				\
__extension__								\
()
# define obstack_int_grow_fast(OBSTACK,aint)				\
__extension__								\
()
# define obstack_blank(OBSTACK,length)					\
__extension__								\
()
# define obstack_alloc(OBSTACK,length)					\
__extension__								\
()
# define obstack_copy(OBSTACK,where,length)				\
__extension__								\
()
# define obstack_copy0(OBSTACK,where,length)				\
__extension__								\
()
# define obstack_finish(OBSTACK)					\
__extension__								\
()
# define obstack_free(OBSTACK, OBJ)					\
__extension__								\
()
# define obstack_object_size(h) \
(unsigned) ((h)->next_free - (h)->object_base)
# define obstack_room(h)		\
(unsigned) ((h)->chunk_limit - (h)->next_free)
# define obstack_empty_p(h) \
((h)->chunk->prev == 0							\
&& (h)->next_free == __PTR_ALIGN ((char *) (h)->chunk,		\
(h)->chunk->contents,		\
(h)->alignment_mask))
# define obstack_make_room(h,length)					\
( (h)->temp.tempint = (length),						\
(((h)->next_free + (h)->temp.tempint > (h)->chunk_limit)		\
? (_obstack_newchunk ((h), (h)->temp.tempint), 0) : 0))
# define obstack_grow(h,where,length)					\
( (h)->temp.tempint = (length),						\
(((h)->next_free + (h)->temp.tempint > (h)->chunk_limit)		\
? (_obstack_newchunk ((h), (h)->temp.tempint), 0) : 0),		\
memcpy ((h)->next_free, where, (h)->temp.tempint),			\
(h)->next_free += (h)->temp.tempint)
# define obstack_grow0(h,where,length)					\
( (h)->temp.tempint = (length),						\
(((h)->next_free + (h)->temp.tempint + 1 > (h)->chunk_limit)		\
? (_obstack_newchunk ((h), (h)->temp.tempint + 1), 0) : 0),		\
memcpy ((h)->next_free, where, (h)->temp.tempint),			\
(h)->next_free += (h)->temp.tempint,					\
*((h)->next_free)++ = 0)
# define obstack_1grow(h,datum)						\
( (((h)->next_free + 1 > (h)->chunk_limit)				\
? (_obstack_newchunk ((h), 1), 0) : 0),				\
obstack_1grow_fast (h, datum))
# define obstack_ptr_grow(h,datum)					\
( (((h)->next_free + sizeof (char *) > (h)->chunk_limit)		\
? (_obstack_newchunk ((h), sizeof (char *)), 0) : 0),		\
obstack_ptr_grow_fast (h, datum))
# define obstack_int_grow(h,datum)					\
( (((h)->next_free + sizeof (int) > (h)->chunk_limit)			\
? (_obstack_newchunk ((h), sizeof (int)), 0) : 0),			\
obstack_int_grow_fast (h, datum))
# define obstack_ptr_grow_fast(h,aptr)					\
(((const void **) ((h)->next_free += sizeof (void *)))[-1] = (aptr))
# define obstack_int_grow_fast(h,aint)					\
(((int *) ((h)->next_free += sizeof (int)))[-1] = (aint))
# define obstack_blank(h,length)					\
( (h)->temp.tempint = (length),						\
(((h)->chunk_limit - (h)->next_free < (h)->temp.tempint)		\
? (_obstack_newchunk ((h), (h)->temp.tempint), 0) : 0),		\
obstack_blank_fast (h, (h)->temp.tempint))
# define obstack_alloc(h,length)					\
(obstack_blank ((h), (length)), obstack_finish ((h)))
# define obstack_copy(h,where,length)					\
(obstack_grow ((h), (where), (length)), obstack_finish ((h)))
# define obstack_copy0(h,where,length)					\
(obstack_grow0 ((h), (where), (length)), obstack_finish ((h)))
# define obstack_finish(h)						\
( ((h)->next_free == (h)->object_base					\
? (((h)->maybe_empty_object = 1), 0)					\
: 0),								\
(h)->temp.tempptr = (h)->object_base,					\
(h)->next_free							\
= __PTR_ALIGN ((h)->object_base, (h)->next_free,			\
(h)->alignment_mask),				\
(((h)->next_free - (char *) (h)->chunk				\
> (h)->chunk_limit - (char *) (h)->chunk)				\
? ((h)->next_free = (h)->chunk_limit) : 0),				\
(h)->object_base = (h)->next_free,					\
(h)->temp.tempptr)
# define obstack_free(h,obj)						\
( (h)->temp.tempint = (char *) (obj) - (char *) (h)->chunk,		\
((((h)->temp.tempint > 0						\
&& (h)->temp.tempint < (h)->chunk_limit - (char *) (h)->chunk))	\
? (int) ((h)->next_free = (h)->object_base				\
= (h)->temp.tempint + (char *) (h)->chunk)			\
: (((obstack_free) ((h), (h)->temp.tempint + (char *) (h)->chunk), 0), 0)))
