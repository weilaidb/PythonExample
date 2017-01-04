#define	__rio_rio_h__
#define	RIO_SLOTS	4
#define	RIO_HOSTS	4
#define	PORTS_PER_HOST	128
#define	LINKS_PER_UNIT	4
#define	RIO_PORTS	(PORTS_PER_HOST * RIO_HOSTS)
#define	RTAS_PER_HOST	(MAX_RUP)
#define	PORTS_PER_RTA	(PORTS_PER_HOST/RTAS_PER_HOST)
#define	PORTS_PER_MODULE 4
#define	MODULES_PER_RTA	 (PORTS_PER_RTA/PORTS_PER_MODULE)
#define MAX_PRODUCT	16
#define MAX_MODULE_TYPES 16
#define RIO_CONTROL_DEV	128
#define RIO_INVALID_MAJOR 0
#define MAX_RTA_BINDINGS (MAX_RUP * RIO_HOSTS)
#define PC_RTA16	0x90000000
#define PC_RTA8		0xe0000000
#define TYPE_HOST	0
#define TYPE_RTA8	1
#define TYPE_RTA16	2
#define	RIO_FAIL	-1
#define	NO_PORT	0xFFFFFFFF
#define	HOST_ID	0
#define	LONYBLE(X)	((X) & 0xF)
#define	HINYBLE(X)	(((X)>>4) & 0xF)
#define	DONT_SLEEP	0
#define	OK_TO_SLEEP	1
#define	DONT_PRINT	1
#define	DO_PRINT	0
#define PRINT_TO_LOG_CONS	0
#define PRINT_TO_CONS	1
#define PRINT_TO_LOG	2
#define	MIN_TIMEOUT	3
#define	HUNDRED_MS		((HZ/10)?(HZ/10):1)
#define	ONE_MEG			0x100000
#define	SIXTY_FOUR_K		0x10000
#define	RIO_AT_MEM_SIZE		SIXTY_FOUR_K
#define	RIO_EISA_MEM_SIZE	SIXTY_FOUR_K
#define	RIO_MCA_MEM_SIZE	SIXTY_FOUR_K
#define	COOK_WELL		0
#define	COOK_MEDIUM		1
#define	COOK_RAW		2
#define	RIO_PTR(C,O) (((unsigned char __iomem *)(C))+(0xFFFF&(O)))
#define	RIO_OFF(C,O) ((unsigned char __iomem *)(O)-(unsigned char __iomem *)(C))
#define	RIO_MODEM_MASK		0x1FF
#define	RIO_MODEM_BIT		0x200
#define	RIO_UNMODEM(DEV)	(MINOR(DEV) & RIO_MODEM_MASK)
#define	RIO_ISMODEM(DEV)	(MINOR(DEV) & RIO_MODEM_BIT)
#define RIO_PORT(DEV,FIRST_MAJ)	( (MAJOR(DEV) - FIRST_MAJ) * PORTS_PER_HOST) \
+ MINOR(DEV)
#define CSUM(pkt_ptr)  (((u16 *)(pkt_ptr))[0] + ((u16 *)(pkt_ptr))[1] + \
((u16 *)(pkt_ptr))[2] + ((u16 *)(pkt_ptr))[3] + \
((u16 *)(pkt_ptr))[4] + ((u16 *)(pkt_ptr))[5] + \
((u16 *)(pkt_ptr))[6] + ((u16 *)(pkt_ptr))[7] + \
((u16 *)(pkt_ptr))[8] + ((u16 *)(pkt_ptr))[9] )
#define	RIO_LINK_ENABLE	0x80FF
#define	NOT_INITIALISED	0
#define	INITIALISED	1
#define	NOT_POLLING	0
#define	POLLING		1
#define	NOT_CHANGED	0
#define	CHANGED		1
#define	NOT_INUSE	0
#define	DISCONNECT	0
#define	CONNECT		1
#define	CONTROL		'^'
#define IFOAD		( CONTROL + 1 )
#define	IDENTIFY	( CONTROL + 2 )
#define	ZOMBIE		( CONTROL + 3 )
#define	UFOAD		( CONTROL + 4 )
#define IWAIT		( CONTROL + 5 )
#define	IFOAD_MAGIC	0xF0AD
#define	ZOMBIE_MAGIC	(~0xDEAD)
#define	UFOAD_MAGIC	0xD1E
#define	IWAIT_MAGIC	0xB1DE
#define E_NO_ERROR                       ((ushort) 0)
struct rio_free_list ;
#define	TPNULL	((ushort)(0x8000))
#define PKT_IN_USE    0x1
struct Top ;
