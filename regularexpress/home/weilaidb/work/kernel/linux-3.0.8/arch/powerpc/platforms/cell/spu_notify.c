#undef DEBUG
static BLOCKING_NOTIFIER_HEAD(spu_switch_notifier);
void spu_switch_notify(struct spu *spu, struct spu_context *ctx)
EXPORT_SYMBOL_GPL(spu_switch_notify);
int spu_switch_event_register(struct notifier_block *n)
EXPORT_SYMBOL_GPL(spu_switch_event_register);
int spu_switch_event_unregister(struct notifier_block *n)
EXPORT_SYMBOL_GPL(spu_switch_event_unregister);
void spu_set_profile_private_kref(struct spu_context *ctx,
struct kref *prof_info_kref,
void (* prof_info_release) (struct kref *kref))
EXPORT_SYMBOL_GPL(spu_set_profile_private_kref);
void *spu_get_profile_private_kref(struct spu_context *ctx)
EXPORT_SYMBOL_GPL(spu_get_profile_private_kref);
