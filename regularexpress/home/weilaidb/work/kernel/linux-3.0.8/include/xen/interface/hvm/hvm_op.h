#define __XEN_PUBLIC_HVM_HVM_OP_H__
#define HVMOP_set_param           0
#define HVMOP_get_param           1
struct xen_hvm_param ;
DEFINE_GUEST_HANDLE_STRUCT(xen_hvm_param);
#define HVMOP_pagetable_dying       9
struct xen_hvm_pagetable_dying ;
typedef struct xen_hvm_pagetable_dying xen_hvm_pagetable_dying_t;
DEFINE_GUEST_HANDLE_STRUCT(xen_hvm_pagetable_dying_t);
