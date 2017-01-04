static int
ecryptfs_decrypt_page_offset(struct ecryptfs_crypt_stat *crypt_stat,
struct page *dst_page, int dst_offset,
struct page *src_page, int src_offset, int size,
unsigned char *iv);
static int
ecryptfs_encrypt_page_offset(struct ecryptfs_crypt_stat *crypt_stat,
struct page *dst_page, int dst_offset,
struct page *src_page, int src_offset, int size,
unsigned char *iv);
void ecryptfs_to_hex(char *dst, char *src, size_t src_size)
void ecryptfs_from_hex(char *dst, char *src, int dst_size)
static int ecryptfs_calculate_md5(char *dst,
struct ecryptfs_crypt_stat *crypt_stat,
char *src, int len)
static int ecryptfs_crypto_api_algify_cipher_name(char **algified_name,
char *cipher_name,
char *chaining_modifier)
int ecryptfs_derive_iv(char *iv, struct ecryptfs_crypt_stat *crypt_stat,
loff_t offset)
void
ecryptfs_init_crypt_stat(struct ecryptfs_crypt_stat *crypt_stat)
void ecryptfs_destroy_crypt_stat(struct ecryptfs_crypt_stat *crypt_stat)
void ecryptfs_destroy_mount_crypt_stat(
struct ecryptfs_mount_crypt_stat *mount_crypt_stat)
int virt_to_scatterlist(const void *addr, int size, struct scatterlist *sg,
int sg_size)
static int encrypt_scatterlist(struct ecryptfs_crypt_stat *crypt_stat,
struct scatterlist *dest_sg,
struct scatterlist *src_sg, int size,
unsigned char *iv)
static void ecryptfs_lower_offset_for_extent(loff_t *offset, loff_t extent_num,
struct ecryptfs_crypt_stat *crypt_stat)
static int ecryptfs_encrypt_extent(struct page *enc_extent_page,
struct ecryptfs_crypt_stat *crypt_stat,
struct page *page,
unsigned long extent_offset)
int ecryptfs_encrypt_page(struct page *page)
static int ecryptfs_decrypt_extent(struct page *page,
struct ecryptfs_crypt_stat *crypt_stat,
struct page *enc_extent_page,
unsigned long extent_offset)
int ecryptfs_decrypt_page(struct page *page)
static int decrypt_scatterlist(struct ecryptfs_crypt_stat *crypt_stat,
struct scatterlist *dest_sg,
struct scatterlist *src_sg, int size,
unsigned char *iv)
static int
ecryptfs_encrypt_page_offset(struct ecryptfs_crypt_stat *crypt_stat,
struct page *dst_page, int dst_offset,
struct page *src_page, int src_offset, int size,
unsigned char *iv)
static int
ecryptfs_decrypt_page_offset(struct ecryptfs_crypt_stat *crypt_stat,
struct page *dst_page, int dst_offset,
struct page *src_page, int src_offset, int size,
unsigned char *iv)
#define ECRYPTFS_MAX_SCATTERLIST_LEN 4
int ecryptfs_init_crypt_ctx(struct ecryptfs_crypt_stat *crypt_stat)
static void set_extent_mask_and_shift(struct ecryptfs_crypt_stat *crypt_stat)
void ecryptfs_set_default_sizes(struct ecryptfs_crypt_stat *crypt_stat)
int ecryptfs_compute_root_iv(struct ecryptfs_crypt_stat *crypt_stat)
static void ecryptfs_generate_new_key(struct ecryptfs_crypt_stat *crypt_stat)
static void ecryptfs_copy_mount_wide_flags_to_inode_flags(
struct ecryptfs_crypt_stat *crypt_stat,
struct ecryptfs_mount_crypt_stat *mount_crypt_stat)
static int ecryptfs_copy_mount_wide_sigs_to_inode_sigs(
struct ecryptfs_crypt_stat *crypt_stat,
struct ecryptfs_mount_crypt_stat *mount_crypt_stat)
static void ecryptfs_set_default_crypt_stat_vals(
struct ecryptfs_crypt_stat *crypt_stat,
struct ecryptfs_mount_crypt_stat *mount_crypt_stat)
int ecryptfs_new_file_context(struct dentry *ecryptfs_dentry)
static int ecryptfs_validate_marker(char *data)
struct ecryptfs_flag_map_elem ;
static struct ecryptfs_flag_map_elem ecryptfs_flag_map[] = ;
static int ecryptfs_process_flags(struct ecryptfs_crypt_stat *crypt_stat,
char *page_virt, int *bytes_read)
static void write_ecryptfs_marker(char *page_virt, size_t *written)
void ecryptfs_write_crypt_stat_flags(char *page_virt,
struct ecryptfs_crypt_stat *crypt_stat,
size_t *written)
struct ecryptfs_cipher_code_str_map_elem ;
static struct ecryptfs_cipher_code_str_map_elem
ecryptfs_cipher_code_str_map[] = ;
u8 ecryptfs_code_for_cipher_string(char *cipher_name, size_t key_bytes)
int ecryptfs_cipher_code_to_string(char *str, u8 cipher_code)
int ecryptfs_read_and_validate_header_region(struct inode *inode)
void
ecryptfs_write_header_metadata(char *virt,
struct ecryptfs_crypt_stat *crypt_stat,
size_t *written)
struct kmem_cache *ecryptfs_header_cache;
static int ecryptfs_write_headers_virt(char *page_virt, size_t max,
size_t *size,
struct ecryptfs_crypt_stat *crypt_stat,
struct dentry *ecryptfs_dentry)
static int
ecryptfs_write_metadata_to_contents(struct dentry *ecryptfs_dentry,
char *virt, size_t virt_len)
static int
ecryptfs_write_metadata_to_xattr(struct dentry *ecryptfs_dentry,
char *page_virt, size_t size)
static unsigned long ecryptfs_get_zeroed_pages(gfp_t gfp_mask,
unsigned int order)
int ecryptfs_write_metadata(struct dentry *ecryptfs_dentry)
#define ECRYPTFS_DONT_VALIDATE_HEADER_SIZE 0
#define ECRYPTFS_VALIDATE_HEADER_SIZE 1
static int parse_header_metadata(struct ecryptfs_crypt_stat *crypt_stat,
char *virt, int *bytes_read,
int validate_header_size)
static void set_default_header_data(struct ecryptfs_crypt_stat *crypt_stat)
void ecryptfs_i_size_init(const char *page_virt, struct inode *inode)
static int ecryptfs_read_headers_virt(char *page_virt,
struct ecryptfs_crypt_stat *crypt_stat,
struct dentry *ecryptfs_dentry,
int validate_header_size)
int ecryptfs_read_xattr_region(char *page_virt, struct inode *ecryptfs_inode)
int ecryptfs_read_and_validate_xattr_region(struct dentry *dentry,
struct inode *inode)
int ecryptfs_read_metadata(struct dentry *ecryptfs_dentry)
static int
ecryptfs_encrypt_filename(struct ecryptfs_filename *filename,
struct ecryptfs_crypt_stat *crypt_stat,
struct ecryptfs_mount_crypt_stat *mount_crypt_stat)
static int ecryptfs_copy_filename(char **copied_name, size_t *copied_name_size,
const char *name, size_t name_size)
static int
ecryptfs_process_key_cipher(struct crypto_blkcipher **key_tfm,
char *cipher_name, size_t *key_size)
struct kmem_cache *ecryptfs_key_tfm_cache;
static struct list_head key_tfm_list;
struct mutex key_tfm_list_mutex;
int __init ecryptfs_init_crypto(void)
int ecryptfs_destroy_crypto(void)
int
ecryptfs_add_new_key_tfm(struct ecryptfs_key_tfm **key_tfm, char *cipher_name,
size_t key_size)
int ecryptfs_tfm_exists(char *cipher_name, struct ecryptfs_key_tfm **key_tfm)
int ecryptfs_get_tfm_and_mutex_for_cipher_name(struct crypto_blkcipher **tfm,
struct mutex **tfm_mutex,
char *cipher_name)
static unsigned char *portable_filename_chars = ("-.0123456789ABCD"
"EFGHIJKLMNOPQRST"
"UVWXYZabcdefghij"
"klmnopqrstuvwxyz");
static const unsigned char filename_rev_map[] = ;
void ecryptfs_encode_for_filename(unsigned char *dst, size_t *dst_size,
unsigned char *src, size_t src_size)
static void
ecryptfs_decode_from_filename(unsigned char *dst, size_t *dst_size,
const unsigned char *src, size_t src_size)
int ecryptfs_encrypt_and_encode_filename(
char **encoded_name,
size_t *encoded_name_size,
struct ecryptfs_crypt_stat *crypt_stat,
struct ecryptfs_mount_crypt_stat *mount_crypt_stat,
const char *name, size_t name_size)
int ecryptfs_decode_and_decrypt_filename(char **plaintext_name,
size_t *plaintext_name_size,
struct dentry *ecryptfs_dir_dentry,
const char *name, size_t name_size)
