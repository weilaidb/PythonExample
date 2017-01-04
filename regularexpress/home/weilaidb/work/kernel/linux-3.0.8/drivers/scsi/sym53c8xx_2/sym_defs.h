#define SYM_DEFS_H
#define SYM_VERSION "2.2.3"
#define SYM_DRIVER_NAME	"sym-" SYM_VERSION
struct sym_chip ;
struct sym_reg ;
#define REGJ(p,r) (offsetof(struct sym_reg, p ## r))
#define REG(r) REGJ (nc_, r)
#define	SCR_DATA_OUT	0x00000000
#define	SCR_DATA_IN	0x01000000
#define	SCR_COMMAND	0x02000000
#define	SCR_STATUS	0x03000000
#define	SCR_DT_DATA_OUT	0x04000000
#define	SCR_DT_DATA_IN	0x05000000
#define SCR_MSG_OUT	0x06000000
#define SCR_MSG_IN      0x07000000
#define SCR_ILG_OUT	0x04000000
#define SCR_ILG_IN	0x05000000
#define OPC_MOVE          0x08000000
#define SCR_MOVE_ABS(l) ((0x00000000 | OPC_MOVE) | (l))
#define SCR_MOVE_TBL     (0x10000000 | OPC_MOVE)
#define SCR_CHMOV_ABS(l) ((0x00000000) | (l))
#define SCR_CHMOV_TBL     (0x10000000)
#define OPC_TCHMOVE        0x08000000
#define SCR_TCHMOVE_ABS(l) ((0x20000000 | OPC_TCHMOVE) | (l))
#define SCR_TCHMOVE_TBL     (0x30000000 | OPC_TCHMOVE)
#define SCR_TMOV_ABS(l)    ((0x20000000) | (l))
#define SCR_TMOV_TBL        (0x30000000)
struct sym_tblmove ;
#define	SCR_SEL_ABS	0x40000000
#define	SCR_SEL_ABS_ATN	0x41000000
#define	SCR_SEL_TBL	0x42000000
#define	SCR_SEL_TBL_ATN	0x43000000
#define	SCR_RESEL_ABS     0x40000000
#define	SCR_RESEL_ABS_ATN 0x41000000
#define	SCR_RESEL_TBL     0x42000000
#define	SCR_RESEL_TBL_ATN 0x43000000
struct sym_tblsel ;
#define SCR_JMP_REL     0x04000000
#define SCR_ID(id)	(((u32)(id)) << 16)
#define	SCR_WAIT_DISC	0x48000000
#define SCR_WAIT_RESEL  0x50000000
#define	SCR_DISCONNECT	0x48000000
#define SCR_SET(f)     (0x58000000 | (f))
#define SCR_CLR(f)     (0x60000000 | (f))
#define	SCR_CARRY	0x00000400
#define	SCR_TRG		0x00000200
#define	SCR_ACK		0x00000040
#define	SCR_ATN		0x00000008
#define SCR_NO_FLUSH 0x01000000
#define SCR_COPY(n) (0xc0000000 | SCR_NO_FLUSH | (n))
#define SCR_COPY_F(n) (0xc0000000 | (n))
#define SCR_REG_OFS(ofs) ((((ofs) & 0x7f) << 16ul) + ((ofs) & 0x80))
#define SCR_SFBR_REG(reg,op,data) \
(0x68000000 | (SCR_REG_OFS(REG(reg))) | (op) | (((data)&0xff)<<8ul))
#define SCR_REG_SFBR(reg,op,data) \
(0x70000000 | (SCR_REG_OFS(REG(reg))) | (op) | (((data)&0xff)<<8ul))
#define SCR_REG_REG(reg,op,data) \
(0x78000000 | (SCR_REG_OFS(REG(reg))) | (op) | (((data)&0xff)<<8ul))
#define      SCR_LOAD   0x00000000
#define      SCR_SHL    0x01000000
#define      SCR_OR     0x02000000
#define      SCR_XOR    0x03000000
#define      SCR_AND    0x04000000
#define      SCR_SHR    0x05000000
#define      SCR_ADD    0x06000000
#define      SCR_ADDC   0x07000000
#define      SCR_SFBR_DATA   (0x00800000>>8ul)
#define	SCR_FROM_REG(reg) \
SCR_REG_SFBR(reg,SCR_OR,0)
#define	SCR_TO_REG(reg) \
SCR_SFBR_REG(reg,SCR_OR,0)
#define	SCR_LOAD_REG(reg,data) \
SCR_REG_REG(reg,SCR_LOAD,data)
#define SCR_LOAD_SFBR(data) \
(SCR_REG_SFBR (gpreg, SCR_LOAD, data))
#define SCR_REG_OFS2(ofs) (((ofs) & 0xff) << 16ul)
#define SCR_NO_FLUSH2	0x02000000
#define SCR_DSA_REL2	0x10000000
#define SCR_LOAD_R(reg, how, n) \
(0xe1000000 | how | (SCR_REG_OFS2(REG(reg))) | (n))
#define SCR_STORE_R(reg, how, n) \
(0xe0000000 | how | (SCR_REG_OFS2(REG(reg))) | (n))
#define SCR_LOAD_ABS(reg, n)	SCR_LOAD_R(reg, SCR_NO_FLUSH2, n)
#define SCR_LOAD_REL(reg, n)	SCR_LOAD_R(reg, SCR_NO_FLUSH2|SCR_DSA_REL2, n)
#define SCR_LOAD_ABS_F(reg, n)	SCR_LOAD_R(reg, 0, n)
#define SCR_LOAD_REL_F(reg, n)	SCR_LOAD_R(reg, SCR_DSA_REL2, n)
#define SCR_STORE_ABS(reg, n)	SCR_STORE_R(reg, SCR_NO_FLUSH2, n)
#define SCR_STORE_REL(reg, n)	SCR_STORE_R(reg, SCR_NO_FLUSH2|SCR_DSA_REL2,n)
#define SCR_STORE_ABS_F(reg, n)	SCR_STORE_R(reg, 0, n)
#define SCR_STORE_REL_F(reg, n)	SCR_STORE_R(reg, SCR_DSA_REL2, n)
#define SCR_NO_OP       0x80000000
#define SCR_JUMP        0x80080000
#define SCR_JUMP64      0x80480000
#define SCR_JUMPR       0x80880000
#define SCR_CALL        0x88080000
#define SCR_CALLR       0x88880000
#define SCR_RETURN      0x90080000
#define SCR_INT         0x98080000
#define SCR_INT_FLY     0x98180000
#define IFFALSE(arg)   (0x00080000 | (arg))
#define IFTRUE(arg)    (0x00000000 | (arg))
#define WHEN(phase)    (0x00030000 | (phase))
#define IF(phase)      (0x00020000 | (phase))
#define DATA(D)        (0x00040000 | ((D) & 0xff))
#define MASK(D,M)      (0x00040000 | (((M ^ 0xff) & 0xff) << 8ul)|((D) & 0xff))
#define CARRYSET       (0x00200000)
#define	M_COMPLETE	COMMAND_COMPLETE
#define	M_EXTENDED	EXTENDED_MESSAGE
#define	M_SAVE_DP	SAVE_POINTERS
#define	M_RESTORE_DP	RESTORE_POINTERS
#define	M_DISCONNECT	DISCONNECT
#define	M_ID_ERROR	INITIATOR_ERROR
#define	M_ABORT		ABORT_TASK_SET
#define	M_REJECT	MESSAGE_REJECT
#define	M_NOOP		NOP
#define	M_PARITY	MSG_PARITY_ERROR
#define	M_LCOMPLETE	LINKED_CMD_COMPLETE
#define	M_FCOMPLETE	LINKED_FLG_CMD_COMPLETE
#define	M_RESET		TARGET_RESET
#define	M_ABORT_TAG	ABORT_TASK
#define	M_CLEAR_QUEUE	CLEAR_TASK_SET
#define	M_INIT_REC	INITIATE_RECOVERY
#define	M_REL_REC	RELEASE_RECOVERY
#define	M_TERMINATE	(0x11)
#define	M_SIMPLE_TAG	SIMPLE_QUEUE_TAG
#define	M_HEAD_TAG	HEAD_OF_QUEUE_TAG
#define	M_ORDERED_TAG	ORDERED_QUEUE_TAG
#define	M_IGN_RESIDUE	IGNORE_WIDE_RESIDUE
#define	M_X_MODIFY_DP	EXTENDED_MODIFY_DATA_POINTER
#define	M_X_SYNC_REQ	EXTENDED_SDTR
#define	M_X_WIDE_REQ	EXTENDED_WDTR
#define	M_X_PPR_REQ	EXTENDED_PPR
#define	PPR_OPT_IU	(0x01)
#define	PPR_OPT_DT	(0x02)
#define	PPR_OPT_QAS	(0x04)
#define PPR_OPT_MASK	(0x07)
#define	S_GOOD		SAM_STAT_GOOD
#define	S_CHECK_COND	SAM_STAT_CHECK_CONDITION
#define	S_COND_MET	SAM_STAT_CONDITION_MET
#define	S_BUSY		SAM_STAT_BUSY
#define	S_INT		SAM_STAT_INTERMEDIATE
#define	S_INT_COND_MET	SAM_STAT_INTERMEDIATE_CONDITION_MET
#define	S_CONFLICT	SAM_STAT_RESERVATION_CONFLICT
#define	S_TERMINATED	SAM_STAT_COMMAND_TERMINATED
#define	S_QUEUE_FULL	SAM_STAT_TASK_SET_FULL
#define	S_ILLEGAL	(0xff)
