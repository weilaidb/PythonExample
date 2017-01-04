#define _ST(p, inst, v)						\
()
#define _LD(p, inst)						\
()
#define USERCOPY_FUNC __copy_to_user_inatomic
#define ST1(p, v) _ST((p), st1, (v))
#define ST2(p, v) _ST((p), st2, (v))
#define ST4(p, v) _ST((p), st4, (v))
#define ST8(p, v) _ST((p), st, (v))
#define LD1 LD
#define LD2 LD
#define LD4 LD
#define LD8 LD
#define USERCOPY_FUNC __copy_from_user_inatomic
#define ST1 ST
#define ST2 ST
#define ST4 ST
#define ST8 ST
#define LD1(p) _LD((p), ld1u)
#define LD2(p) _LD((p), ld2u)
#define LD4(p) _LD((p), ld4u)
#define LD8(p) _LD((p), ld)
#define USERCOPY_FUNC __copy_in_user_inatomic
#define ST1(p, v) _ST((p), st1, (v))
#define ST2(p, v) _ST((p), st2, (v))
#define ST4(p, v) _ST((p), st4, (v))
#define ST8(p, v) _ST((p), st, (v))
#define LD1(p) _LD((p), ld1u)
#define LD2(p) _LD((p), ld2u)
#define LD4(p) _LD((p), ld4u)
#define LD8(p) _LD((p), ld)
unsigned long __copy_from_user_zeroing(void *to, const void __user *from,
unsigned long n)
