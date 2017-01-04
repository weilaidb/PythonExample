#define __KVM_VCPU_H__
typedef unsigned long IA64_INST;
typedef union U_IA64_BUNDLE  IA64_BUNDLE;
typedef union U_INST64_A5  INST64_A5;
typedef union U_INST64_B4  INST64_B4;
typedef union U_INST64_B8  INST64_B8;
typedef union U_INST64_B9  INST64_B9;
typedef union U_INST64_I19  INST64_I19;
typedef union U_INST64_I26  INST64_I26;
typedef union U_INST64_I27  INST64_I27;
typedef union U_INST64_I28  INST64_I28;
typedef union U_INST64_M28  INST64_M28;
typedef union U_INST64_M29  INST64_M29;
typedef union U_INST64_M30  INST64_M30;
typedef union U_INST64_M31  INST64_M31;
typedef union U_INST64_M32  INST64_M32;
typedef union U_INST64_M33  INST64_M33;
typedef union U_INST64_M35  INST64_M35;
typedef union U_INST64_M36  INST64_M36;
typedef union U_INST64_M37  INST64_M37;
typedef union U_INST64_M41  INST64_M41;
typedef union U_INST64_M42  INST64_M42;
typedef union U_INST64_M43  INST64_M43;
typedef union U_INST64_M44  INST64_M44;
typedef union U_INST64_M45  INST64_M45;
typedef union U_INST64_M46  INST64_M46;
typedef union U_INST64_M47  INST64_M47;
typedef union U_INST64_M1 INST64_M1;
typedef union U_INST64_M2 INST64_M2;
typedef union U_INST64_M3 INST64_M3;
typedef union U_INST64_M4  INST64_M4;
typedef union U_INST64_M5  INST64_M5;
typedef union U_INST64_M6  INST64_M6;
typedef union U_INST64_M9  INST64_M9;
typedef union U_INST64_M10  INST64_M10;
typedef union U_INST64_M12  INST64_M12;
typedef union U_INST64_M15  INST64_M15;
typedef union U_INST64  INST64;
#define MASK_41 ((unsigned long)0x1ffffffffff)
#define VA_MATTR_WB         0x0
#define VA_MATTR_UC         0x4
#define VA_MATTR_UCE        0x5
#define VA_MATTR_WC         0x6
#define VA_MATTR_NATPAGE    0x7
#define PMASK(size)         (~((size) - 1))
#define PSIZE(size)         (1UL<<(size))
#define CLEARLSB(ppn, nbits)    (((ppn) >> (nbits)) << (nbits))
#define PAGEALIGN(va, ps)	CLEARLSB(va, ps)
#define PAGE_FLAGS_RV_MASK   (0x2|(0x3UL<<50)|(((1UL<<11)-1)<<53))
#define _PAGE_MA_ST     (0x1 <<  2)
#define ARCH_PAGE_SHIFT   12
#define INVALID_TI_TAG (1UL << 63)
#define VTLB_PTE_P_BIT      0
#define VTLB_PTE_IO_BIT     60
#define VTLB_PTE_IO         (1UL<<VTLB_PTE_IO_BIT)
#define VTLB_PTE_P          (1UL<<VTLB_PTE_P_BIT)
#define vcpu_quick_region_check(_tr_regions,_ifa)		\
(_tr_regions & (1 << ((unsigned long)_ifa >> 61)))
#define vcpu_quick_region_set(_tr_regions,_ifa)             \
do  while (0)
static inline void vcpu_set_tr(struct thash_data *trp, u64 pte, u64 itir,
u64 va, u64 rid)
extern u64 kvm_get_mpt_entry(u64 gpfn);
static inline u64 __gpfn_is_io(u64 gpfn)
#define IA64_NO_FAULT	0
#define IA64_FAULT	1
#define VMM_RBS_OFFSET  ((VMM_TASK_SIZE + 15) & ~15)
#define SW_BAD  0
#define SW_V2P  1
#define SW_P2V  2
#define SW_SELF 3
#define SW_NOP  4
#define GUEST_IN_PHY    0x1
#define GUEST_PHY_EMUL  0x2
#define current_vcpu ((struct kvm_vcpu *) ia64_getreg(_IA64_REG_TP))
#define VRN_SHIFT	61
#define VRN_MASK	0xe000000000000000
#define VRN0		0x0UL
#define VRN1		0x1UL
#define VRN2		0x2UL
#define VRN3		0x3UL
#define VRN4		0x4UL
#define VRN5		0x5UL
#define VRN6		0x6UL
#define VRN7		0x7UL
#define IRQ_NO_MASKED         0
#define IRQ_MASKED_BY_VTPR    1
#define IRQ_MASKED_BY_INSVC   2
#define PTA_BASE_SHIFT      15
#define IA64_PSR_VM_BIT     46
#define IA64_PSR_VM (__IA64_UL(1) << IA64_PSR_VM_BIT)
#define IA64_IFS_V_BIT      63
#define IA64_IFS_V  (__IA64_UL(1) << IA64_IFS_V_BIT)
#define PHY_PAGE_UC (_PAGE_A|_PAGE_D|_PAGE_P|_PAGE_MA_UC|_PAGE_AR_RWX)
#define PHY_PAGE_WB (_PAGE_A|_PAGE_D|_PAGE_P|_PAGE_MA_WB|_PAGE_AR_RWX)
#define is_physical_mode(v)		\
((v->arch.mode_flags) & GUEST_IN_PHY)
#define is_virtual_mode(v)	\
(!is_physical_mode(v))
#define MODE_IND(psr)	\
(((psr).it << 2) + ((psr).dt << 1) + (psr).rt)
#define _vmm_raw_spin_lock(x)	 do while(0)
#define _vmm_raw_spin_unlock(x) do while(0)
typedef struct  vmm_spinlock_t;
#define _vmm_raw_spin_lock(x)						\
do  while (0)
#define _vmm_raw_spin_unlock(x)				\
do  \
while (0)
void vmm_spin_lock(vmm_spinlock_t *lock);
void vmm_spin_unlock(vmm_spinlock_t *lock);
enum ;
union kvm_va ;
#define __kvm_pa(x)     ()
#define __kvm_va(x)     ()
#define _REGION_ID(x)           ()
#define _REGION_PAGE_SIZE(x)    ()
#define _REGION_HW_WALKER(x)    ()
enum vhpt_ref;
enum tlb_miss_type ;
#define VCPU(_v, _x) ((_v)->arch.vpd->_x)
#define VMX(_v, _x)  ((_v)->arch._x)
#define VLSAPIC_INSVC(vcpu, i) ((vcpu)->arch.insvc[i])
#define VLSAPIC_XTP(_v)        VMX(_v, xtp)
static inline unsigned long itir_ps(unsigned long itir)
static inline u64 vcpu_get_itir(struct kvm_vcpu *vcpu)
static inline void vcpu_set_itir(struct kvm_vcpu *vcpu, u64 val)
static inline u64 vcpu_get_ifa(struct kvm_vcpu *vcpu)
static inline void vcpu_set_ifa(struct kvm_vcpu *vcpu, u64 val)
static inline u64 vcpu_get_iva(struct kvm_vcpu *vcpu)
static inline u64 vcpu_get_pta(struct kvm_vcpu *vcpu)
static inline u64 vcpu_get_lid(struct kvm_vcpu *vcpu)
static inline u64 vcpu_get_tpr(struct kvm_vcpu *vcpu)
static inline u64 vcpu_get_eoi(struct kvm_vcpu *vcpu)
static inline u64 vcpu_get_irr0(struct kvm_vcpu *vcpu)
static inline u64 vcpu_get_irr1(struct kvm_vcpu *vcpu)
static inline u64 vcpu_get_irr2(struct kvm_vcpu *vcpu)
static inline u64 vcpu_get_irr3(struct kvm_vcpu *vcpu)
static inline void vcpu_set_dcr(struct kvm_vcpu *vcpu, u64 val)
static inline void vcpu_set_isr(struct kvm_vcpu *vcpu, u64 val)
static inline void vcpu_set_lid(struct kvm_vcpu *vcpu, u64 val)
static inline void vcpu_set_ipsr(struct kvm_vcpu *vcpu, u64 val)
static inline void vcpu_set_iip(struct kvm_vcpu *vcpu, u64 val)
static inline void vcpu_set_ifs(struct kvm_vcpu *vcpu, u64 val)
static inline void vcpu_set_iipa(struct kvm_vcpu *vcpu, u64 val)
static inline void vcpu_set_iha(struct kvm_vcpu *vcpu, u64 val)
static inline u64 vcpu_get_rr(struct kvm_vcpu *vcpu, u64 reg)
static inline void vcpu_set_dbr(struct kvm_vcpu *vcpu, u64 reg, u64 val)
static inline void vcpu_set_ibr(struct kvm_vcpu *vcpu, u64 reg, u64 val)
static inline u64 vcpu_get_dbr(struct kvm_vcpu *vcpu, u64 reg)
static inline u64 vcpu_get_ibr(struct kvm_vcpu *vcpu, u64 reg)
static inline void vcpu_set_pmc(struct kvm_vcpu *vcpu, u64 reg, u64 val)
static inline void vcpu_set_pmd(struct kvm_vcpu *vcpu, u64 reg, u64 val)
static inline u64 vcpu_get_pmc(struct kvm_vcpu *vcpu, u64 reg)
static inline u64 vcpu_get_pmd(struct kvm_vcpu *vcpu, u64 reg)
static inline unsigned long vrrtomrr(unsigned long val)
static inline int highest_bits(int *dat)
static inline int is_higher_irq(int pending, int inservice)
static inline int is_higher_class(int pending, int mic)
static inline int highest_pending_irq(struct kvm_vcpu *vcpu)
static inline int highest_inservice_irq(struct kvm_vcpu *vcpu)
extern void vcpu_get_fpreg(struct kvm_vcpu *vcpu, unsigned long reg,
struct ia64_fpreg *val);
extern void vcpu_set_fpreg(struct kvm_vcpu *vcpu, unsigned long reg,
struct ia64_fpreg *val);
extern u64 vcpu_get_gr(struct kvm_vcpu *vcpu, unsigned long reg);
extern void vcpu_set_gr(struct kvm_vcpu *vcpu, unsigned long reg,
u64 val, int nat);
extern unsigned long vcpu_get_psr(struct kvm_vcpu *vcpu);
extern void vcpu_set_psr(struct kvm_vcpu *vcpu, unsigned long val);
extern u64 vcpu_thash(struct kvm_vcpu *vcpu, u64 vadr);
extern void vcpu_bsw0(struct kvm_vcpu *vcpu);
extern void thash_vhpt_insert(struct kvm_vcpu *v, u64 pte,
u64 itir, u64 va, int type);
extern struct thash_data *vhpt_lookup(u64 va);
extern u64 guest_vhpt_lookup(u64 iha, u64 *pte);
extern void thash_purge_entries(struct kvm_vcpu *v, u64 va, u64 ps);
extern void thash_purge_entries_remote(struct kvm_vcpu *v, u64 va, u64 ps);
extern u64 translate_phy_pte(u64 *pte, u64 itir, u64 va);
extern void thash_purge_and_insert(struct kvm_vcpu *v, u64 pte,
u64 itir, u64 ifa, int type);
extern void thash_purge_all(struct kvm_vcpu *v);
extern struct thash_data *vtlb_lookup(struct kvm_vcpu *v,
u64 va, int is_data);
extern int vtr_find_overlap(struct kvm_vcpu *vcpu, u64 va,
u64 ps, int is_data);
extern void vcpu_increment_iip(struct kvm_vcpu *v);
extern void vcpu_decrement_iip(struct kvm_vcpu *vcpu);
extern void vcpu_pend_interrupt(struct kvm_vcpu *vcpu, u8 vec);
extern void vcpu_unpend_interrupt(struct kvm_vcpu *vcpu, u8 vec);
extern void data_page_not_present(struct kvm_vcpu *vcpu, u64 vadr);
extern void dnat_page_consumption(struct kvm_vcpu *vcpu, u64 vadr);
extern void alt_dtlb(struct kvm_vcpu *vcpu, u64 vadr);
extern void nested_dtlb(struct kvm_vcpu *vcpu);
extern void dvhpt_fault(struct kvm_vcpu *vcpu, u64 vadr);
extern int vhpt_enabled(struct kvm_vcpu *vcpu, u64 vadr, enum vhpt_ref ref);
extern void update_vhpi(struct kvm_vcpu *vcpu, int vec);
extern int irq_masked(struct kvm_vcpu *vcpu, int h_pending, int h_inservice);
extern int fetch_code(struct kvm_vcpu *vcpu, u64 gip, IA64_BUNDLE *pbundle);
extern void emulate_io_inst(struct kvm_vcpu *vcpu, u64 padr, u64 ma);
extern void vmm_transition(struct kvm_vcpu *vcpu);
extern void vmm_trampoline(union context *from, union context *to);
extern int vmm_entry(void);
extern  u64 vcpu_get_itc(struct kvm_vcpu *vcpu);
extern void vmm_reset_entry(void);
void kvm_init_vtlb(struct kvm_vcpu *v);
void kvm_init_vhpt(struct kvm_vcpu *v);
void thash_init(struct thash_cb *hcb, u64 sz);
void panic_vm(struct kvm_vcpu *v, const char *fmt, ...);
u64 kvm_gpa_to_mpa(u64 gpa);
extern u64 ia64_call_vsa(u64 proc, u64 arg1, u64 arg2, u64 arg3,
u64 arg4, u64 arg5, u64 arg6, u64 arg7);
extern long vmm_sanity;
