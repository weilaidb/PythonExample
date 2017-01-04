typedef __u16 (csum_fn) (void *, unsigned int);
static __u16 sd_dif_crc_fn(void *data, unsigned int len)
static __u16 sd_dif_ip_fn(void *data, unsigned int len)
static void sd_dif_type1_generate(struct blk_integrity_exchg *bix, csum_fn *fn)
static void sd_dif_type1_generate_crc(struct blk_integrity_exchg *bix)
static void sd_dif_type1_generate_ip(struct blk_integrity_exchg *bix)
static int sd_dif_type1_verify(struct blk_integrity_exchg *bix, csum_fn *fn)
static int sd_dif_type1_verify_crc(struct blk_integrity_exchg *bix)
static int sd_dif_type1_verify_ip(struct blk_integrity_exchg *bix)
static void sd_dif_type1_set_tag(void *prot, void *tag_buf, unsigned int sectors)
static void sd_dif_type1_get_tag(void *prot, void *tag_buf, unsigned int sectors)
static struct blk_integrity dif_type1_integrity_crc = ;
static struct blk_integrity dif_type1_integrity_ip = ;
static void sd_dif_type3_generate(struct blk_integrity_exchg *bix, csum_fn *fn)
static void sd_dif_type3_generate_crc(struct blk_integrity_exchg *bix)
static void sd_dif_type3_generate_ip(struct blk_integrity_exchg *bix)
static int sd_dif_type3_verify(struct blk_integrity_exchg *bix, csum_fn *fn)
static int sd_dif_type3_verify_crc(struct blk_integrity_exchg *bix)
static int sd_dif_type3_verify_ip(struct blk_integrity_exchg *bix)
static void sd_dif_type3_set_tag(void *prot, void *tag_buf, unsigned int sectors)
static void sd_dif_type3_get_tag(void *prot, void *tag_buf, unsigned int sectors)
static struct blk_integrity dif_type3_integrity_crc = ;
static struct blk_integrity dif_type3_integrity_ip = ;
void sd_dif_config_host(struct scsi_disk *sdkp)
int sd_dif_prepare(struct request *rq, sector_t hw_sector, unsigned int sector_sz)
void sd_dif_complete(struct scsi_cmnd *scmd, unsigned int good_bytes)
