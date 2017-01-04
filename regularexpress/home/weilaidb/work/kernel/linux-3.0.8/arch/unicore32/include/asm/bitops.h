#define __UNICORE_BITOPS_H__
#define find_next_bit		__uc32_find_next_bit
#define find_next_zero_bit	__uc32_find_next_zero_bit
#define find_first_bit		__uc32_find_first_bit
#define find_first_zero_bit	__uc32_find_first_zero_bit
#define _ASM_GENERIC_BITOPS_FLS_H_
#define _ASM_GENERIC_BITOPS___FLS_H_
#define _ASM_GENERIC_BITOPS_FFS_H_
#define _ASM_GENERIC_BITOPS___FFS_H_
static inline int fls(int x)
#define __fls(x) (fls(x) - 1)
#define ffs(x) ()
#define __ffs(x) (ffs(x) - 1)
