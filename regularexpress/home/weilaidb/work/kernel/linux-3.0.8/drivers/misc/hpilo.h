#define __HPILO_H
#define ILO_NAME "hpilo"
#define MAX_CCB		8
#define MAX_ILO_DEV	1
#define MAX_OPEN	(MAX_CCB * MAX_ILO_DEV)
#define MAX_WAIT_TIME	10000
#define WAIT_TIME	10
#define MAX_WAIT	(MAX_WAIT_TIME / WAIT_TIME)
struct ilo_hwinfo ;
#define DB_IRQ		0xB2
#define DB_OUT		0xD4
#define DB_RESET	26
#define ILOSW_CCB_SZ	64
#define ILOHW_CCB_SZ 	128
struct ccb ;
#define SENDQ		1
#define RECVQ 		2
#define NR_QENTRY    	4
#define L2_QENTRY_SZ 	12
#define CTRL_BITPOS_L2SZ             0
#define CTRL_BITPOS_FIFOINDEXMASK    4
#define CTRL_BITPOS_DESCLIMIT        18
#define CTRL_BITPOS_A                30
#define CTRL_BITPOS_G                31
#define L2_DB_SIZE		14
#define ONE_DB_SIZE		(1 << L2_DB_SIZE)
struct ccb_data ;
#define ILO_START_ALIGN	4096
#define ILO_CACHE_SZ 	 128
struct fifo ;
#define FIFOHANDLESIZE (sizeof(struct fifo) - sizeof(u64))
#define FIFOBARTOHANDLE(_fifo) \
((struct fifo *)(((char *)(_fifo)) - FIFOHANDLESIZE))
#define ENTRY_BITPOS_QWORDS      0
#define ENTRY_BITPOS_DESCRIPTOR  10
#define ENTRY_BITPOS_C           22
#define ENTRY_BITPOS_O           23
#define ENTRY_BITS_QWORDS        10
#define ENTRY_BITS_DESCRIPTOR    12
#define ENTRY_BITS_C             1
#define ENTRY_BITS_O             1
#define ENTRY_BITS_TOTAL	\
(ENTRY_BITS_C + ENTRY_BITS_O + \
ENTRY_BITS_QWORDS + ENTRY_BITS_DESCRIPTOR)
#define ENTRY_MASK ((1 << ENTRY_BITS_TOTAL) - 1)
#define ENTRY_MASK_C (((1 << ENTRY_BITS_C) - 1) << ENTRY_BITPOS_C)
#define ENTRY_MASK_O (((1 << ENTRY_BITS_O) - 1) << ENTRY_BITPOS_O)
#define ENTRY_MASK_QWORDS \
(((1 << ENTRY_BITS_QWORDS) - 1) << ENTRY_BITPOS_QWORDS)
#define ENTRY_MASK_DESCRIPTOR \
(((1 << ENTRY_BITS_DESCRIPTOR) - 1) << ENTRY_BITPOS_DESCRIPTOR)
#define ENTRY_MASK_NOSTATE (ENTRY_MASK >> (ENTRY_BITS_C + ENTRY_BITS_O))
