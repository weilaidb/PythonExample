#define LINUX_MMC_CORE_H
struct request;
struct mmc_data;
struct mmc_request;
struct mmc_command ;
struct mmc_data ;
struct mmc_request ;
struct mmc_host;
struct mmc_card;
extern void mmc_wait_for_req(struct mmc_host *, struct mmc_request *);
extern int mmc_wait_for_cmd(struct mmc_host *, struct mmc_command *, int);
extern int mmc_app_cmd(struct mmc_host *, struct mmc_card *);
extern int mmc_wait_for_app_cmd(struct mmc_host *, struct mmc_card *,
struct mmc_command *, int);
extern int mmc_switch(struct mmc_card *, u8, u8, u8, unsigned int);
#define MMC_ERASE_ARG		0x00000000
#define MMC_SECURE_ERASE_ARG	0x80000000
#define MMC_TRIM_ARG		0x00000001
#define MMC_SECURE_TRIM1_ARG	0x80000001
#define MMC_SECURE_TRIM2_ARG	0x80008000
#define MMC_SECURE_ARGS		0x80000000
#define MMC_TRIM_ARGS		0x00008001
extern int mmc_erase(struct mmc_card *card, unsigned int from, unsigned int nr,
unsigned int arg);
extern int mmc_can_erase(struct mmc_card *card);
extern int mmc_can_trim(struct mmc_card *card);
extern int mmc_can_secure_erase_trim(struct mmc_card *card);
extern int mmc_erase_group_aligned(struct mmc_card *card, unsigned int from,
unsigned int nr);
extern int mmc_set_blocklen(struct mmc_card *card, unsigned int blocklen);
extern void mmc_set_data_timeout(struct mmc_data *, const struct mmc_card *);
extern unsigned int mmc_align_data_size(struct mmc_card *, unsigned int);
extern int __mmc_claim_host(struct mmc_host *host, atomic_t *abort);
extern void mmc_release_host(struct mmc_host *host);
extern void mmc_do_release_host(struct mmc_host *host);
extern int mmc_try_claim_host(struct mmc_host *host);
static inline void mmc_claim_host(struct mmc_host *host)
extern u32 mmc_vddrange_to_ocrmask(int vdd_min, int vdd_max);
