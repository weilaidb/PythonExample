#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define TRUE   1
#define FALSE  0
#define STATIC
#define STATIC  static
#define EE_MFG      (long)0
#define EE_FIRST    0x28
#define EE_LIMIT    128
#define EPROM_EWEN      0x0019
#define EPROM_EWDS      0x0001
#define EPROM_READ      0x0003
#define EPROM_WRITE     0x0005
#define EPROM_ERASE     0x0007
#define EPROM_ERAL      0x0009
#define EPROM_WRAL      0x0011
#define EPROM_ADR_SZ    7
#define EPROM_OP_SZ     3
#define SIZE_ADDR_OP    (EPROM_ADR_SZ + EPROM_OP_SZ)
#define LC46A_MAX_OPS   10
#define NUM_OF_BITS     8
#define EPROM_ACTIVE_OUT_BIT    0x0001
#define EPROM_ACTIVE_IN_BIT     0x0002
#define ACTIVE_IN_BIT_SHIFT     0x0001
#define EPROM_ENCS              0x0004
static unsigned char ByteReverse[256];
static int  ByteReverseBuilt = FALSE;
short       mfg_template[sizeof (FLD_TYPE2)] =
;
STATIC void
BuildByteReverse (void)
STATIC void
eeprom_delay (void)
void
eeprom_put_byte (long addr, long data, int count)
u_int32_t
eeprom_get_byte (long addr)
STATIC void
disable_pmc_eeprom (long addr)
STATIC void
enable_pmc_eeprom (long addr)
u_int32_t
pmc_eeprom_read (long addr, long mem_offset)
int
pmc_eeprom_write (long addr, long mem_offset, u_int32_t data)
long
pmcGetBuffValue (char *ptr, int size)
void
pmcSetBuffValue (char *ptr, long value, int size)
void
pmc_eeprom_read_buffer (long addr, long mem_offset, char *dest_ptr, int size)
void
pmc_eeprom_write_buffer (long addr, long mem_offset, char *dest_ptr, int size)
u_int32_t
pmcCalcCrc_T01 (void *bufp)
u_int32_t
pmcCalcCrc_T02 (void *bufp)
void
pmc_init_seeprom (u_int32_t addr, u_int32_t serialNum)
char
pmc_verify_cksum (void *bufp)
