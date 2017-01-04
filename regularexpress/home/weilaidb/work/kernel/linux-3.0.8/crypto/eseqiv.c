struct eseqiv_request_ctx ;
struct eseqiv_ctx ;
static void eseqiv_complete2(struct skcipher_givcrypt_request *req)
static void eseqiv_complete(struct crypto_async_request *base, int err)
static int eseqiv_givencrypt(struct skcipher_givcrypt_request *req)
static int eseqiv_givencrypt_first(struct skcipher_givcrypt_request *req)
static int eseqiv_init(struct crypto_tfm *tfm)
static struct crypto_template eseqiv_tmpl;
static struct crypto_instance *eseqiv_alloc(struct rtattr **tb)
static void eseqiv_free(struct crypto_instance *inst)
static struct crypto_template eseqiv_tmpl = ;
static int __init eseqiv_module_init(void)
static void __exit eseqiv_module_exit(void)
module_init(eseqiv_module_init);
module_exit(eseqiv_module_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Encrypted Sequence Number IV Generator");
