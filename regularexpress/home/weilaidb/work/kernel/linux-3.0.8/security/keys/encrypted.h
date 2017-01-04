#define __ENCRYPTED_KEY_H
#define ENCRYPTED_DEBUG 0
#if ENCRYPTED_DEBUG
static inline void dump_master_key(const u8 *master_key, size_t master_keylen)
static inline void dump_decrypted_data(struct encrypted_key_payload *epayload)
static inline void dump_encrypted_data(struct encrypted_key_payload *epayload,
unsigned int encrypted_datalen)
static inline void dump_hmac(const char *str, const u8 *digest,
unsigned int hmac_size)
static inline void dump_master_key(const u8 *master_key, size_t master_keylen)
static inline void dump_decrypted_data(struct encrypted_key_payload *epayload)
static inline void dump_encrypted_data(struct encrypted_key_payload *epayload,
unsigned int encrypted_datalen)
static inline void dump_hmac(const char *str, const u8 *digest,
unsigned int hmac_size)
