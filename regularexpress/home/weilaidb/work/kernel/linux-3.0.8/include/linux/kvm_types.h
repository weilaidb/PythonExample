#define __KVM_TYPES_H__
typedef unsigned long  gva_t;
typedef u64            gpa_t;
typedef u64            gfn_t;
typedef unsigned long  hva_t;
typedef u64            hpa_t;
typedef u64            hfn_t;
typedef hfn_t pfn_t;
union kvm_ioapic_redirect_entry ;
struct kvm_lapic_irq ;
struct gfn_to_hva_cache ;
