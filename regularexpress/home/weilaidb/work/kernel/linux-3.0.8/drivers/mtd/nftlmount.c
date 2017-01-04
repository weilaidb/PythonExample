#define SECTORSIZE 512
static int find_boot_record(struct NFTLrecord *nftl)
static int memcmpb(void *a, int c, int n)
static int check_free_sectors(struct NFTLrecord *nftl, unsigned int address, int len,
int check_oob)
int NFTL_formatblock(struct NFTLrecord *nftl, int block)
static void check_sectors_in_chain(struct NFTLrecord *nftl, unsigned int first_block)
static int calc_chain_length(struct NFTLrecord *nftl, unsigned int first_block)
static void format_chain(struct NFTLrecord *nftl, unsigned int first_block)
static int check_and_mark_free_block(struct NFTLrecord *nftl, int block)
static int get_fold_mark(struct NFTLrecord *nftl, unsigned int block)
int NFTL_mount(struct NFTLrecord *s)
