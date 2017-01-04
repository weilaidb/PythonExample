#define __XEN_FEATURES_H__
void xen_setup_features(void);
extern u8 xen_features[XENFEAT_NR_SUBMAPS * 32];
static inline int xen_feature(int flag)
