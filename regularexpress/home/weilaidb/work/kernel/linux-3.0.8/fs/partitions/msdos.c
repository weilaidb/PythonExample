#define SYS_IND(p)	get_unaligned(&p->sys_ind)
static inline sector_t nr_sects(struct partition *p)
static inline sector_t start_sect(struct partition *p)
static inline int is_extended_partition(struct partition *p)
#define MSDOS_LABEL_MAGIC1	0x55
#define MSDOS_LABEL_MAGIC2	0xAA
static inline int
msdos_magic_present(unsigned char *p)
#define AIX_LABEL_MAGIC1	0xC9
#define AIX_LABEL_MAGIC2	0xC2
#define AIX_LABEL_MAGIC3	0xD4
#define AIX_LABEL_MAGIC4	0xC1
static int aix_magic_present(struct parsed_partitions *state, unsigned char *p)
static void parse_extended(struct parsed_partitions *state,
sector_t first_sector, sector_t first_size)
static void parse_solaris_x86(struct parsed_partitions *state,
sector_t offset, sector_t size, int origin)
#if defined(CONFIG_BSD_DISKLABEL)
static void parse_bsd(struct parsed_partitions *state,
sector_t offset, sector_t size, int origin, char *flavour,
int max_partitions)
static void parse_freebsd(struct parsed_partitions *state,
sector_t offset, sector_t size, int origin)
static void parse_netbsd(struct parsed_partitions *state,
sector_t offset, sector_t size, int origin)
static void parse_openbsd(struct parsed_partitions *state,
sector_t offset, sector_t size, int origin)
static void parse_unixware(struct parsed_partitions *state,
sector_t offset, sector_t size, int origin)
static void parse_minix(struct parsed_partitions *state,
sector_t offset, sector_t size, int origin)
static struct  subtypes[] = ;
int msdos_partition(struct parsed_partitions *state)
