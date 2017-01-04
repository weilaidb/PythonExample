#define _ASM_X86_KVM_HOST_H
#define KVM_MAX_VCPUS 64
#define KVM_MEMORY_SLOTS 32
#define KVM_PRIVATE_MEM_SLOTS 4
#define KVM_MMIO_SIZE 16
#define KVM_PIO_PAGE_OFFSET 1
#define KVM_COALESCED_MMIO_PAGE_OFFSET 2
#define CR0_RESERVED_BITS                                               \
(~(unsigned long)(X86_CR0_PE | X86_CR0_MP | X86_CR0_EM | X86_CR0_TS \
| X86_CR0_ET | X86_CR0_NE | X86_CR0_WP | X86_CR0_AM \
| X86_CR0_NW | X86_CR0_CD | X86_CR0_PG))
#define CR3_PAE_RESERVED_BITS ((X86_CR3_PWT | X86_CR3_PCD) - 1)
#define CR3_NONPAE_RESERVED_BITS ((PAGE_SIZE-1) & ~(X86_CR3_PWT | X86_CR3_PCD))
#define CR3_L_MODE_RESERVED_BITS (CR3_NONPAE_RESERVED_BITS |	\
0xFFFFFF0000000000ULL)
#define CR4_RESERVED_BITS                                               \
(~(unsigned long)(X86_CR4_VME | X86_CR4_PVI | X86_CR4_TSD | X86_CR4_DE\
| X86_CR4_PSE | X86_CR4_PAE | X86_CR4_MCE     \
| X86_CR4_PGE | X86_CR4_PCE | X86_CR4_OSFXSR  \
| X86_CR4_OSXSAVE \
| X86_CR4_OSXMMEXCPT | X86_CR4_VMXE))
#define CR8_RESERVED_BITS (~(unsigned long)X86_CR8_TPR)
#define INVALID_PAGE (~(hpa_t)0)
#define VALID_PAGE(x) ((x) != INVALID_PAGE)
#define UNMAPPED_GVA (~(gpa_t)0)
#define KVM_NR_PAGE_SIZES	3
#define KVM_HPAGE_GFN_SHIFT(x)	(((x) - 1) * 9)
#define KVM_HPAGE_SHIFT(x)	(PAGE_SHIFT + KVM_HPAGE_GFN_SHIFT(x))
#define KVM_HPAGE_SIZE(x)	(1UL << KVM_HPAGE_SHIFT(x))
#define KVM_HPAGE_MASK(x)	(~(KVM_HPAGE_SIZE(x) - 1))
#define KVM_PAGES_PER_HPAGE(x)	(KVM_HPAGE_SIZE(x) / PAGE_SIZE)
#define DE_VECTOR 0
#define DB_VECTOR 1
#define BP_VECTOR 3
#define OF_VECTOR 4
#define BR_VECTOR 5
#define UD_VECTOR 6
#define NM_VECTOR 7
#define DF_VECTOR 8
#define TS_VECTOR 10
#define NP_VECTOR 11
#define SS_VECTOR 12
#define GP_VECTOR 13
#define PF_VECTOR 14
#define MF_VECTOR 16
#define MC_VECTOR 18
#define SELECTOR_TI_MASK (1 << 2)
#define SELECTOR_RPL_MASK 0x03
#define IOPL_SHIFT 12
#define KVM_PERMILLE_MMU_PAGES 20
#define KVM_MIN_ALLOC_MMU_PAGES 64
#define KVM_MMU_HASH_SHIFT 10
#define KVM_NUM_MMU_PAGES (1 << KVM_MMU_HASH_SHIFT)
#define KVM_MIN_FREE_MMU_PAGES 5
#define KVM_REFILL_PAGES 25
#define KVM_MAX_CPUID_ENTRIES 80
#define KVM_NR_FIXED_MTRR_REGION 88
#define KVM_NR_VAR_MTRR 8
#define ASYNC_PF_PER_VCPU 64
extern raw_spinlock_t kvm_lock;
extern struct list_head vm_list;
struct kvm_vcpu;
struct kvm;
struct kvm_async_pf;
enum kvm_reg ;
enum kvm_reg_ex ;
enum ;
#define KVM_NR_MEM_OBJS 40
#define KVM_NR_DB_REGS	4
#define DR6_BD		(1 << 13)
#define DR6_BS		(1 << 14)
#define DR6_FIXED_1	0xffff0ff0
#define DR6_VOLATILE	0x0000e00f
#define DR7_BP_EN_MASK	0x000000ff
#define DR7_GE		(1 << 9)
#define DR7_GD		(1 << 13)
#define DR7_FIXED_1	0x00000400
#define DR7_VOLATILE	0xffff23ff
struct kvm_mmu_memory_cache ;
#define NR_PTE_CHAIN_ENTRIES 5
struct kvm_pte_chain ;
union kvm_mmu_page_role ;
struct kvm_mmu_page ;
struct kvm_pv_mmu_op_buffer ;
struct kvm_pio_request ;
struct kvm_mmu ;
struct kvm_vcpu_arch ;
struct kvm_arch ;
struct kvm_vm_stat ;
struct kvm_vcpu_stat ;
struct x86_instruction_info;
struct kvm_x86_ops ;
struct kvm_arch_async_pf ;
extern struct kvm_x86_ops *kvm_x86_ops;
int kvm_mmu_module_init(void);
void kvm_mmu_module_exit(void);
void kvm_mmu_destroy(struct kvm_vcpu *vcpu);
int kvm_mmu_create(struct kvm_vcpu *vcpu);
int kvm_mmu_setup(struct kvm_vcpu *vcpu);
void kvm_mmu_set_nonpresent_ptes(u64 trap_pte, u64 notrap_pte);
void kvm_mmu_set_mask_ptes(u64 user_mask, u64 accessed_mask,
u64 dirty_mask, u64 nx_mask, u64 x_mask);
int kvm_mmu_reset_context(struct kvm_vcpu *vcpu);
void kvm_mmu_slot_remove_write_access(struct kvm *kvm, int slot);
void kvm_mmu_zap_all(struct kvm *kvm);
unsigned int kvm_mmu_calculate_mmu_pages(struct kvm *kvm);
void kvm_mmu_change_mmu_pages(struct kvm *kvm, unsigned int kvm_nr_mmu_pages);
int load_pdptrs(struct kvm_vcpu *vcpu, struct kvm_mmu *mmu, unsigned long cr3);
int emulator_write_phys(struct kvm_vcpu *vcpu, gpa_t gpa,
const void *val, int bytes);
int kvm_pv_mmu_op(struct kvm_vcpu *vcpu, unsigned long bytes,
gpa_t addr, unsigned long *ret);
u8 kvm_get_guest_memory_type(struct kvm_vcpu *vcpu, gfn_t gfn);
extern bool tdp_enabled;
extern bool kvm_has_tsc_control;
extern u32  kvm_min_guest_tsc_khz;
extern u32  kvm_max_guest_tsc_khz;
enum emulation_result ;
#define EMULTYPE_NO_DECODE	    (1 << 0)
#define EMULTYPE_TRAP_UD	    (1 << 1)
#define EMULTYPE_SKIP		    (1 << 2)
int x86_emulate_instruction(struct kvm_vcpu *vcpu, unsigned long cr2,
int emulation_type, void *insn, int insn_len);
static inline int emulate_instruction(struct kvm_vcpu *vcpu,
int emulation_type)
void kvm_enable_efer_bits(u64);
int kvm_get_msr(struct kvm_vcpu *vcpu, u32 msr_index, u64 *data);
int kvm_set_msr(struct kvm_vcpu *vcpu, u32 msr_index, u64 data);
struct x86_emulate_ctxt;
int kvm_fast_pio_out(struct kvm_vcpu *vcpu, int size, unsigned short port);
void kvm_emulate_cpuid(struct kvm_vcpu *vcpu);
int kvm_emulate_halt(struct kvm_vcpu *vcpu);
int kvm_emulate_wbinvd(struct kvm_vcpu *vcpu);
void kvm_get_segment(struct kvm_vcpu *vcpu, struct kvm_segment *var, int seg);
int kvm_load_segment_descriptor(struct kvm_vcpu *vcpu, u16 selector, int seg);
int kvm_task_switch(struct kvm_vcpu *vcpu, u16 tss_selector, int reason,
bool has_error_code, u32 error_code);
int kvm_set_cr0(struct kvm_vcpu *vcpu, unsigned long cr0);
int kvm_set_cr3(struct kvm_vcpu *vcpu, unsigned long cr3);
int kvm_set_cr4(struct kvm_vcpu *vcpu, unsigned long cr4);
int kvm_set_cr8(struct kvm_vcpu *vcpu, unsigned long cr8);
int kvm_set_dr(struct kvm_vcpu *vcpu, int dr, unsigned long val);
int kvm_get_dr(struct kvm_vcpu *vcpu, int dr, unsigned long *val);
unsigned long kvm_get_cr8(struct kvm_vcpu *vcpu);
void kvm_lmsw(struct kvm_vcpu *vcpu, unsigned long msw);
void kvm_get_cs_db_l_bits(struct kvm_vcpu *vcpu, int *db, int *l);
int kvm_set_xcr(struct kvm_vcpu *vcpu, u32 index, u64 xcr);
int kvm_get_msr_common(struct kvm_vcpu *vcpu, u32 msr, u64 *pdata);
int kvm_set_msr_common(struct kvm_vcpu *vcpu, u32 msr, u64 data);
unsigned long kvm_get_rflags(struct kvm_vcpu *vcpu);
void kvm_set_rflags(struct kvm_vcpu *vcpu, unsigned long rflags);
void kvm_queue_exception(struct kvm_vcpu *vcpu, unsigned nr);
void kvm_queue_exception_e(struct kvm_vcpu *vcpu, unsigned nr, u32 error_code);
void kvm_requeue_exception(struct kvm_vcpu *vcpu, unsigned nr);
void kvm_requeue_exception_e(struct kvm_vcpu *vcpu, unsigned nr, u32 error_code);
void kvm_inject_page_fault(struct kvm_vcpu *vcpu, struct x86_exception *fault);
int kvm_read_guest_page_mmu(struct kvm_vcpu *vcpu, struct kvm_mmu *mmu,
gfn_t gfn, void *data, int offset, int len,
u32 access);
void kvm_propagate_fault(struct kvm_vcpu *vcpu, struct x86_exception *fault);
bool kvm_require_cpl(struct kvm_vcpu *vcpu, int required_cpl);
int kvm_pic_set_irq(void *opaque, int irq, int level);
void kvm_inject_nmi(struct kvm_vcpu *vcpu);
int fx_init(struct kvm_vcpu *vcpu);
void kvm_mmu_flush_tlb(struct kvm_vcpu *vcpu);
void kvm_mmu_pte_write(struct kvm_vcpu *vcpu, gpa_t gpa,
const u8 *new, int bytes,
bool guest_initiated);
int kvm_mmu_unprotect_page_virt(struct kvm_vcpu *vcpu, gva_t gva);
void __kvm_mmu_free_some_pages(struct kvm_vcpu *vcpu);
int kvm_mmu_load(struct kvm_vcpu *vcpu);
void kvm_mmu_unload(struct kvm_vcpu *vcpu);
void kvm_mmu_sync_roots(struct kvm_vcpu *vcpu);
gpa_t kvm_mmu_gva_to_gpa_read(struct kvm_vcpu *vcpu, gva_t gva,
struct x86_exception *exception);
gpa_t kvm_mmu_gva_to_gpa_fetch(struct kvm_vcpu *vcpu, gva_t gva,
struct x86_exception *exception);
gpa_t kvm_mmu_gva_to_gpa_write(struct kvm_vcpu *vcpu, gva_t gva,
struct x86_exception *exception);
gpa_t kvm_mmu_gva_to_gpa_system(struct kvm_vcpu *vcpu, gva_t gva,
struct x86_exception *exception);
int kvm_emulate_hypercall(struct kvm_vcpu *vcpu);
int kvm_mmu_page_fault(struct kvm_vcpu *vcpu, gva_t gva, u32 error_code,
void *insn, int insn_len);
void kvm_mmu_invlpg(struct kvm_vcpu *vcpu, gva_t gva);
void kvm_enable_tdp(void);
void kvm_disable_tdp(void);
int complete_pio(struct kvm_vcpu *vcpu);
bool kvm_check_iopl(struct kvm_vcpu *vcpu);
static inline struct kvm_mmu_page *page_header(hpa_t shadow_page)
static inline u16 kvm_read_ldt(void)
static inline void kvm_load_ldt(u16 sel)
static inline unsigned long read_msr(unsigned long msr)
static inline u32 get_rdx_init_val(void)
static inline void kvm_inject_gp(struct kvm_vcpu *vcpu, u32 error_code)
#define TSS_IOPB_BASE_OFFSET 0x66
#define TSS_BASE_SIZE 0x68
#define TSS_IOPB_SIZE (65536 / 8)
#define TSS_REDIRECTION_SIZE (256 / 8)
#define RMODE_TSS_SIZE							\
(TSS_BASE_SIZE + TSS_REDIRECTION_SIZE + TSS_IOPB_SIZE + 1)
enum ;
#define HF_GIF_MASK		(1 << 0)
#define HF_HIF_MASK		(1 << 1)
#define HF_VINTR_MASK		(1 << 2)
#define HF_NMI_MASK		(1 << 3)
#define HF_IRET_MASK		(1 << 4)
#define HF_GUEST_MASK		(1 << 5)
asmlinkage void kvm_spurious_fault(void);
extern bool kvm_rebooting;
#define __kvm_handle_fault_on_reboot(insn) \
"666: " insn "\n\t" \
"668: \n\t"                           \
".pushsection .fixup, \"ax\" \n" \
"667: \n\t" \
"cmpb $0, kvm_rebooting \n\t"	      \
"jne 668b \n\t"      		      \
__ASM_SIZE(push) " $666b \n\t"	      \
"call kvm_spurious_fault \n\t"	      \
".popsection \n\t" \
".pushsection __ex_table, \"a\" \n\t" \
_ASM_PTR " 666b, 667b \n\t" \
".popsection"
#define KVM_ARCH_WANT_MMU_NOTIFIER
int kvm_unmap_hva(struct kvm *kvm, unsigned long hva);
int kvm_age_hva(struct kvm *kvm, unsigned long hva);
int kvm_test_age_hva(struct kvm *kvm, unsigned long hva);
void kvm_set_spte_hva(struct kvm *kvm, unsigned long hva, pte_t pte);
int cpuid_maxphyaddr(struct kvm_vcpu *vcpu);
int kvm_cpu_has_interrupt(struct kvm_vcpu *vcpu);
int kvm_arch_interrupt_allowed(struct kvm_vcpu *vcpu);
int kvm_cpu_get_interrupt(struct kvm_vcpu *v);
void kvm_define_shared_msr(unsigned index, u32 msr);
void kvm_set_shared_msr(unsigned index, u64 val, u64 mask);
bool kvm_is_linear_rip(struct kvm_vcpu *vcpu, unsigned long linear_rip);
void kvm_arch_async_page_not_present(struct kvm_vcpu *vcpu,
struct kvm_async_pf *work);
void kvm_arch_async_page_present(struct kvm_vcpu *vcpu,
struct kvm_async_pf *work);
void kvm_arch_async_page_ready(struct kvm_vcpu *vcpu,
struct kvm_async_pf *work);
bool kvm_arch_can_inject_async_page_present(struct kvm_vcpu *vcpu);
extern bool kvm_find_async_pf_gfn(struct kvm_vcpu *vcpu, gfn_t gfn);
void kvm_complete_insn_gp(struct kvm_vcpu *vcpu, int err);
