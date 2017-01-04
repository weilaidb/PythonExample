static DEFINE_SPINLOCK(emac_dbg_lock);
static void emac_desc_dump(struct emac_instance *p)
static void emac_mac_dump(struct emac_instance *dev)
static void emac_mal_dump(struct mal_instance *mal)
static struct emac_instance *__emacs[4];
static struct mal_instance *__mals[1];
void emac_dbg_register(struct emac_instance *dev)
void emac_dbg_unregister(struct emac_instance *dev)
void mal_dbg_register(struct mal_instance *mal)
void mal_dbg_unregister(struct mal_instance *mal)
void emac_dbg_dump_all(void)
#if defined(CONFIG_MAGIC_SYSRQ)
static void emac_sysrq_handler(int key)
static struct sysrq_key_op emac_sysrq_op = ;
int __init emac_init_debug(void)
void __exit emac_fini_debug(void)
int __init emac_init_debug(void)
void __exit emac_fini_debug(void)
