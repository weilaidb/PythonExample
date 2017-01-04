#define _ASM_GENERIC_BITOPS_LOCK_H_
#define test_and_set_bit_lock(nr, addr)	test_and_set_bit(nr, addr)
#define clear_bit_unlock(nr, addr)	\
do  while (0)
#define __clear_bit_unlock(nr, addr)	\
do  while (0)
