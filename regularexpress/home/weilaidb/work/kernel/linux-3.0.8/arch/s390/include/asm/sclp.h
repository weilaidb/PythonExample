#define _ASM_S390_SCLP_H
#define SCLP_CHP_INFO_MASK_SIZE		32
struct sclp_chp_info ;
#define LOADPARM_LEN 8
struct sclp_ipl_info ;
struct sclp_cpu_entry  __attribute__((packed));
struct sclp_cpu_info ;
int sclp_get_cpu_info(struct sclp_cpu_info *info);
int sclp_cpu_configure(u8 cpu);
int sclp_cpu_deconfigure(u8 cpu);
void sclp_facilities_detect(void);
unsigned long long sclp_get_rnmax(void);
unsigned long long sclp_get_rzm(void);
int sclp_sdias_blk_count(void);
int sclp_sdias_copy(void *dest, int blk_num, int nr_blks);
int sclp_chp_configure(struct chp_id chpid);
int sclp_chp_deconfigure(struct chp_id chpid);
int sclp_chp_read_info(struct sclp_chp_info *info);
void sclp_get_ipl_info(struct sclp_ipl_info *info);
