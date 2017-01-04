#define __GRU_INSTRUCTIONS_H__
extern int gru_check_status_proc(void *cb);
extern int gru_wait_proc(void *cb);
extern void gru_wait_abort_proc(void *cb);
#if defined(CONFIG_IA64)
#define __flush_cache(p)		ia64_fc((unsigned long)p)
#define gru_ordered_store_ulong(p, v)					\
do  while (0)
#elif defined(CONFIG_X86_64)
#define __flush_cache(p)		clflush(p)
#define gru_ordered_store_ulong(p, v)					\
do  while (0)
#error "Unsupported architecture"
#define CBS_IDLE			0
#define CBS_EXCEPTION			1
#define CBS_ACTIVE			2
#define CBS_CALL_OS			3
#define CBSS_MSG_QUEUE_MASK		7
#define CBSS_IMPLICIT_ABORT_ACTIVE_MASK	8
#define CBSS_NO_ERROR			0
#define CBSS_LB_OVERFLOWED		1
#define CBSS_QLIMIT_REACHED		2
#define CBSS_PAGE_OVERFLOW		3
#define CBSS_AMO_NACKED			4
#define CBSS_PUT_NACKED			5
struct control_block_extended_exc_detail ;
struct gru_instruction_bits ;
struct gru_instruction ;
#define GRU_CB_ICMD_SHFT	0
#define GRU_CB_ICMD_MASK	0x1
#define GRU_CB_XTYPE_SHFT	8
#define GRU_CB_XTYPE_MASK	0x7
#define GRU_CB_IAA0_SHFT	11
#define GRU_CB_IAA0_MASK	0x3
#define GRU_CB_IAA1_SHFT	13
#define GRU_CB_IAA1_MASK	0x3
#define GRU_CB_IMA_SHFT		1
#define GRU_CB_IMA_MASK		0x3
#define GRU_CB_OPC_SHFT		16
#define GRU_CB_OPC_MASK		0xff
#define GRU_CB_EXOPC_SHFT	24
#define GRU_CB_EXOPC_MASK	0xff
#define GRU_IDEF2_SHFT		32
#define GRU_IDEF2_MASK		0x3ffff
#define GRU_ISTATUS_SHFT	56
#define GRU_ISTATUS_MASK	0x3
#define OP_NOP		0x00
#define OP_BCOPY	0x01
#define OP_VLOAD	0x02
#define OP_IVLOAD	0x03
#define OP_VSTORE	0x04
#define OP_IVSTORE	0x05
#define OP_VSET		0x06
#define OP_IVSET	0x07
#define OP_MESQ		0x08
#define OP_GAMXR	0x09
#define OP_GAMIR	0x0a
#define OP_GAMIRR	0x0b
#define OP_GAMER	0x0c
#define OP_GAMERR	0x0d
#define OP_BSTORE	0x0e
#define OP_VFLUSH	0x0f
#define EOP_IR_FETCH	0x01
#define EOP_IR_CLR	0x02
#define EOP_IR_INC	0x05
#define EOP_IR_DEC	0x07
#define EOP_IR_QCHK1	0x0d
#define EOP_IR_QCHK2	0x0e
#define EOP_IRR_FETCH	0x01
#define EOP_IRR_CLR	0x02
#define EOP_IRR_INC	0x05
#define EOP_IRR_DEC	0x07
#define EOP_IRR_DECZ	0x0f
#define EOP_ER_SWAP	0x00
#define EOP_ER_OR	0x01
#define EOP_ER_AND	0x02
#define EOP_ER_XOR	0x03
#define EOP_ER_ADD	0x04
#define EOP_ER_CSWAP	0x08
#define EOP_ER_CADD	0x0c
#define EOP_ERR_SWAP	0x00
#define EOP_ERR_OR	0x01
#define EOP_ERR_AND	0x02
#define EOP_ERR_XOR	0x03
#define EOP_ERR_ADD	0x04
#define EOP_ERR_CSWAP	0x08
#define EOP_ERR_EPOLL	0x09
#define EOP_ERR_NPOLL	0x0a
#define EOP_XR_CSWAP	0x0b
#define XTYPE_B		0x0
#define XTYPE_S		0x1
#define XTYPE_W		0x2
#define XTYPE_DW	0x3
#define XTYPE_CL	0x6
#define IAA_RAM		0x0
#define IAA_NCRAM	0x2
#define IAA_MMIO	0x1
#define IAA_REGISTER	0x3
#define IMA_MAPPED	0x0
#define IMA_CB_DELAY	0x1
#define IMA_UNMAPPED	0x2
#define IMA_INTERRUPT	0x4
#define CBE_CAUSE_RI				(1 << 0)
#define CBE_CAUSE_INVALID_INSTRUCTION		(1 << 1)
#define CBE_CAUSE_UNMAPPED_MODE_FORBIDDEN	(1 << 2)
#define CBE_CAUSE_PE_CHECK_DATA_ERROR		(1 << 3)
#define CBE_CAUSE_IAA_GAA_MISMATCH		(1 << 4)
#define CBE_CAUSE_DATA_SEGMENT_LIMIT_EXCEPTION	(1 << 5)
#define CBE_CAUSE_OS_FATAL_TLB_FAULT		(1 << 6)
#define CBE_CAUSE_EXECUTION_HW_ERROR		(1 << 7)
#define CBE_CAUSE_TLBHW_ERROR			(1 << 8)
#define CBE_CAUSE_RA_REQUEST_TIMEOUT		(1 << 9)
#define CBE_CAUSE_HA_REQUEST_TIMEOUT		(1 << 10)
#define CBE_CAUSE_RA_RESPONSE_FATAL		(1 << 11)
#define CBE_CAUSE_RA_RESPONSE_NON_FATAL		(1 << 12)
#define CBE_CAUSE_HA_RESPONSE_FATAL		(1 << 13)
#define CBE_CAUSE_HA_RESPONSE_NON_FATAL		(1 << 14)
#define CBE_CAUSE_ADDRESS_SPACE_DECODE_ERROR	(1 << 15)
#define CBE_CAUSE_PROTOCOL_STATE_DATA_ERROR	(1 << 16)
#define CBE_CAUSE_RA_RESPONSE_DATA_ERROR	(1 << 17)
#define CBE_CAUSE_HA_RESPONSE_DATA_ERROR	(1 << 18)
#define CBE_CAUSE_FORCED_ERROR			(1 << 19)
#define CBR_EXS_ABORT_OCC_BIT			0
#define CBR_EXS_INT_OCC_BIT			1
#define CBR_EXS_PENDING_BIT			2
#define CBR_EXS_QUEUED_BIT			3
#define CBR_EXS_TLB_INVAL_BIT			4
#define CBR_EXS_EXCEPTION_BIT			5
#define CBR_EXS_CB_INT_PENDING_BIT		6
#define CBR_EXS_ABORT_OCC			(1 << CBR_EXS_ABORT_OCC_BIT)
#define CBR_EXS_INT_OCC				(1 << CBR_EXS_INT_OCC_BIT)
#define CBR_EXS_PENDING				(1 << CBR_EXS_PENDING_BIT)
#define CBR_EXS_QUEUED				(1 << CBR_EXS_QUEUED_BIT)
#define CBR_EXS_TLB_INVAL			(1 << CBR_EXS_TLB_INVAL_BIT)
#define CBR_EXS_EXCEPTION			(1 << CBR_EXS_EXCEPTION_BIT)
#define CBR_EXS_CB_INT_PENDING			(1 << CBR_EXS_CB_INT_PENDING_BIT)
#define EXCEPTION_RETRY_BITS (CBE_CAUSE_EXECUTION_HW_ERROR |		\
CBE_CAUSE_TLBHW_ERROR |			\
CBE_CAUSE_RA_REQUEST_TIMEOUT |		\
CBE_CAUSE_RA_RESPONSE_NON_FATAL |		\
CBE_CAUSE_HA_RESPONSE_NON_FATAL |		\
CBE_CAUSE_RA_RESPONSE_DATA_ERROR |	\
CBE_CAUSE_HA_RESPONSE_DATA_ERROR		\
)
union gru_mesqhead ;
static inline unsigned long
__opdword(unsigned char opcode, unsigned char exopc, unsigned char xtype,
unsigned char iaa0, unsigned char iaa1,
unsigned long idef2, unsigned char ima)
static inline void gru_flush_cache(void *p)
static inline void gru_start_instruction(struct gru_instruction *ins, unsigned long op64)
#define CB_IMA(h)		((h) | IMA_UNMAPPED)
#define GRU_DINDEX(i)		((i) * GRU_CACHE_LINE_BYTES)
static inline void gru_vload_phys(void *cb, unsigned long gpa,
unsigned int tri0, int iaa, unsigned long hints)
static inline void gru_vstore_phys(void *cb, unsigned long gpa,
unsigned int tri0, int iaa, unsigned long hints)
static inline void gru_vload(void *cb, unsigned long mem_addr,
unsigned int tri0, unsigned char xtype, unsigned long nelem,
unsigned long stride, unsigned long hints)
static inline void gru_vstore(void *cb, unsigned long mem_addr,
unsigned int tri0, unsigned char xtype, unsigned long nelem,
unsigned long stride, unsigned long hints)
static inline void gru_ivload(void *cb, unsigned long mem_addr,
unsigned int tri0, unsigned int tri1, unsigned char xtype,
unsigned long nelem, unsigned long hints)
static inline void gru_ivstore(void *cb, unsigned long mem_addr,
unsigned int tri0, unsigned int tri1,
unsigned char xtype, unsigned long nelem, unsigned long hints)
static inline void gru_vset(void *cb, unsigned long mem_addr,
unsigned long value, unsigned char xtype, unsigned long nelem,
unsigned long stride, unsigned long hints)
static inline void gru_ivset(void *cb, unsigned long mem_addr,
unsigned int tri1, unsigned long value, unsigned char xtype,
unsigned long nelem, unsigned long hints)
static inline void gru_vflush(void *cb, unsigned long mem_addr,
unsigned long nelem, unsigned char xtype, unsigned long stride,
unsigned long hints)
static inline void gru_nop(void *cb, int hints)
static inline void gru_bcopy(void *cb, const unsigned long src,
unsigned long dest,
unsigned int tri0, unsigned int xtype, unsigned long nelem,
unsigned int bufsize, unsigned long hints)
static inline void gru_bstore(void *cb, const unsigned long src,
unsigned long dest, unsigned int tri0, unsigned int xtype,
unsigned long nelem, unsigned long hints)
static inline void gru_gamir(void *cb, int exopc, unsigned long src,
unsigned int xtype, unsigned long hints)
static inline void gru_gamirr(void *cb, int exopc, unsigned long src,
unsigned int xtype, unsigned long hints)
static inline void gru_gamer(void *cb, int exopc, unsigned long src,
unsigned int xtype,
unsigned long operand1, unsigned long operand2,
unsigned long hints)
static inline void gru_gamerr(void *cb, int exopc, unsigned long src,
unsigned int xtype, unsigned long operand1,
unsigned long operand2, unsigned long hints)
static inline void gru_gamxr(void *cb, unsigned long src,
unsigned int tri0, unsigned long hints)
static inline void gru_mesq(void *cb, unsigned long queue,
unsigned long tri0, unsigned long nelem,
unsigned long hints)
static inline unsigned long gru_get_amo_value(void *cb)
static inline int gru_get_amo_value_head(void *cb)
static inline int gru_get_amo_value_limit(void *cb)
static inline union gru_mesqhead  gru_mesq_head(int head, int limit)
extern int gru_get_cb_exception_detail(void *cb,
struct control_block_extended_exc_detail *excdet);
#define GRU_EXC_STR_SIZE		256
struct gru_control_block_status ;
static inline int gru_get_cb_status(void *cb)
static inline int gru_get_cb_message_queue_substatus(void *cb)
static inline int gru_get_cb_substatus(void *cb)
static inline int gru_check_status(void *cb)
static inline int gru_wait(void *cb)
static inline void gru_wait_abort(void *cb)
static inline void *gru_get_gseg_pointer (void *p)
static inline void *gru_get_cb_pointer(void *gseg,
int index)
static inline void *gru_get_data_pointer(void *gseg, int index)
static inline int gru_get_tri(void *vaddr)
