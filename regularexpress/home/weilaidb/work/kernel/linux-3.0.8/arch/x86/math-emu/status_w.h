#define _STATUS_H_
#define	Const__(x)	$##x
#define	Const__(x)	x
#define SW_Backward    	Const__(0x8000)
#define SW_C3		Const__(0x4000)
#define SW_Top		Const__(0x3800)
#define SW_Top_Shift 	Const__(11)
#define SW_C2		Const__(0x0400)
#define SW_C1		Const__(0x0200)
#define SW_C0		Const__(0x0100)
#define SW_Summary     	Const__(0x0080)
#define SW_Stack_Fault	Const__(0x0040)
#define SW_Precision   	Const__(0x0020)
#define SW_Underflow   	Const__(0x0010)
#define SW_Overflow    	Const__(0x0008)
#define SW_Zero_Div    	Const__(0x0004)
#define SW_Denorm_Op   	Const__(0x0002)
#define SW_Invalid     	Const__(0x0001)
#define SW_Exc_Mask     Const__(0x27f)
#define COMP_A_gt_B	1
#define COMP_A_eq_B	2
#define COMP_A_lt_B	3
#define COMP_No_Comp	4
#define COMP_Denormal   0x20
#define COMP_NaN	0x40
#define COMP_SNaN	0x80
#define status_word() \
((partial_status & ~SW_Top & 0xffff) | ((top << SW_Top_Shift) & SW_Top))
static inline void setcc(int cc)
#  define clear_C1()
# else
#  define clear_C1()
