#define ECRYPTFS_KERNEL_H
#define ECRYPTFS_VERSION_MAJOR 0x00
#define ECRYPTFS_VERSION_MINOR 0x04
#define ECRYPTFS_SUPPORTED_FILE_VERSION 0x03
#define ECRYPTFS_VERSIONING_PASSPHRASE            0x00000001
#define ECRYPTFS_VERSIONING_PUBKEY                0x00000002
#define ECRYPTFS_VERSIONING_PLAINTEXT_PASSTHROUGH 0x00000004
#define ECRYPTFS_VERSIONING_POLICY                0x00000008
#define ECRYPTFS_VERSIONING_XATTR                 0x00000010
#define ECRYPTFS_VERSIONING_MULTKEY               0x00000020
#define ECRYPTFS_VERSIONING_DEVMISC               0x00000040
#define ECRYPTFS_VERSIONING_HMAC                  0x00000080
#define ECRYPTFS_VERSIONING_FILENAME_ENCRYPTION   0x00000100
#define ECRYPTFS_VERSIONING_GCM                   0x00000200
#define ECRYPTFS_VERSIONING_MASK (ECRYPTFS_VERSIONING_PASSPHRASE \
| ECRYPTFS_VERSIONING_PLAINTEXT_PASSTHROUGH \
| ECRYPTFS_VERSIONING_PUBKEY \
| ECRYPTFS_VERSIONING_XATTR \
| ECRYPTFS_VERSIONING_MULTKEY \
| ECRYPTFS_VERSIONING_DEVMISC \
| ECRYPTFS_VERSIONING_FILENAME_ENCRYPTION)
#define ECRYPTFS_MAX_PASSWORD_LENGTH 64
#define ECRYPTFS_MAX_PASSPHRASE_BYTES ECRYPTFS_MAX_PASSWORD_LENGTH
#define ECRYPTFS_SALT_SIZE 8
#define ECRYPTFS_SALT_SIZE_HEX (ECRYPTFS_SALT_SIZE*2)
#define ECRYPTFS_SIG_SIZE 8
#define ECRYPTFS_SIG_SIZE_HEX (ECRYPTFS_SIG_SIZE*2)
#define ECRYPTFS_PASSWORD_SIG_SIZE ECRYPTFS_SIG_SIZE_HEX
#define ECRYPTFS_MAX_KEY_BYTES 64
#define ECRYPTFS_MAX_ENCRYPTED_KEY_BYTES 512
#define ECRYPTFS_DEFAULT_IV_BYTES 16
#define ECRYPTFS_FILE_VERSION 0x03
#define ECRYPTFS_DEFAULT_EXTENT_SIZE 4096
#define ECRYPTFS_MINIMUM_HEADER_EXTENT_SIZE 8192
#define ECRYPTFS_DEFAULT_MSG_CTX_ELEMS 32
#define ECRYPTFS_DEFAULT_SEND_TIMEOUT HZ
#define ECRYPTFS_MAX_MSG_CTX_TTL (HZ*3)
#define ECRYPTFS_MAX_PKI_NAME_BYTES 16
#define ECRYPTFS_DEFAULT_NUM_USERS 4
#define ECRYPTFS_MAX_NUM_USERS 32768
#define ECRYPTFS_XATTR_NAME "user.ecryptfs"
#define RFC2440_CIPHER_DES3_EDE 0x02
#define RFC2440_CIPHER_CAST_5 0x03
#define RFC2440_CIPHER_BLOWFISH 0x04
#define RFC2440_CIPHER_AES_128 0x07
#define RFC2440_CIPHER_AES_192 0x08
#define RFC2440_CIPHER_AES_256 0x09
#define RFC2440_CIPHER_TWOFISH 0x0a
#define RFC2440_CIPHER_CAST_6 0x0b
#define RFC2440_CIPHER_RSA 0x01
struct ecryptfs_session_key ;
struct ecryptfs_password ;
enum ecryptfs_token_types ;
struct ecryptfs_private_key ;
struct ecryptfs_auth_tok  __attribute__ ((packed));
void ecryptfs_dump_auth_tok(struct ecryptfs_auth_tok *auth_tok);
extern void ecryptfs_to_hex(char *dst, char *src, size_t src_size);
extern void ecryptfs_from_hex(char *dst, char *src, int dst_size);
struct ecryptfs_key_record ;
struct ecryptfs_auth_tok_list ;
struct ecryptfs_crypt_stat;
struct ecryptfs_mount_crypt_stat;
struct ecryptfs_page_crypt_context ;
static inline struct ecryptfs_auth_tok *
ecryptfs_get_key_payload_data(struct key *key)
#define ECRYPTFS_MAX_KEYSET_SIZE 1024
#define ECRYPTFS_MAX_CIPHER_NAME_SIZE 32
#define ECRYPTFS_MAX_NUM_ENC_KEYS 64
#define ECRYPTFS_MAX_IV_BYTES 16
#define ECRYPTFS_SALT_BYTES 2
#define MAGIC_ECRYPTFS_MARKER 0x3c81b7f5
#define MAGIC_ECRYPTFS_MARKER_SIZE_BYTES 8
#define ECRYPTFS_FILE_SIZE_BYTES (sizeof(u64))
#define ECRYPTFS_SIZE_AND_MARKER_BYTES (ECRYPTFS_FILE_SIZE_BYTES \
+ MAGIC_ECRYPTFS_MARKER_SIZE_BYTES)
#define ECRYPTFS_DEFAULT_CIPHER "aes"
#define ECRYPTFS_DEFAULT_KEY_BYTES 16
#define ECRYPTFS_DEFAULT_HASH "md5"
#define ECRYPTFS_TAG_70_DIGEST ECRYPTFS_DEFAULT_HASH
#define ECRYPTFS_TAG_1_PACKET_TYPE 0x01
#define ECRYPTFS_TAG_3_PACKET_TYPE 0x8C
#define ECRYPTFS_TAG_11_PACKET_TYPE 0xED
#define ECRYPTFS_TAG_64_PACKET_TYPE 0x40
#define ECRYPTFS_TAG_65_PACKET_TYPE 0x41
#define ECRYPTFS_TAG_66_PACKET_TYPE 0x42
#define ECRYPTFS_TAG_67_PACKET_TYPE 0x43
#define ECRYPTFS_TAG_70_PACKET_TYPE 0x46
#define ECRYPTFS_TAG_71_PACKET_TYPE 0x47
#define ECRYPTFS_TAG_72_PACKET_TYPE 0x48
#define ECRYPTFS_TAG_73_PACKET_TYPE 0x49
#define ECRYPTFS_FILENAME_MIN_RANDOM_PREPEND_BYTES 16
#define ECRYPTFS_NON_NULL 0x42
#define MD5_DIGEST_SIZE 16
#define ECRYPTFS_TAG_70_DIGEST_SIZE MD5_DIGEST_SIZE
#define ECRYPTFS_FEK_ENCRYPTED_FILENAME_PREFIX "ECRYPTFS_FEK_ENCRYPTED."
#define ECRYPTFS_FEK_ENCRYPTED_FILENAME_PREFIX_SIZE 23
#define ECRYPTFS_FNEK_ENCRYPTED_FILENAME_PREFIX "ECRYPTFS_FNEK_ENCRYPTED."
#define ECRYPTFS_FNEK_ENCRYPTED_FILENAME_PREFIX_SIZE 24
#define ECRYPTFS_ENCRYPTED_DENTRY_NAME_LEN (18 + 1 + 4 + 1 + 32)
struct ecryptfs_key_sig ;
struct ecryptfs_filename ;
struct ecryptfs_crypt_stat ;
struct ecryptfs_inode_info ;
struct ecryptfs_dentry_info ;
struct ecryptfs_global_auth_tok ;
struct ecryptfs_key_tfm ;
extern struct mutex key_tfm_list_mutex;
struct ecryptfs_mount_crypt_stat ;
struct ecryptfs_sb_info ;
struct ecryptfs_file_info ;
struct ecryptfs_auth_tok_list_item ;
struct ecryptfs_message ;
struct ecryptfs_msg_ctx ;
struct ecryptfs_daemon;
struct ecryptfs_daemon ;
extern struct mutex ecryptfs_daemon_hash_mux;
static inline size_t
ecryptfs_lower_header_size(struct ecryptfs_crypt_stat *crypt_stat)
static inline struct ecryptfs_file_info *
ecryptfs_file_to_private(struct file *file)
static inline void
ecryptfs_set_file_private(struct file *file,
struct ecryptfs_file_info *file_info)
static inline struct file *ecryptfs_file_to_lower(struct file *file)
static inline void
ecryptfs_set_file_lower(struct file *file, struct file *lower_file)
static inline struct ecryptfs_inode_info *
ecryptfs_inode_to_private(struct inode *inode)
static inline struct inode *ecryptfs_inode_to_lower(struct inode *inode)
static inline void
ecryptfs_set_inode_lower(struct inode *inode, struct inode *lower_inode)
static inline struct ecryptfs_sb_info *
ecryptfs_superblock_to_private(struct super_block *sb)
static inline void
ecryptfs_set_superblock_private(struct super_block *sb,
struct ecryptfs_sb_info *sb_info)
static inline struct super_block *
ecryptfs_superblock_to_lower(struct super_block *sb)
static inline void
ecryptfs_set_superblock_lower(struct super_block *sb,
struct super_block *lower_sb)
static inline struct ecryptfs_dentry_info *
ecryptfs_dentry_to_private(struct dentry *dentry)
static inline void
ecryptfs_set_dentry_private(struct dentry *dentry,
struct ecryptfs_dentry_info *dentry_info)
static inline struct dentry *
ecryptfs_dentry_to_lower(struct dentry *dentry)
static inline void
ecryptfs_set_dentry_lower(struct dentry *dentry, struct dentry *lower_dentry)
static inline struct vfsmount *
ecryptfs_dentry_to_lower_mnt(struct dentry *dentry)
static inline void
ecryptfs_set_dentry_lower_mnt(struct dentry *dentry, struct vfsmount *lower_mnt)
#define ecryptfs_printk(type, fmt, arg...) \
__ecryptfs_printk(type "%s: " fmt, __func__, ## arg);
__attribute__ ((format(printf, 1, 2)))
void __ecryptfs_printk(const char *fmt, ...);
extern const struct file_operations ecryptfs_main_fops;
extern const struct file_operations ecryptfs_dir_fops;
extern const struct inode_operations ecryptfs_main_iops;
extern const struct inode_operations ecryptfs_dir_iops;
extern const struct inode_operations ecryptfs_symlink_iops;
extern const struct super_operations ecryptfs_sops;
extern const struct dentry_operations ecryptfs_dops;
extern const struct address_space_operations ecryptfs_aops;
extern int ecryptfs_verbosity;
extern unsigned int ecryptfs_message_buf_len;
extern signed long ecryptfs_message_wait_timeout;
extern unsigned int ecryptfs_number_of_users;
extern struct kmem_cache *ecryptfs_auth_tok_list_item_cache;
extern struct kmem_cache *ecryptfs_file_info_cache;
extern struct kmem_cache *ecryptfs_dentry_info_cache;
extern struct kmem_cache *ecryptfs_inode_info_cache;
extern struct kmem_cache *ecryptfs_sb_info_cache;
extern struct kmem_cache *ecryptfs_header_cache;
extern struct kmem_cache *ecryptfs_xattr_cache;
extern struct kmem_cache *ecryptfs_key_record_cache;
extern struct kmem_cache *ecryptfs_key_sig_cache;
extern struct kmem_cache *ecryptfs_global_auth_tok_cache;
extern struct kmem_cache *ecryptfs_key_tfm_cache;
extern struct kmem_cache *ecryptfs_open_req_cache;
struct ecryptfs_open_req ;
struct inode *ecryptfs_get_inode(struct inode *lower_inode,
struct super_block *sb);
void ecryptfs_i_size_init(const char *page_virt, struct inode *inode);
int ecryptfs_decode_and_decrypt_filename(char **decrypted_name,
size_t *decrypted_name_size,
struct dentry *ecryptfs_dentry,
const char *name, size_t name_size);
int ecryptfs_fill_zeros(struct file *file, loff_t new_length);
int ecryptfs_encrypt_and_encode_filename(
char **encoded_name,
size_t *encoded_name_size,
struct ecryptfs_crypt_stat *crypt_stat,
struct ecryptfs_mount_crypt_stat *mount_crypt_stat,
const char *name, size_t name_size);
struct dentry *ecryptfs_lower_dentry(struct dentry *this_dentry);
void ecryptfs_dump_hex(char *data, int bytes);
int virt_to_scatterlist(const void *addr, int size, struct scatterlist *sg,
int sg_size);
int ecryptfs_compute_root_iv(struct ecryptfs_crypt_stat *crypt_stat);
void ecryptfs_rotate_iv(unsigned char *iv);
void ecryptfs_init_crypt_stat(struct ecryptfs_crypt_stat *crypt_stat);
void ecryptfs_destroy_crypt_stat(struct ecryptfs_crypt_stat *crypt_stat);
void ecryptfs_destroy_mount_crypt_stat(
struct ecryptfs_mount_crypt_stat *mount_crypt_stat);
int ecryptfs_init_crypt_ctx(struct ecryptfs_crypt_stat *crypt_stat);
int ecryptfs_write_inode_size_to_metadata(struct inode *ecryptfs_inode);
int ecryptfs_encrypt_page(struct page *page);
int ecryptfs_decrypt_page(struct page *page);
int ecryptfs_write_metadata(struct dentry *ecryptfs_dentry);
int ecryptfs_read_metadata(struct dentry *ecryptfs_dentry);
int ecryptfs_new_file_context(struct dentry *ecryptfs_dentry);
void ecryptfs_write_crypt_stat_flags(char *page_virt,
struct ecryptfs_crypt_stat *crypt_stat,
size_t *written);
int ecryptfs_read_and_validate_header_region(struct inode *inode);
int ecryptfs_read_and_validate_xattr_region(struct dentry *dentry,
struct inode *inode);
u8 ecryptfs_code_for_cipher_string(char *cipher_name, size_t key_bytes);
int ecryptfs_cipher_code_to_string(char *str, u8 cipher_code);
void ecryptfs_set_default_sizes(struct ecryptfs_crypt_stat *crypt_stat);
int ecryptfs_generate_key_packet_set(char *dest_base,
struct ecryptfs_crypt_stat *crypt_stat,
struct dentry *ecryptfs_dentry,
size_t *len, size_t max);
int
ecryptfs_parse_packet_set(struct ecryptfs_crypt_stat *crypt_stat,
unsigned char *src, struct dentry *ecryptfs_dentry);
int ecryptfs_truncate(struct dentry *dentry, loff_t new_length);
ssize_t
ecryptfs_getxattr_lower(struct dentry *lower_dentry, const char *name,
void *value, size_t size);
int
ecryptfs_setxattr(struct dentry *dentry, const char *name, const void *value,
size_t size, int flags);
int ecryptfs_read_xattr_region(char *page_virt, struct inode *ecryptfs_inode);
int ecryptfs_process_helo(uid_t euid, struct user_namespace *user_ns,
struct pid *pid);
int ecryptfs_process_quit(uid_t euid, struct user_namespace *user_ns,
struct pid *pid);
int ecryptfs_process_response(struct ecryptfs_message *msg, uid_t euid,
struct user_namespace *user_ns, struct pid *pid,
u32 seq);
int ecryptfs_send_message(char *data, int data_len,
struct ecryptfs_msg_ctx **msg_ctx);
int ecryptfs_wait_for_response(struct ecryptfs_msg_ctx *msg_ctx,
struct ecryptfs_message **emsg);
int ecryptfs_init_messaging(void);
void ecryptfs_release_messaging(void);
void
ecryptfs_write_header_metadata(char *virt,
struct ecryptfs_crypt_stat *crypt_stat,
size_t *written);
int ecryptfs_add_keysig(struct ecryptfs_crypt_stat *crypt_stat, char *sig);
int
ecryptfs_add_global_auth_tok(struct ecryptfs_mount_crypt_stat *mount_crypt_stat,
char *sig, u32 global_auth_tok_flags);
int ecryptfs_get_global_auth_tok_for_sig(
struct ecryptfs_global_auth_tok **global_auth_tok,
struct ecryptfs_mount_crypt_stat *mount_crypt_stat, char *sig);
int
ecryptfs_add_new_key_tfm(struct ecryptfs_key_tfm **key_tfm, char *cipher_name,
size_t key_size);
int ecryptfs_init_crypto(void);
int ecryptfs_destroy_crypto(void);
int ecryptfs_tfm_exists(char *cipher_name, struct ecryptfs_key_tfm **key_tfm);
int ecryptfs_get_tfm_and_mutex_for_cipher_name(struct crypto_blkcipher **tfm,
struct mutex **tfm_mutex,
char *cipher_name);
int ecryptfs_keyring_auth_tok_for_sig(struct key **auth_tok_key,
struct ecryptfs_auth_tok **auth_tok,
char *sig);
int ecryptfs_write_lower(struct inode *ecryptfs_inode, char *data,
loff_t offset, size_t size);
int ecryptfs_write_lower_page_segment(struct inode *ecryptfs_inode,
struct page *page_for_lower,
size_t offset_in_page, size_t size);
int ecryptfs_write(struct inode *inode, char *data, loff_t offset, size_t size);
int ecryptfs_read_lower(char *data, loff_t offset, size_t size,
struct inode *ecryptfs_inode);
int ecryptfs_read_lower_page_segment(struct page *page_for_ecryptfs,
pgoff_t page_index,
size_t offset_in_page, size_t size,
struct inode *ecryptfs_inode);
struct page *ecryptfs_get_locked_page(struct inode *inode, loff_t index);
int ecryptfs_exorcise_daemon(struct ecryptfs_daemon *daemon);
int ecryptfs_find_daemon_by_euid(struct ecryptfs_daemon **daemon, uid_t euid,
struct user_namespace *user_ns);
int ecryptfs_parse_packet_length(unsigned char *data, size_t *size,
size_t *length_size);
int ecryptfs_write_packet_length(char *dest, size_t size,
size_t *packet_size_length);
int ecryptfs_init_ecryptfs_miscdev(void);
void ecryptfs_destroy_ecryptfs_miscdev(void);
int ecryptfs_send_miscdev(char *data, size_t data_size,
struct ecryptfs_msg_ctx *msg_ctx, u8 msg_type,
u16 msg_flags, struct ecryptfs_daemon *daemon);
void ecryptfs_msg_ctx_alloc_to_free(struct ecryptfs_msg_ctx *msg_ctx);
int
ecryptfs_spawn_daemon(struct ecryptfs_daemon **daemon, uid_t euid,
struct user_namespace *user_ns, struct pid *pid);
int ecryptfs_init_kthread(void);
void ecryptfs_destroy_kthread(void);
int ecryptfs_privileged_open(struct file **lower_file,
struct dentry *lower_dentry,
struct vfsmount *lower_mnt,
const struct cred *cred);
int ecryptfs_get_lower_file(struct dentry *dentry, struct inode *inode);
void ecryptfs_put_lower_file(struct inode *inode);
int
ecryptfs_write_tag_70_packet(char *dest, size_t *remaining_bytes,
size_t *packet_size,
struct ecryptfs_mount_crypt_stat *mount_crypt_stat,
char *filename, size_t filename_size);
int
ecryptfs_parse_tag_70_packet(char **filename, size_t *filename_size,
size_t *packet_size,
struct ecryptfs_mount_crypt_stat *mount_crypt_stat,
char *data, size_t max_packet_size);
int ecryptfs_derive_iv(char *iv, struct ecryptfs_crypt_stat *crypt_stat,
loff_t offset);
