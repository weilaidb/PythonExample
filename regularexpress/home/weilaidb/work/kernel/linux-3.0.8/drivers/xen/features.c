u8 xen_features[XENFEAT_NR_SUBMAPS * 32] __read_mostly;
EXPORT_SYMBOL_GPL(xen_features);
void xen_setup_features(void)
