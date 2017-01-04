static void crypto_remove_final(struct list_head *list);
static LIST_HEAD(crypto_template_list);
void crypto_larval_error(const char *name, u32 type, u32 mask)
EXPORT_SYMBOL_GPL(crypto_larval_error);
static inline int crypto_set_driver_name(struct crypto_alg *alg)
static int crypto_check_alg(struct crypto_alg *alg)
static void crypto_destroy_instance(struct crypto_alg *alg)
static struct list_head *crypto_more_spawns(struct crypto_alg *alg,
struct list_head *stack,
struct list_head *top,
struct list_head *secondary_spawns)
static void crypto_remove_spawn(struct crypto_spawn *spawn,
struct list_head *list)
static void crypto_remove_spawns(struct crypto_alg *alg,
struct list_head *list,
struct crypto_alg *nalg)
static struct crypto_larval *__crypto_register_alg(struct crypto_alg *alg)
void crypto_alg_tested(const char *name, int err)
EXPORT_SYMBOL_GPL(crypto_alg_tested);
static void crypto_remove_final(struct list_head *list)
static void crypto_wait_for_test(struct crypto_larval *larval)
int crypto_register_alg(struct crypto_alg *alg)
EXPORT_SYMBOL_GPL(crypto_register_alg);
static int crypto_remove_alg(struct crypto_alg *alg, struct list_head *list)
int crypto_unregister_alg(struct crypto_alg *alg)
EXPORT_SYMBOL_GPL(crypto_unregister_alg);
int crypto_register_template(struct crypto_template *tmpl)
EXPORT_SYMBOL_GPL(crypto_register_template);
void crypto_unregister_template(struct crypto_template *tmpl)
EXPORT_SYMBOL_GPL(crypto_unregister_template);
static struct crypto_template *__crypto_lookup_template(const char *name)
struct crypto_template *crypto_lookup_template(const char *name)
EXPORT_SYMBOL_GPL(crypto_lookup_template);
int crypto_register_instance(struct crypto_template *tmpl,
struct crypto_instance *inst)
EXPORT_SYMBOL_GPL(crypto_register_instance);
int crypto_init_spawn(struct crypto_spawn *spawn, struct crypto_alg *alg,
struct crypto_instance *inst, u32 mask)
EXPORT_SYMBOL_GPL(crypto_init_spawn);
int crypto_init_spawn2(struct crypto_spawn *spawn, struct crypto_alg *alg,
struct crypto_instance *inst,
const struct crypto_type *frontend)
EXPORT_SYMBOL_GPL(crypto_init_spawn2);
void crypto_drop_spawn(struct crypto_spawn *spawn)
EXPORT_SYMBOL_GPL(crypto_drop_spawn);
static struct crypto_alg *crypto_spawn_alg(struct crypto_spawn *spawn)
struct crypto_tfm *crypto_spawn_tfm(struct crypto_spawn *spawn, u32 type,
u32 mask)
EXPORT_SYMBOL_GPL(crypto_spawn_tfm);
void *crypto_spawn_tfm2(struct crypto_spawn *spawn)
EXPORT_SYMBOL_GPL(crypto_spawn_tfm2);
int crypto_register_notifier(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(crypto_register_notifier);
int crypto_unregister_notifier(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(crypto_unregister_notifier);
struct crypto_attr_type *crypto_get_attr_type(struct rtattr **tb)
EXPORT_SYMBOL_GPL(crypto_get_attr_type);
int crypto_check_attr_type(struct rtattr **tb, u32 type)
EXPORT_SYMBOL_GPL(crypto_check_attr_type);
const char *crypto_attr_alg_name(struct rtattr *rta)
EXPORT_SYMBOL_GPL(crypto_attr_alg_name);
struct crypto_alg *crypto_attr_alg2(struct rtattr *rta,
const struct crypto_type *frontend,
u32 type, u32 mask)
EXPORT_SYMBOL_GPL(crypto_attr_alg2);
int crypto_attr_u32(struct rtattr *rta, u32 *num)
EXPORT_SYMBOL_GPL(crypto_attr_u32);
void *crypto_alloc_instance2(const char *name, struct crypto_alg *alg,
unsigned int head)
EXPORT_SYMBOL_GPL(crypto_alloc_instance2);
struct crypto_instance *crypto_alloc_instance(const char *name,
struct crypto_alg *alg)
EXPORT_SYMBOL_GPL(crypto_alloc_instance);
void crypto_init_queue(struct crypto_queue *queue, unsigned int max_qlen)
EXPORT_SYMBOL_GPL(crypto_init_queue);
int crypto_enqueue_request(struct crypto_queue *queue,
struct crypto_async_request *request)
EXPORT_SYMBOL_GPL(crypto_enqueue_request);
void *__crypto_dequeue_request(struct crypto_queue *queue, unsigned int offset)
EXPORT_SYMBOL_GPL(__crypto_dequeue_request);
struct crypto_async_request *crypto_dequeue_request(struct crypto_queue *queue)
EXPORT_SYMBOL_GPL(crypto_dequeue_request);
int crypto_tfm_in_queue(struct crypto_queue *queue, struct crypto_tfm *tfm)
EXPORT_SYMBOL_GPL(crypto_tfm_in_queue);
static inline void crypto_inc_byte(u8 *a, unsigned int size)
void crypto_inc(u8 *a, unsigned int size)
EXPORT_SYMBOL_GPL(crypto_inc);
static inline void crypto_xor_byte(u8 *a, const u8 *b, unsigned int size)
void crypto_xor(u8 *dst, const u8 *src, unsigned int size)
EXPORT_SYMBOL_GPL(crypto_xor);
static int __init crypto_algapi_init(void)
static void __exit crypto_algapi_exit(void)
module_init(crypto_algapi_init);
module_exit(crypto_algapi_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Cryptographic algorithms API");
