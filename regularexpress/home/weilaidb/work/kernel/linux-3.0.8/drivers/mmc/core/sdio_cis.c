static int cistpl_vers_1(struct mmc_card *card, struct sdio_func *func,
const unsigned char *buf, unsigned size)
static int cistpl_manfid(struct mmc_card *card, struct sdio_func *func,
const unsigned char *buf, unsigned size)
static const unsigned char speed_val[16] =
;
static const unsigned int speed_unit[8] =
;
typedef int (tpl_parse_t)(struct mmc_card *, struct sdio_func *,
const unsigned char *, unsigned);
struct cis_tpl ;
static int cis_tpl_parse(struct mmc_card *card, struct sdio_func *func,
const char *tpl_descr,
const struct cis_tpl *tpl, int tpl_count,
unsigned char code,
const unsigned char *buf, unsigned size)
static int cistpl_funce_common(struct mmc_card *card, struct sdio_func *func,
const unsigned char *buf, unsigned size)
static int cistpl_funce_func(struct mmc_card *card, struct sdio_func *func,
const unsigned char *buf, unsigned size)
static const struct cis_tpl cis_tpl_funce_list[] = ;
static int cistpl_funce(struct mmc_card *card, struct sdio_func *func,
const unsigned char *buf, unsigned size)
static const struct cis_tpl cis_tpl_list[] = ;
static int sdio_read_cis(struct mmc_card *card, struct sdio_func *func)
int sdio_read_common_cis(struct mmc_card *card)
void sdio_free_common_cis(struct mmc_card *card)
int sdio_read_func_cis(struct sdio_func *func)
void sdio_free_func_cis(struct sdio_func *func)
