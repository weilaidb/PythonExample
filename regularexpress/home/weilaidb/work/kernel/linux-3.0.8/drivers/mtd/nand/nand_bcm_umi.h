#define NAND_BCM_UMI_H
#if (CFG_GLOBAL_CHIP_FAMILY == CFG_GLOBAL_CHIP_FAMILY_BCMRING)
#define NAND_ECC_BCH (CFG_GLOBAL_CHIP_REV > 0xA0)
#define NAND_ECC_BCH 0
#define CFG_GLOBAL_NAND_ECC_BCH_NUM_BYTES	13
#if NAND_ECC_BCH
#define NAND_ECC_NUM_BYTES 13
#define NAND_ECC_NUM_BYTES CFG_GLOBAL_NAND_ECC_BCH_NUM_BYTES
#define NAND_ECC_NUM_BYTES 3
#define NAND_DATA_ACCESS_SIZE 512
int nand_bcm_umi_bch_correct_page(uint8_t *datap, uint8_t *readEccData,
int numEccBytes);
static inline int nand_bcm_umi_dev_ready(void)
static inline void nand_bcm_umi_wait_till_ready(void)
static inline void nand_bcm_umi_hamming_enable_hwecc(void)
#if NAND_ECC_BCH
#define ECC_BITS_PER_CORRECTABLE_BIT 13
static inline void nand_bcm_umi_bch_enable_read_hwecc(void)
static inline void nand_bcm_umi_bch_enable_write_hwecc(void)
static inline void nand_bcm_umi_bch_config_ecc(uint8_t numEccBytes)
static inline void nand_bcm_umi_bch_pause_read_ecc_calc(void)
static inline void nand_bcm_umi_bch_resume_read_ecc_calc(void)
static inline uint32_t nand_bcm_umi_bch_poll_read_ecc_calc(void)
static inline void nand_bcm_umi_bch_poll_write_ecc_calc(void)
#if defined(__KERNEL__) && !defined(STANDALONE)
static inline void nand_bcm_umi_bch_read_oobEcc(uint32_t pageSize,
uint8_t *eccCalc, int numEccBytes, uint8_t *oobp)
static inline void nand_bcm_umi_bch_read_oobEcc(uint32_t pageSize,
uint8_t *eccCalc, int numEccBytes)
static inline void NAND_BCM_UMI_ECC_WRITE(int numEccBytes, int eccBytePos,
uint8_t *oobp, uint8_t eccVal)
static inline void nand_bcm_umi_bch_write_oobEcc(uint32_t pageSize,
uint8_t *oobp, int numEccBytes)
