#define __MTD_NAND_BCH_H__
struct mtd_info;
struct nand_bch_control;
#if defined(CONFIG_MTD_NAND_ECC_BCH)
static inline int mtd_nand_has_bch(void)
int nand_bch_calculate_ecc(struct mtd_info *mtd, const u_char *dat,
u_char *ecc_code);
int nand_bch_correct_data(struct mtd_info *mtd, u_char *dat, u_char *read_ecc,
u_char *calc_ecc);
struct nand_bch_control *
nand_bch_init(struct mtd_info *mtd, unsigned int eccsize,
unsigned int eccbytes, struct nand_ecclayout **ecclayout);
void nand_bch_free(struct nand_bch_control *nbc);
static inline int mtd_nand_has_bch(void)
static inline int
nand_bch_calculate_ecc(struct mtd_info *mtd, const u_char *dat,
u_char *ecc_code)
static inline int
nand_bch_correct_data(struct mtd_info *mtd, unsigned char *buf,
unsigned char *read_ecc, unsigned char *calc_ecc)
static inline struct nand_bch_control *
nand_bch_init(struct mtd_info *mtd, unsigned int eccsize,
unsigned int eccbytes, struct nand_ecclayout **ecclayout)
static inline void nand_bch_free(struct nand_bch_control *nbc)
