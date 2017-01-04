struct nand_bch_control ;
int nand_bch_calculate_ecc(struct mtd_info *mtd, const unsigned char *buf,
unsigned char *code)
EXPORT_SYMBOL(nand_bch_calculate_ecc);
int nand_bch_correct_data(struct mtd_info *mtd, unsigned char *buf,
unsigned char *read_ecc, unsigned char *calc_ecc)
EXPORT_SYMBOL(nand_bch_correct_data);
struct nand_bch_control *
nand_bch_init(struct mtd_info *mtd, unsigned int eccsize, unsigned int eccbytes,
struct nand_ecclayout **ecclayout)
EXPORT_SYMBOL(nand_bch_init);
void nand_bch_free(struct nand_bch_control *nbc)
EXPORT_SYMBOL(nand_bch_free);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ivan Djelic <ivan.djelic@parrot.com>");
MODULE_DESCRIPTION("NAND software BCH ECC support");
