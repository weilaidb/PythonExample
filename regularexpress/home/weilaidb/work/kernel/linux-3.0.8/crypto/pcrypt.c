struct padata_pcrypt ;
static struct padata_pcrypt pencrypt;
static struct padata_pcrypt pdecrypt;
static struct kset           *pcrypt_kset;
struct pcrypt_instance_ctx ;
struct pcrypt_aead_ctx ;
static int pcrypt_do_parallel(struct padata_priv *padata, unsigned int *cb_cpu,
struct padata_pcrypt *pcrypt)
static int pcrypt_aead_setkey(struct crypto_aead *parent,
const u8 *key, unsigned int keylen)
static int pcrypt_aead_setauthsize(struct crypto_aead *parent,
unsigned int authsize)
static void pcrypt_aead_serial(struct padata_priv *padata)
static void pcrypt_aead_giv_serial(struct padata_priv *padata)
static void pcrypt_aead_done(struct crypto_async_request *areq, int err)
static void pcrypt_aead_enc(struct padata_priv *padata)
static int pcrypt_aead_encrypt(struct aead_request *req)
static void pcrypt_aead_dec(struct padata_priv *padata)
static int pcrypt_aead_decrypt(struct aead_request *req)
static void pcrypt_aead_givenc(struct padata_priv *padata)
static int pcrypt_aead_givencrypt(struct aead_givcrypt_request *req)
static int pcrypt_aead_init_tfm(struct crypto_tfm *tfm)
static void pcrypt_aead_exit_tfm(struct crypto_tfm *tfm)
static struct crypto_instance *pcrypt_alloc_instance(struct crypto_alg *alg)
static struct crypto_instance *pcrypt_alloc_aead(struct rtattr **tb,
u32 type, u32 mask)
static struct crypto_instance *pcrypt_alloc(struct rtattr **tb)
static void pcrypt_free(struct crypto_instance *inst)
static int pcrypt_cpumask_change_notify(struct notifier_block *self,
unsigned long val, void *data)
static int pcrypt_sysfs_add(struct padata_instance *pinst, const char *name)
static int pcrypt_init_padata(struct padata_pcrypt *pcrypt,
const char *name)
static void pcrypt_fini_padata(struct padata_pcrypt *pcrypt)
static struct crypto_template pcrypt_tmpl = ;
static int __init pcrypt_init(void)
static void __exit pcrypt_exit(void)
module_init(pcrypt_init);
module_exit(pcrypt_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Steffen Klassert <steffen.klassert@secunet.com>");
MODULE_DESCRIPTION("Parallel crypto wrapper");
