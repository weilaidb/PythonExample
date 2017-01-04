static int force_gpt;
static int __init
force_gpt_fn(char *str)
__setup("gpt", force_gpt_fn);
static inline u32
efi_crc32(const void *buf, unsigned long len)
static u64 last_lba(struct block_device *bdev)
static inline int
pmbr_part_valid(struct partition *part)
static int
is_pmbr_valid(legacy_mbr *mbr)
static size_t read_lba(struct parsed_partitions *state,
u64 lba, u8 *buffer, size_t count)
static gpt_entry *alloc_read_gpt_entries(struct parsed_partitions *state,
gpt_header *gpt)
static gpt_header *alloc_read_gpt_header(struct parsed_partitions *state,
u64 lba)
static int is_gpt_valid(struct parsed_partitions *state, u64 lba,
gpt_header **gpt, gpt_entry **ptes)
static inline int
is_pte_valid(const gpt_entry *pte, const u64 lastlba)
static void
compare_gpts(gpt_header *pgpt, gpt_header *agpt, u64 lastlba)
static int find_valid_gpt(struct parsed_partitions *state, gpt_header **gpt,
gpt_entry **ptes)
int efi_partition(struct parsed_partitions *state)
