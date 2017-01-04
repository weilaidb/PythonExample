static void __db_hmac __P((u_int8_t *, u_int8_t *, size_t, u_int8_t *));
static void
__db_hmac(k, data, data_len, mac)
u_int8_t *k, *data, *mac;
size_t data_len;
void
__db_chksum(hdr, data, data_len, mac_key, store)
void *hdr;
u_int8_t *data;
size_t data_len;
u_int8_t *mac_key;
u_int8_t *store;
void
__db_derive_mac(passwd, plen, mac_key)
u_int8_t *passwd;
size_t plen;
u_int8_t *mac_key;
int
__db_check_chksum(env, hdr, db_cipher, chksum, data, data_len, is_hmac)
ENV *env;
void *hdr;
DB_CIPHER *db_cipher;
u_int8_t *chksum;
void *data;
size_t data_len;
int is_hmac;
