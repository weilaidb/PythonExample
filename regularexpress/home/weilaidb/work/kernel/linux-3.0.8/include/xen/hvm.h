#define XEN_HVM_H__
static inline int hvm_get_parameter(int idx, uint64_t *value)
#define HVM_CALLBACK_VIA_TYPE_VECTOR 0x2
#define HVM_CALLBACK_VIA_TYPE_SHIFT 56
#define HVM_CALLBACK_VECTOR(x) (((uint64_t)HVM_CALLBACK_VIA_TYPE_VECTOR)<<\
HVM_CALLBACK_VIA_TYPE_SHIFT | (x))
