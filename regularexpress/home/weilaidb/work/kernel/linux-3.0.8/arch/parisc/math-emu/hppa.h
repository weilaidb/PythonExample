PA header file -- do not include this header file for non-PA builds.
#define Shiftdouble(left,right,amount,dest)			\			\
dest = ((left) << (32-(amount))) | ((unsigned int)(right) >> (amount))
#define Variableshiftdouble(left,right,amount,dest)		\		\
if (amount == 0) dest = right;				\
else dest = ((((unsigned) left)&0x7fffffff) << (32-(amount))) |	\
((unsigned) right >> (amount))
#define Variable_shift_double(left,right,amount,dest)		\		\
dest = (left << (32-(amount))) | ((unsigned) right >> (amount))
