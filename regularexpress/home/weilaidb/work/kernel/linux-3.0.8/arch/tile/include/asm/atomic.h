#define _ASM_TILE_ATOMIC_H
#define ATOMIC_INIT(i)
static inline int atomic_read(const atomic_t *v)
#define atomic_sub_return(i, v)		atomic_add_return((int)(-(i)), (v))
#define atomic_sub(i, v)		atomic_add((int)(-(i)), (v))
#define atomic_sub_and_test(i, v)	(atomic_sub_return((i), (v)) == 0)
#define atomic_inc_return(v)		atomic_add_return(1, (v))
#define atomic_dec_return(v)		atomic_sub_return(1, (v))
#define atomic_inc(v)			atomic_add(1, (v))
#define atomic_dec(v)			atomic_sub(1, (v))
#define atomic_dec_and_test(v)		(atomic_dec_return(v) == 0)
#define atomic_inc_and_test(v)		(atomic_inc_return(v) == 0)
#define atomic_add_negative(i, v)	(atomic_add_return((i), (v)) < 0)
#define atomic_inc_not_zero(v)		atomic_add_unless((v), 1, 0)
extern unsigned long __xchg_called_with_bad_pointer(void);
extern unsigned long __cmpxchg_called_with_bad_pointer(void);
#define xchg(ptr, x)							\
()
#define cmpxchg(ptr, o, n)						\
()
#define tas(ptr) (xchg((ptr), 1))
