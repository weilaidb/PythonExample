#define _CRYPTO_ARCH_S390_CRYPT_S390_H
#define CRYPT_S390_OP_MASK 0xFF00
#define CRYPT_S390_FUNC_MASK 0x00FF
#define CRYPT_S390_PRIORITY 300
#define CRYPT_S390_COMPOSITE_PRIORITY 400
#define CRYPT_S390_MSA	0x1
#define CRYPT_S390_MSA3	0x2
#define CRYPT_S390_MSA4	0x4
enum crypt_s390_operations ;
enum crypt_s390_km_func ;
enum crypt_s390_kmc_func ;
enum crypt_s390_kmctr_func ;
enum crypt_s390_kimd_func ;
enum crypt_s390_klmd_func ;
enum crypt_s390_kmac_func ;
static inline int crypt_s390_km(long func, void *param,
u8 *dest, const u8 *src, long src_len)
static inline int crypt_s390_kmc(long func, void *param,
u8 *dest, const u8 *src, long src_len)
static inline int crypt_s390_kimd(long func, void *param,
const u8 *src, long src_len)
static inline int crypt_s390_klmd(long func, void *param,
const u8 *src, long src_len)
static inline int crypt_s390_kmac(long func, void *param,
const u8 *src, long src_len)
static inline int crypt_s390_kmctr(long func, void *param, u8 *dest,
const u8 *src, long src_len, u8 *counter)
static inline int crypt_s390_func_available(int func,
unsigned int facility_mask)
static inline int crypt_s390_pcc(long func, void *param)
