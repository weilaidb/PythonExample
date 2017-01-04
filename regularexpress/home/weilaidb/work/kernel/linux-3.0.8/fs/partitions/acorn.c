#define PARTITION_RISCIX_MFM	1
#define PARTITION_RISCIX_SCSI	2
#define PARTITION_LINUX		9
#if defined(CONFIG_ACORN_PARTITION_CUMANA) || \
defined(CONFIG_ACORN_PARTITION_ADFS)
static struct adfs_discrecord *
adfs_partition(struct parsed_partitions *state, char *name, char *data,
unsigned long first_sector, int slot)
struct riscix_part ;
struct riscix_record ;
#if defined(CONFIG_ACORN_PARTITION_CUMANA) || \
defined(CONFIG_ACORN_PARTITION_ADFS)
static int riscix_partition(struct parsed_partitions *state,
unsigned long first_sect, int slot,
unsigned long nr_sects)
#define LINUX_NATIVE_MAGIC 0xdeafa1de
#define LINUX_SWAP_MAGIC   0xdeafab1e
struct linux_part ;
#if defined(CONFIG_ACORN_PARTITION_CUMANA) || \
defined(CONFIG_ACORN_PARTITION_ADFS)
static int linux_partition(struct parsed_partitions *state,
unsigned long first_sect, int slot,
unsigned long nr_sects)
int adfspart_check_CUMANA(struct parsed_partitions *state)
int adfspart_check_ADFS(struct parsed_partitions *state)
struct ics_part ;
static int adfspart_check_ICSLinux(struct parsed_partitions *state,
unsigned long block)
static inline int valid_ics_sector(const unsigned char *data)
int adfspart_check_ICS(struct parsed_partitions *state)
struct ptec_part ;
static inline int valid_ptec_sector(const unsigned char *data)
int adfspart_check_POWERTEC(struct parsed_partitions *state)
struct eesox_part ;
static const char eesox_name[] = ;
int adfspart_check_EESOX(struct parsed_partitions *state)
