#define _LASAT_H
extern struct lasat_misc  *lasat_misc;
enum lasat_mtdparts ;
#define LASAT_EEPROM_VERSION 7
struct lasat_eeprom_struct ;
struct lasat_eeprom_struct_pre7 ;
#define LASAT_W0_DSCTYPE(v)		(((v))         & 0xf)
#define LASAT_W0_BMID(v)		(((v) >> 0x04) & 0xf)
#define LASAT_W0_CPUTYPE(v)		(((v) >> 0x08) & 0xf)
#define LASAT_W0_BUSSPEED(v)		(((v) >> 0x0c) & 0xf)
#define LASAT_W0_CPUCLK(v)		(((v) >> 0x10) & 0xf)
#define LASAT_W0_SDRAMBANKSZ(v)		(((v) >> 0x14) & 0xf)
#define LASAT_W0_SDRAMBANKS(v)		(((v) >> 0x18) & 0xf)
#define LASAT_W0_L2CACHE(v)		(((v) >> 0x1c) & 0xf)
#define LASAT_W1_EDHAC(v)		(((v))         & 0xf)
#define LASAT_W1_HIFN(v)		(((v) >> 0x04) & 0x1)
#define LASAT_W1_ISDN(v)		(((v) >> 0x05) & 0x1)
#define LASAT_W1_IDE(v)			(((v) >> 0x06) & 0x1)
#define LASAT_W1_HDLC(v)		(((v) >> 0x07) & 0x1)
#define LASAT_W1_USVERSION(v)		(((v) >> 0x08) & 0x1)
#define LASAT_W1_4MACS(v)		(((v) >> 0x09) & 0x1)
#define LASAT_W1_EXTSERIAL(v)		(((v) >> 0x0a) & 0x1)
#define LASAT_W1_FLASHSIZE(v)		(((v) >> 0x0c) & 0xf)
#define LASAT_W1_PCISLOTS(v)		(((v) >> 0x10) & 0xf)
#define LASAT_W1_PCI1OPT(v)		(((v) >> 0x14) & 0xf)
#define LASAT_W1_PCI2OPT(v)		(((v) >> 0x18) & 0xf)
#define LASAT_W1_PCI3OPT(v)		(((v) >> 0x1c) & 0xf)
#define LASAT_BMID_MASQUERADE2		0
#define LASAT_BMID_MASQUERADEPRO	1
#define LASAT_BMID_SAFEPIPE25		2
#define LASAT_BMID_SAFEPIPE50		3
#define LASAT_BMID_SAFEPIPE100		4
#define LASAT_BMID_SAFEPIPE5000		5
#define LASAT_BMID_SAFEPIPE7000		6
#define LASAT_BMID_SAFEPIPE1000		7
#define LASAT_BMID_UNKNOWN		0xf
#define LASAT_MAX_BMID_NAMES		9
#define LASAT_HAS_EDHAC			(1 << 0)
#define LASAT_EDHAC_FAST		(1 << 1)
#define LASAT_HAS_EADI			(1 << 2)
#define LASAT_HAS_HIFN			(1 << 3)
#define LASAT_HAS_ISDN			(1 << 4)
#define LASAT_HAS_LEASEDLINE_IF		(1 << 5)
#define LASAT_HAS_HDC			(1 << 6)
#define LASAT_PRID_MASQUERADE2		0
#define LASAT_PRID_MASQUERADEPRO	1
#define LASAT_PRID_SAFEPIPE25		2
#define LASAT_PRID_SAFEPIPE50		3
#define LASAT_PRID_SAFEPIPE100		4
#define LASAT_PRID_SAFEPIPE5000		5
#define LASAT_PRID_SAFEPIPE7000		6
#define LASAT_PRID_SAFEPIPE30		7
#define LASAT_PRID_SAFEPIPE5100		8
#define LASAT_PRID_SAFEPIPE7100		9
#define LASAT_PRID_SAFEPIPE1110		10
#define LASAT_PRID_SAFEPIPE3020		11
#define LASAT_PRID_SAFEPIPE3030		12
#define LASAT_PRID_SAFEPIPE5020		13
#define LASAT_PRID_SAFEPIPE5030		14
#define LASAT_PRID_SAFEPIPE1120		15
#define LASAT_PRID_SAFEPIPE1130		16
#define LASAT_PRID_SAFEPIPE6010		17
#define LASAT_PRID_SAFEPIPE6110		18
#define LASAT_PRID_SAFEPIPE6210		19
#define LASAT_PRID_SAFEPIPE1020		20
#define LASAT_PRID_SAFEPIPE1040		21
#define LASAT_PRID_SAFEPIPE1060		22
struct lasat_info ;
extern struct lasat_info lasat_board_info;
static inline unsigned long lasat_flash_partition_start(int partno)
static inline unsigned long lasat_flash_partition_size(int partno)
extern int lasat_init_board_info(void);
extern void lasat_write_eeprom_info(void);
#define N_MACHTYPES		2
#define LASAT_100_DIVIDER 20
#define LASAT_200_DIVIDER 8
extern unsigned int lasat_ndelay_divider;
static inline void lasat_ndelay(unsigned int ns)
#define IS_LASAT_200()     (current_cpu_data.cputype == CPU_R5000)
#define LASAT_SERVICEMODE_MAGIC_1     0xdeadbeef
#define LASAT_SERVICEMODE_MAGIC_2     0xfedeabba
#define LASAT_GT_BASE           (KSEG1ADDR(0x14000000))
#define Vrc5074_PHYS_BASE       0x1fa00000
#define Vrc5074_BASE            (KSEG1ADDR(Vrc5074_PHYS_BASE))
#define PCI_WINDOW1             0x1a000000
