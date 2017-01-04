#define AM29DL800BB	0x22CB
#define AM29DL800BT	0x224A
#define AM29F800BB	0x2258
#define AM29F800BT	0x22D6
#define AM29LV400BB	0x22BA
#define AM29LV400BT	0x22B9
#define AM29LV800BB	0x225B
#define AM29LV800BT	0x22DA
#define AM29LV160DT	0x22C4
#define AM29LV160DB	0x2249
#define AM29F017D	0x003D
#define AM29F016D	0x00AD
#define AM29F080	0x00D5
#define AM29F040	0x00A4
#define AM29LV040B	0x004F
#define AM29F032B	0x0041
#define AM29F002T	0x00B0
#define AM29SL800DB	0x226B
#define AM29SL800DT	0x22EA
#define AT49BV512	0x0003
#define AT29LV512	0x003d
#define AT49BV16X	0x00C0
#define AT49BV16XT	0x00C2
#define AT49BV32X	0x00C8
#define AT49BV32XT	0x00C9
#define EN29SL800BB	0x226B
#define EN29SL800BT	0x22EA
#define MBM29F040C	0x00A4
#define MBM29F800BA	0x2258
#define MBM29LV650UE	0x22D7
#define MBM29LV320TE	0x22F6
#define MBM29LV320BE	0x22F9
#define MBM29LV160TE	0x22C4
#define MBM29LV160BE	0x2249
#define MBM29LV800BA	0x225B
#define MBM29LV800TA	0x22DA
#define MBM29LV400TC	0x22B9
#define MBM29LV400BC	0x22BA
#define HY29F002T	0x00B0
#define I28F004B3T	0x00d4
#define I28F004B3B	0x00d5
#define I28F400B3T	0x8894
#define I28F400B3B	0x8895
#define I28F008S5	0x00a6
#define I28F016S5	0x00a0
#define I28F008SA	0x00a2
#define I28F008B3T	0x00d2
#define I28F008B3B	0x00d3
#define I28F800B3T	0x8892
#define I28F800B3B	0x8893
#define I28F016S3	0x00aa
#define I28F016B3T	0x00d0
#define I28F016B3B	0x00d1
#define I28F160B3T	0x8890
#define I28F160B3B	0x8891
#define I28F320B3T	0x8896
#define I28F320B3B	0x8897
#define I28F640B3T	0x8898
#define I28F640B3B	0x8899
#define I28F640C3B	0x88CD
#define I28F160F3T	0x88F3
#define I28F160F3B	0x88F4
#define I28F160C3T	0x88C2
#define I28F160C3B	0x88C3
#define I82802AB	0x00ad
#define I82802AC	0x00ac
#define MX29LV040C	0x004F
#define MX29LV160T	0x22C4
#define MX29LV160B	0x2249
#define MX29F040	0x00A4
#define MX29F016	0x00AD
#define MX29F002T	0x00B0
#define MX29F004T	0x0045
#define MX29F004B	0x0046
#define UPD29F064115	0x221C
#define PM49FL002	0x006D
#define PM49FL004	0x006E
#define PM49FL008	0x006A
#define LH28F640BF	0x00b0
#define M29F800AB	0x0058
#define M29W800DT	0x22D7
#define M29W800DB	0x225B
#define M29W400DT	0x00EE
#define M29W400DB	0x00EF
#define M29W160DT	0x22C4
#define M29W160DB	0x2249
#define M29W040B	0x00E3
#define M50FW040	0x002C
#define M50FW080	0x002D
#define M50FW016	0x002E
#define M50LPW080       0x002F
#define M50FLW080A	0x0080
#define M50FLW080B	0x0081
#define PSD4256G6V	0x00e9
#define SST29EE020	0x0010
#define SST29LE020	0x0012
#define SST29EE512	0x005d
#define SST29LE512	0x003d
#define SST39LF800	0x2781
#define SST39LF160	0x2782
#define SST39VF1601	0x234b
#define SST39VF3201	0x235b
#define SST39WF1601	0x274b
#define SST39WF1602	0x274a
#define SST39LF512	0x00D4
#define SST39LF010	0x00D5
#define SST39LF020	0x00D6
#define SST39LF040	0x00D7
#define SST39SF010A	0x00B5
#define SST39SF020A	0x00B6
#define SST39SF040	0x00B7
#define SST49LF004B	0x0060
#define SST49LF040B	0x0050
#define SST49LF008A	0x005a
#define SST49LF030A	0x001C
#define SST49LF040A	0x0051
#define SST49LF080A	0x005B
#define SST36VF3203	0x7354
#define TC58FVT160	0x00C2
#define TC58FVB160	0x0043
#define TC58FVT321	0x009A
#define TC58FVB321	0x009C
#define TC58FVT641	0x0093
#define TC58FVB641	0x0095
#define W49V002A	0x00b0
enum uaddr ;
struct unlock_addr ;
static const struct unlock_addr  unlock_addrs[] = ;
struct amd_flash_info ;
#define ERASEINFO(size,blocks) (size<<8)|(blocks-1)
#define SIZE_64KiB  16
#define SIZE_128KiB 17
#define SIZE_256KiB 18
#define SIZE_512KiB 19
#define SIZE_1MiB   20
#define SIZE_2MiB   21
#define SIZE_4MiB   22
#define SIZE_8MiB   23
static const struct amd_flash_info jedec_table[] = ;
static inline u32 jedec_read_mfr(struct map_info *map, uint32_t base,
struct cfi_private *cfi)
static inline u32 jedec_read_id(struct map_info *map, uint32_t base,
struct cfi_private *cfi)
static void jedec_reset(u32 base, struct map_info *map, struct cfi_private *cfi)
static int cfi_jedec_setup(struct map_info *map, struct cfi_private *cfi, int index)
static inline int jedec_match( uint32_t base,
struct map_info *map,
struct cfi_private *cfi,
const struct amd_flash_info *finfo )
static int jedec_probe_chip(struct map_info *map, __u32 base,
unsigned long *chip_map, struct cfi_private *cfi)
static struct chip_probe jedec_chip_probe = ;
static struct mtd_info *jedec_probe(struct map_info *map)
static struct mtd_chip_driver jedec_chipdrv = ;
static int __init jedec_probe_init(void)
static void __exit jedec_probe_exit(void)
module_init(jedec_probe_init);
module_exit(jedec_probe_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Erwin Authried <eauth@softsys.co.at> et al.");
MODULE_DESCRIPTION("Probe code for JEDEC-compliant flash chips");
