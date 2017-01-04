static int find_boot_record(struct INFTLrecord *inftl)
static int memcmpb(void *a, int c, int n)
static int check_free_sectors(struct INFTLrecord *inftl, unsigned int address,
int len, int check_oob)
int INFTL_formatblock(struct INFTLrecord *inftl, int block)
static void format_chain(struct INFTLrecord *inftl, unsigned int first_block)
void INFTL_dumptables(struct INFTLrecord *s)
void INFTL_dumpVUchains(struct INFTLrecord *s)
int INFTL_mount(struct INFTLrecord *s)
