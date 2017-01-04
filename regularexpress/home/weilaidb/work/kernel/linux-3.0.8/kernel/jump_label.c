static DEFINE_MUTEX(jump_label_mutex);
void jump_label_lock(void)
void jump_label_unlock(void)
bool jump_label_enabled(struct jump_label_key *key)
static int jump_label_cmp(const void *a, const void *b)
static void
jump_label_sort_entries(struct jump_entry *start, struct jump_entry *stop)
static void jump_label_update(struct jump_label_key *key, int enable);
void jump_label_inc(struct jump_label_key *key)
void jump_label_dec(struct jump_label_key *key)
static int addr_conflict(struct jump_entry *entry, void *start, void *end)
static int __jump_label_text_reserved(struct jump_entry *iter_start,
struct jump_entry *iter_stop, void *start, void *end)
static void __jump_label_update(struct jump_label_key *key,
struct jump_entry *entry,
struct jump_entry *stop, int enable)
void __weak arch_jump_label_text_poke_early(jump_label_t addr)
static __init int jump_label_init(void)
early_initcall(jump_label_init);
struct jump_label_mod ;
static int __jump_label_mod_text_reserved(void *start, void *end)
static void __jump_label_mod_update(struct jump_label_key *key, int enable)
void jump_label_apply_nops(struct module *mod)
static int jump_label_add_module(struct module *mod)
static void jump_label_del_module(struct module *mod)
static void jump_label_invalidate_module_init(struct module *mod)
static int
jump_label_module_notify(struct notifier_block *self, unsigned long val,
void *data)
struct notifier_block jump_label_module_nb = ;
static __init int jump_label_init_module(void)
early_initcall(jump_label_init_module);
int jump_label_text_reserved(void *start, void *end)
static void jump_label_update(struct jump_label_key *key, int enable)
