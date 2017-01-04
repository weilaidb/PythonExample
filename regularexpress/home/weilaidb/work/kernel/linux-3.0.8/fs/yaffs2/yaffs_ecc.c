static const unsigned char column_parity_table[] = ;
void yaffs_ecc_calc(const unsigned char *data, unsigned char *ecc)
int yaffs_ecc_correct(unsigned char *data, unsigned char *read_ecc,
const unsigned char *test_ecc)
void yaffs_ecc_calc_other(const unsigned char *data, unsigned n_bytes,
struct yaffs_ecc_other *ecc_other)
int yaffs_ecc_correct_other(unsigned char *data, unsigned n_bytes,
struct yaffs_ecc_other *read_ecc,
const struct yaffs_ecc_other *test_ecc)
