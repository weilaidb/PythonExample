#define DM_MSG_PREFIX "crypt"
#define MESG_STR(x) x, sizeof(x)
struct convert_context ;
struct dm_crypt_io ;
struct dm_crypt_request ;
struct crypt_config;
struct crypt_iv_operations ;
struct iv_essiv_private ;
struct iv_benbi_private ;
#define LMK_SEED_SIZE 64
struct iv_lmk_private ;
enum flags ;
struct crypt_cpu ;
struct crypt_config ;
#define MIN_IOS        16
#define MIN_POOL_PAGES 32
#define MIN_BIO_PAGES  8
static struct kmem_cache *_crypt_io_pool;
static void clone_init(struct dm_crypt_io *, struct bio *);
static void kcryptd_queue_crypt(struct dm_crypt_io *io);
static u8 *iv_of_dmreq(struct crypt_config *cc, struct dm_crypt_request *dmreq);
static struct crypt_cpu *this_crypt_config(struct crypt_config *cc)
static struct crypto_ablkcipher *any_tfm(struct crypt_config *cc)
static int crypt_iv_plain_gen(struct crypt_config *cc, u8 *iv,
struct dm_crypt_request *dmreq)
static int crypt_iv_plain64_gen(struct crypt_config *cc, u8 *iv,
struct dm_crypt_request *dmreq)
static int crypt_iv_essiv_init(struct crypt_config *cc)
static int crypt_iv_essiv_wipe(struct crypt_config *cc)
static struct crypto_cipher *setup_essiv_cpu(struct crypt_config *cc,
struct dm_target *ti,
u8 *salt, unsigned saltsize)
static void crypt_iv_essiv_dtr(struct crypt_config *cc)
static int crypt_iv_essiv_ctr(struct crypt_config *cc, struct dm_target *ti,
const char *opts)
static int crypt_iv_essiv_gen(struct crypt_config *cc, u8 *iv,
struct dm_crypt_request *dmreq)
static int crypt_iv_benbi_ctr(struct crypt_config *cc, struct dm_target *ti,
const char *opts)
static void crypt_iv_benbi_dtr(struct crypt_config *cc)
static int crypt_iv_benbi_gen(struct crypt_config *cc, u8 *iv,
struct dm_crypt_request *dmreq)
static int crypt_iv_null_gen(struct crypt_config *cc, u8 *iv,
struct dm_crypt_request *dmreq)
static void crypt_iv_lmk_dtr(struct crypt_config *cc)
static int crypt_iv_lmk_ctr(struct crypt_config *cc, struct dm_target *ti,
const char *opts)
static int crypt_iv_lmk_init(struct crypt_config *cc)
static int crypt_iv_lmk_wipe(struct crypt_config *cc)
static int crypt_iv_lmk_one(struct crypt_config *cc, u8 *iv,
struct dm_crypt_request *dmreq,
u8 *data)
static int crypt_iv_lmk_gen(struct crypt_config *cc, u8 *iv,
struct dm_crypt_request *dmreq)
static int crypt_iv_lmk_post(struct crypt_config *cc, u8 *iv,
struct dm_crypt_request *dmreq)
static struct crypt_iv_operations crypt_iv_plain_ops = ;
static struct crypt_iv_operations crypt_iv_plain64_ops = ;
static struct crypt_iv_operations crypt_iv_essiv_ops = ;
static struct crypt_iv_operations crypt_iv_benbi_ops = ;
static struct crypt_iv_operations crypt_iv_null_ops = ;
static struct crypt_iv_operations crypt_iv_lmk_ops = ;
static void crypt_convert_init(struct crypt_config *cc,
struct convert_context *ctx,
struct bio *bio_out, struct bio *bio_in,
sector_t sector)
static struct dm_crypt_request *dmreq_of_req(struct crypt_config *cc,
struct ablkcipher_request *req)
static struct ablkcipher_request *req_of_dmreq(struct crypt_config *cc,
struct dm_crypt_request *dmreq)
static u8 *iv_of_dmreq(struct crypt_config *cc,
struct dm_crypt_request *dmreq)
static int crypt_convert_block(struct crypt_config *cc,
struct convert_context *ctx,
struct ablkcipher_request *req)
static void kcryptd_async_done(struct crypto_async_request *async_req,
int error);
static void crypt_alloc_req(struct crypt_config *cc,
struct convert_context *ctx)
static int crypt_convert(struct crypt_config *cc,
struct convert_context *ctx)
static void dm_crypt_bio_destructor(struct bio *bio)
static struct bio *crypt_alloc_buffer(struct dm_crypt_io *io, unsigned size,
unsigned *out_of_pages)
static void crypt_free_buffer_pages(struct crypt_config *cc, struct bio *clone)
static struct dm_crypt_io *crypt_io_alloc(struct dm_target *ti,
struct bio *bio, sector_t sector)
static void crypt_inc_pending(struct dm_crypt_io *io)
static void crypt_dec_pending(struct dm_crypt_io *io)
static void crypt_endio(struct bio *clone, int error)
static void clone_init(struct dm_crypt_io *io, struct bio *clone)
static int kcryptd_io_read(struct dm_crypt_io *io, gfp_t gfp)
static void kcryptd_io_write(struct dm_crypt_io *io)
static void kcryptd_io(struct work_struct *work)
static void kcryptd_queue_io(struct dm_crypt_io *io)
static void kcryptd_crypt_write_io_submit(struct dm_crypt_io *io,
int error, int async)
static void kcryptd_crypt_write_convert(struct dm_crypt_io *io)
static void kcryptd_crypt_read_done(struct dm_crypt_io *io, int error)
static void kcryptd_crypt_read_convert(struct dm_crypt_io *io)
static void kcryptd_async_done(struct crypto_async_request *async_req,
int error)
static void kcryptd_crypt(struct work_struct *work)
static void kcryptd_queue_crypt(struct dm_crypt_io *io)
static int crypt_decode_key(u8 *key, char *hex, unsigned int size)
static void crypt_encode_key(char *hex, u8 *key, unsigned int size)
static void crypt_free_tfms(struct crypt_config *cc, int cpu)
static int crypt_alloc_tfms(struct crypt_config *cc, int cpu, char *ciphermode)
static int crypt_setkey_allcpus(struct crypt_config *cc)
static int crypt_set_key(struct crypt_config *cc, char *key)
static int crypt_wipe_key(struct crypt_config *cc)
static void crypt_dtr(struct dm_target *ti)
static int crypt_ctr_cipher(struct dm_target *ti,
char *cipher_in, char *key)
static int crypt_ctr(struct dm_target *ti, unsigned int argc, char **argv)
static int crypt_map(struct dm_target *ti, struct bio *bio,
union map_info *map_context)
static int crypt_status(struct dm_target *ti, status_type_t type,
char *result, unsigned int maxlen)
static void crypt_postsuspend(struct dm_target *ti)
static int crypt_preresume(struct dm_target *ti)
static void crypt_resume(struct dm_target *ti)
static int crypt_message(struct dm_target *ti, unsigned argc, char **argv)
static int crypt_merge(struct dm_target *ti, struct bvec_merge_data *bvm,
struct bio_vec *biovec, int max_size)
static int crypt_iterate_devices(struct dm_target *ti,
iterate_devices_callout_fn fn, void *data)
static struct target_type crypt_target = ;
static int __init dm_crypt_init(void)
static void __exit dm_crypt_exit(void)
module_init(dm_crypt_init);
module_exit(dm_crypt_exit);
MODULE_AUTHOR("Christophe Saout <christophe@saout.de>");
MODULE_DESCRIPTION(DM_NAME " target for transparent encryption / decryption");
MODULE_LICENSE("GPL");
