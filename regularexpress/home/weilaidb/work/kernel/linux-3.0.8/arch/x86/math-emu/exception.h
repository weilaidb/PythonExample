#define _EXCEPTION_H_
#define	Const_(x)	$##x
#define	Const_(x)	x
#define FPU_BUSY        Const_(0x8000)
#define EX_ErrorSummary Const_(0x0080)
#define	EX_INTERNAL	Const_(0x8000)
#define EX_StackOver	Const_(0x0041|SW_C1)
#define EX_StackUnder	Const_(0x0041)
#define EX_Precision	Const_(0x0020)
#define EX_Underflow	Const_(0x0010)
#define EX_Overflow	Const_(0x0008)
#define EX_ZeroDiv	Const_(0x0004)
#define EX_Denormal	Const_(0x0002)
#define EX_Invalid	Const_(0x0001)
#define PRECISION_LOST_UP    Const_((EX_Precision | SW_C1))
#define PRECISION_LOST_DOWN  Const_(EX_Precision)
#define	EXCEPTION(x)
#define	EXCEPTION(x)	FPU_exception(x)
