static int process_request_key_err(long err_code)
static int process_find_global_auth_tok_for_sig_err(int err_code)
int ecryptfs_parse_packet_length(unsigned char *data, size_t *size,
size_t *length_size)
int ecryptfs_write_packet_length(char *dest, size_t size,
size_t *packet_size_length)
static int
write_tag_64_packet(char *signature, struct ecryptfs_session_key *session_key,
char **packet, size_t *packet_len)
static int
parse_tag_65_packet(struct ecryptfs_session_key *session_key, u8 *cipher_code,
struct ecryptfs_message *msg)
static int
write_tag_66_packet(char *signature, u8 cipher_code,
struct ecryptfs_crypt_stat *crypt_stat, char **packet,
size_t *packet_len)
static int
parse_tag_67_packet(struct ecryptfs_key_record *key_rec,
struct ecryptfs_message *msg)
static int ecryptfs_verify_version(u16 version)
static int
ecryptfs_verify_auth_tok_from_key(struct key *auth_tok_key,
struct ecryptfs_auth_tok **auth_tok)
static int
ecryptfs_find_global_auth_tok_for_sig(
struct key **auth_tok_key,
struct ecryptfs_auth_tok **auth_tok,
struct ecryptfs_mount_crypt_stat *mount_crypt_stat, char *sig)
static int
ecryptfs_find_auth_tok_for_sig(
struct key **auth_tok_key,
struct ecryptfs_auth_tok **auth_tok,
struct ecryptfs_mount_crypt_stat *mount_crypt_stat,
char *sig)
struct ecryptfs_write_tag_70_packet_silly_stack ;
int
ecryptfs_write_tag_70_packet(char *dest, size_t *remaining_bytes,
size_t *packet_size,
struct ecryptfs_mount_crypt_stat *mount_crypt_stat,
char *filename, size_t filename_size)
struct ecryptfs_parse_tag_70_packet_silly_stack ;
int
ecryptfs_parse_tag_70_packet(char **filename, size_t *filename_size,
size_t *packet_size,
struct ecryptfs_mount_crypt_stat *mount_crypt_stat,
char *data, size_t max_packet_size)
static int
ecryptfs_get_auth_tok_sig(char **sig, struct ecryptfs_auth_tok *auth_tok)
static int
decrypt_pki_encrypted_session_key(struct ecryptfs_auth_tok *auth_tok,
struct ecryptfs_crypt_stat *crypt_stat)
static void wipe_auth_tok_list(struct list_head *auth_tok_list_head)
struct kmem_cache *ecryptfs_auth_tok_list_item_cache;
static int
parse_tag_1_packet(struct ecryptfs_crypt_stat *crypt_stat,
unsigned char *data, struct list_head *auth_tok_list,
struct ecryptfs_auth_tok **new_auth_tok,
size_t *packet_size, size_t max_packet_size)
static int
parse_tag_3_packet(struct ecryptfs_crypt_stat *crypt_stat,
unsigned char *data, struct list_head *auth_tok_list,
struct ecryptfs_auth_tok **new_auth_tok,
size_t *packet_size, size_t max_packet_size)
static int
parse_tag_11_packet(unsigned char *data, unsigned char *contents,
size_t max_contents_bytes, size_t *tag_11_contents_size,
size_t *packet_size, size_t max_packet_size)
int ecryptfs_keyring_auth_tok_for_sig(struct key **auth_tok_key,
struct ecryptfs_auth_tok **auth_tok,
char *sig)
static int
decrypt_passphrase_encrypted_session_key(struct ecryptfs_auth_tok *auth_tok,
struct ecryptfs_crypt_stat *crypt_stat)
int ecryptfs_parse_packet_set(struct ecryptfs_crypt_stat *crypt_stat,
unsigned char *src,
struct dentry *ecryptfs_dentry)
static int
pki_encrypt_session_key(struct key *auth_tok_key,
struct ecryptfs_auth_tok *auth_tok,
struct ecryptfs_crypt_stat *crypt_stat,
struct ecryptfs_key_record *key_rec)
static int
write_tag_1_packet(char *dest, size_t *remaining_bytes,
struct key *auth_tok_key, struct ecryptfs_auth_tok *auth_tok,
struct ecryptfs_crypt_stat *crypt_stat,
struct ecryptfs_key_record *key_rec, size_t *packet_size)
static int
write_tag_11_packet(char *dest, size_t *remaining_bytes, char *contents,
size_t contents_length, size_t *packet_length)
static int
write_tag_3_packet(char *dest, size_t *remaining_bytes,
struct ecryptfs_auth_tok *auth_tok,
struct ecryptfs_crypt_stat *crypt_stat,
struct ecryptfs_key_record *key_rec, size_t *packet_size)
struct kmem_cache *ecryptfs_key_record_cache;
int
ecryptfs_generate_key_packet_set(char *dest_base,
struct ecryptfs_crypt_stat *crypt_stat,
struct dentry *ecryptfs_dentry, size_t *len,
size_t max)
struct kmem_cache *ecryptfs_key_sig_cache;
int ecryptfs_add_keysig(struct ecryptfs_crypt_stat *crypt_stat, char *sig)
struct kmem_cache *ecryptfs_global_auth_tok_cache;
int
ecryptfs_add_global_auth_tok(struct ecryptfs_mount_crypt_stat *mount_crypt_stat,
char *sig, u32 global_auth_tok_flags)
