#define __ASM_KVM_BOOK3S_H__
struct kvmppc_slb ;
struct kvmppc_bat ;
struct kvmppc_sid_map ;
#define SID_MAP_BITS    9
#define SID_MAP_NUM     (1 << SID_MAP_BITS)
#define SID_MAP_MASK    (SID_MAP_NUM - 1)
#define SID_CONTEXTS	1
#define SID_CONTEXTS	128
#define VSID_POOL_SIZE	(SID_CONTEXTS * 16)
struct kvmppc_vcpu_book3s ;
#define CONTEXT_HOST		0
#define CONTEXT_GUEST		1
#define CONTEXT_GUEST_END	2
#define VSID_REAL	0x1fffffffffc00000ULL
#define VSID_BAT	0x1fffffffffb00000ULL
#define VSID_REAL_DR	0x2000000000000000ULL
#define VSID_REAL_IR	0x4000000000000000ULL
#define VSID_PR		0x8000000000000000ULL
extern void kvmppc_mmu_pte_flush(struct kvm_vcpu *vcpu, ulong ea, ulong ea_mask);
extern void kvmppc_mmu_pte_vflush(struct kvm_vcpu *vcpu, u64 vp, u64 vp_mask);
extern void kvmppc_mmu_pte_pflush(struct kvm_vcpu *vcpu, ulong pa_start, ulong pa_end);
extern void kvmppc_set_msr(struct kvm_vcpu *vcpu, u64 new_msr);
extern void kvmppc_mmu_book3s_64_init(struct kvm_vcpu *vcpu);
extern void kvmppc_mmu_book3s_32_init(struct kvm_vcpu *vcpu);
extern int kvmppc_mmu_map_page(struct kvm_vcpu *vcpu, struct kvmppc_pte *pte);
extern int kvmppc_mmu_map_segment(struct kvm_vcpu *vcpu, ulong eaddr);
extern void kvmppc_mmu_flush_segments(struct kvm_vcpu *vcpu);
extern void kvmppc_mmu_hpte_cache_map(struct kvm_vcpu *vcpu, struct hpte_cache *pte);
extern struct hpte_cache *kvmppc_mmu_hpte_cache_next(struct kvm_vcpu *vcpu);
extern void kvmppc_mmu_hpte_destroy(struct kvm_vcpu *vcpu);
extern int kvmppc_mmu_hpte_init(struct kvm_vcpu *vcpu);
extern void kvmppc_mmu_invalidate_pte(struct kvm_vcpu *vcpu, struct hpte_cache *pte);
extern int kvmppc_mmu_hpte_sysinit(void);
extern void kvmppc_mmu_hpte_sysexit(void);
extern int kvmppc_ld(struct kvm_vcpu *vcpu, ulong *eaddr, int size, void *ptr, bool data);
extern int kvmppc_st(struct kvm_vcpu *vcpu, ulong *eaddr, int size, void *ptr, bool data);
extern void kvmppc_book3s_queue_irqprio(struct kvm_vcpu *vcpu, unsigned int vec);
extern void kvmppc_set_bat(struct kvm_vcpu *vcpu, struct kvmppc_bat *bat,
bool upper, u32 val);
extern void kvmppc_giveup_ext(struct kvm_vcpu *vcpu, ulong msr);
extern int kvmppc_emulate_paired_single(struct kvm_run *run, struct kvm_vcpu *vcpu);
extern pfn_t kvmppc_gfn_to_pfn(struct kvm_vcpu *vcpu, gfn_t gfn);
extern ulong kvmppc_trampoline_lowmem;
extern ulong kvmppc_trampoline_enter;
extern void kvmppc_rmcall(ulong srr0, ulong srr1);
extern void kvmppc_load_up_fpu(void);
extern void kvmppc_load_up_altivec(void);
extern void kvmppc_load_up_vsx(void);
extern u32 kvmppc_alignment_dsisr(struct kvm_vcpu *vcpu, unsigned int inst);
extern ulong kvmppc_alignment_dar(struct kvm_vcpu *vcpu, unsigned int inst);
static inline struct kvmppc_vcpu_book3s *to_book3s(struct kvm_vcpu *vcpu)
static inline ulong dsisr(void)
extern void kvm_return_point(void);
static inline struct kvmppc_book3s_shadow_vcpu *to_svcpu(struct kvm_vcpu *vcpu);
static inline void kvmppc_set_gpr(struct kvm_vcpu *vcpu, int num, ulong val)
static inline ulong kvmppc_get_gpr(struct kvm_vcpu *vcpu, int num)
static inline void kvmppc_set_cr(struct kvm_vcpu *vcpu, u32 val)
static inline u32 kvmppc_get_cr(struct kvm_vcpu *vcpu)
static inline void kvmppc_set_xer(struct kvm_vcpu *vcpu, u32 val)
static inline u32 kvmppc_get_xer(struct kvm_vcpu *vcpu)
static inline void kvmppc_set_ctr(struct kvm_vcpu *vcpu, ulong val)
static inline ulong kvmppc_get_ctr(struct kvm_vcpu *vcpu)
static inline void kvmppc_set_lr(struct kvm_vcpu *vcpu, ulong val)
static inline ulong kvmppc_get_lr(struct kvm_vcpu *vcpu)
static inline void kvmppc_set_pc(struct kvm_vcpu *vcpu, ulong val)
static inline ulong kvmppc_get_pc(struct kvm_vcpu *vcpu)
static inline u32 kvmppc_get_last_inst(struct kvm_vcpu *vcpu)
static inline ulong kvmppc_get_fault_dar(struct kvm_vcpu *vcpu)
#define OSI_SC_MAGIC_R3			0x113724FA
#define OSI_SC_MAGIC_R4			0x77810F9B
#define INS_DCBZ			0x7c0007ec
