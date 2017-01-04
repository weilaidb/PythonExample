static struct crypto_hash *pohmelfs_init_hash(struct pohmelfs_sb *psb)
static struct crypto_ablkcipher *pohmelfs_init_cipher(struct pohmelfs_sb *psb)
int pohmelfs_crypto_engine_init(struct pohmelfs_crypto_engine *e, struct pohmelfs_sb *psb)
void pohmelfs_crypto_engine_exit(struct pohmelfs_crypto_engine *e)
static void pohmelfs_crypto_complete(struct crypto_async_request *req, int err)
static int pohmelfs_crypto_process(struct ablkcipher_request *req,
struct scatterlist *sg_dst, struct scatterlist *sg_src,
void *iv, int enc, unsigned long timeout)
int pohmelfs_crypto_process_input_data(struct pohmelfs_crypto_engine *e, u64 cmd_iv,
void *data, struct page *page, unsigned int size)
static int pohmelfs_trans_iter(struct netfs_trans *t, struct pohmelfs_crypto_engine *e,
int (*iterator) (struct pohmelfs_crypto_engine *e,
struct scatterlist *dst,
struct scatterlist *src))
static int pohmelfs_encrypt_iterator(struct pohmelfs_crypto_engine *e,
struct scatterlist *sg_dst, struct scatterlist *sg_src)
static int pohmelfs_encrypt(struct pohmelfs_crypto_thread *tc)
static int pohmelfs_hash_iterator(struct pohmelfs_crypto_engine *e,
struct scatterlist *sg_dst, struct scatterlist *sg_src)
static int pohmelfs_hash(struct pohmelfs_crypto_thread *tc)
static void pohmelfs_crypto_pages_free(struct pohmelfs_crypto_engine *e)
static int pohmelfs_crypto_pages_alloc(struct pohmelfs_crypto_engine *e, struct pohmelfs_sb *psb)
static void pohmelfs_sys_crypto_exit_one(struct pohmelfs_crypto_thread *t)
static int pohmelfs_crypto_finish(struct netfs_trans *t, struct pohmelfs_sb *psb, int err)
void pohmelfs_crypto_thread_make_ready(struct pohmelfs_crypto_thread *th)
static int pohmelfs_crypto_thread_trans(struct pohmelfs_crypto_thread *t)
static int pohmelfs_crypto_thread_page(struct pohmelfs_crypto_thread *t)
static int pohmelfs_crypto_thread_func(void *data)
static void pohmelfs_crypto_flush(struct pohmelfs_sb *psb, struct list_head *head)
static void pohmelfs_sys_crypto_exit(struct pohmelfs_sb *psb)
static int pohmelfs_sys_crypto_init(struct pohmelfs_sb *psb)
void pohmelfs_crypto_exit(struct pohmelfs_sb *psb)
static int pohmelfs_crypt_init_complete(struct page **pages, unsigned int page_num,
void *private, int err)
static int pohmelfs_crypto_init_handshake(struct pohmelfs_sb *psb)
int pohmelfs_crypto_init(struct pohmelfs_sb *psb)
static int pohmelfs_crypto_thread_get(struct pohmelfs_sb *psb,
int (*action)(struct pohmelfs_crypto_thread *t, void *data), void *data)
static int pohmelfs_trans_crypt_action(struct pohmelfs_crypto_thread *t, void *data)
int pohmelfs_trans_crypt(struct netfs_trans *trans, struct pohmelfs_sb *psb)
struct pohmelfs_crypto_input_action_data ;
static int pohmelfs_crypt_input_page_action(struct pohmelfs_crypto_thread *t, void *data)
int pohmelfs_crypto_process_input_page(struct pohmelfs_crypto_engine *e,
struct page *page, unsigned int size, u64 iv)
