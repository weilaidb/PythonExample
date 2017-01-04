#define _RELOC_TABLE_H_
#define ROP_N	0
#define ROP_R	1
#define ROP_W	2
#define ROP_RW	3
#define ROP_ANY	0
#define ROP_SGN	1
#define ROP_UNS	2
#define ROP_MAX 3
#define ROP_IGN	0
#define ROP_LIT 0
#define ROP_SYM	1
#define ROP_SYMD 2
#define RSTK_N 0
#define RSTK_POP 1
#define RSTK_UOP 2
#define RSTK_PSH 3
enum dload_actions ;
#define RFV_POSN(aaa) ((aaa) & 0xF)
#define RFV_WIDTH(aaa) (((aaa) >> 4) & 0x3F)
#define RFV_ACTION(aaa) ((aaa) >> 10)
#define RFV_SIGN(iii) (((iii) >> 2) & 0x3)
#define RFV_SYM(iii) (((iii) >> 4) & 0x3)
#define RFV_STK(iii) (((iii) >> 6) & 0x3)
#define RFV_ACCS(iii) ((iii) & 0x3)
#if (TMS32060)
#define RFV_SCALE(iii) ((iii) >> 11)
#define RFV_BIGOFF(iii) (((iii) >> 8) & 0x7)
#define RFV_BIGOFF(iii) ((iii) >> 8)
