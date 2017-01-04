struct mtd_info;
#define EXPORT_SYMBOL(x)
#define MODULE_LICENSE(x)
#define MODULE_AUTHOR(x)
#define MODULE_DESCRIPTION(x)
#define printk printf
#define KERN_ERR		""
static const char invparity[256] = ;
static const char bitsperbyte[256] = ;
static const char addressbits[256] = ;
void __nand_calculate_ecc(const unsigned char *buf, unsigned int eccsize,
unsigned char *code)
EXPORT_SYMBOL(__nand_calculate_ecc);
int nand_calculate_ecc(struct mtd_info *mtd, const unsigned char *buf,
unsigned char *code)
EXPORT_SYMBOL(nand_calculate_ecc);
int __nand_correct_data(unsigned char *buf,
unsigned char *read_ecc, unsigned char *calc_ecc,
unsigned int eccsize)
EXPORT_SYMBOL(__nand_correct_data);
int nand_correct_data(struct mtd_info *mtd, unsigned char *buf,
unsigned char *read_ecc, unsigned char *calc_ecc)
EXPORT_SYMBOL(nand_correct_data);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Frans Meulenbroeks <fransmeulenbroeks@gmail.com>");
MODULE_DESCRIPTION("Generic NAND ECC support");
