enum ;
struct chainiv_ctx ;
struct async_chainiv_ctx ;
static int chainiv_givencrypt(struct skcipher_givcrypt_request *req)
static int chainiv_givencrypt_first(struct skcipher_givcrypt_request *req)
static int chainiv_init_common(struct crypto_tfm *tfm)
static int chainiv_init(struct crypto_tfm *tfm)
static int async_chainiv_schedule_work(struct async_chainiv_ctx *ctx)
static int async_chainiv_postpone_request(struct skcipher_givcrypt_request *req)
static int async_chainiv_givencrypt_tail(struct skcipher_givcrypt_request *req)
static int async_chainiv_givencrypt(struct skcipher_givcrypt_request *req)
static int async_chainiv_givencrypt_first(struct skcipher_givcrypt_request *req)
static void async_chainiv_do_postponed(struct work_struct *work)
static int async_chainiv_init(struct crypto_tfm *tfm)
static void async_chainiv_exit(struct crypto_tfm *tfm)
static struct crypto_template chainiv_tmpl;
static struct crypto_instance *chainiv_alloc(struct rtattr **tb)
static void chainiv_free(struct crypto_instance *inst)
static struct crypto_template chainiv_tmpl = ;
static int __init chainiv_module_init(void)
static void chainiv_module_exit(void)
module_init(chainiv_module_init);
module_exit(chainiv_module_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Chain IV Generator");
