static unsigned int isc_refs[MAX_ISC + 1];
static DEFINE_SPINLOCK(isc_ref_lock);
void isc_register(unsigned int isc)
EXPORT_SYMBOL_GPL(isc_register);
void isc_unregister(unsigned int isc)
EXPORT_SYMBOL_GPL(isc_unregister);
