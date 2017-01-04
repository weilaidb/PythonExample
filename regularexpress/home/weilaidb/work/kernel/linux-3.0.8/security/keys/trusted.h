#define __TRUSTED_KEY_H
#define MAX_PCRINFO_SIZE		64
#define MAX_BUF_SIZE			512
#define TPM_GETRANDOM_SIZE		14
#define TPM_OSAP_SIZE			36
#define TPM_OIAP_SIZE			10
#define TPM_SEAL_SIZE			87
#define TPM_UNSEAL_SIZE			104
#define TPM_SIZE_OFFSET			2
#define TPM_RETURN_OFFSET		6
#define TPM_DATA_OFFSET			10
#define LOAD32(buffer, offset)	(ntohl(*(uint32_t *)&buffer[offset]))
#define LOAD32N(buffer, offset)	(*(uint32_t *)&buffer[offset])
#define LOAD16(buffer, offset)	(ntohs(*(uint16_t *)&buffer[offset]))
struct tpm_buf ;
#define INIT_BUF(tb) (tb->len = 0)
struct osapsess ;
enum ;
struct trusted_key_options ;
#define TPM_DEBUG 0
#if TPM_DEBUG
static inline void dump_options(struct trusted_key_options *o)
static inline void dump_payload(struct trusted_key_payload *p)
static inline void dump_sess(struct osapsess *s)
static inline void dump_tpm_buf(unsigned char *buf)
static inline void dump_options(struct trusted_key_options *o)
static inline void dump_payload(struct trusted_key_payload *p)
static inline void dump_sess(struct osapsess *s)
static inline void dump_tpm_buf(unsigned char *buf)
static inline void store8(struct tpm_buf *buf, const unsigned char value)
static inline void store16(struct tpm_buf *buf, const uint16_t value)
static inline void store32(struct tpm_buf *buf, const uint32_t value)
static inline void storebytes(struct tpm_buf *buf, const unsigned char *in,
const int len)
