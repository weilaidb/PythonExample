#define KVM_MAGIC_PAGE		(-4096L)
#define magic_var(x) KVM_MAGIC_PAGE + offsetof(struct kvm_vcpu_arch_shared, x)
#define KVM_INST_LWZ		0x80000000
#define KVM_INST_STW		0x90000000
#define KVM_INST_LD		0xe8000000
#define KVM_INST_STD		0xf8000000
#define KVM_INST_NOP		0x60000000
#define KVM_INST_B		0x48000000
#define KVM_INST_B_MASK		0x03ffffff
#define KVM_INST_B_MAX		0x01ffffff
#define KVM_MASK_RT		0x03e00000
#define KVM_RT_30		0x03c00000
#define KVM_MASK_RB		0x0000f800
#define KVM_INST_MFMSR		0x7c0000a6
#define KVM_INST_MFSPR_SPRG0	0x7c1042a6
#define KVM_INST_MFSPR_SPRG1	0x7c1142a6
#define KVM_INST_MFSPR_SPRG2	0x7c1242a6
#define KVM_INST_MFSPR_SPRG3	0x7c1342a6
#define KVM_INST_MFSPR_SRR0	0x7c1a02a6
#define KVM_INST_MFSPR_SRR1	0x7c1b02a6
#define KVM_INST_MFSPR_DAR	0x7c1302a6
#define KVM_INST_MFSPR_DSISR	0x7c1202a6
#define KVM_INST_MTSPR_SPRG0	0x7c1043a6
#define KVM_INST_MTSPR_SPRG1	0x7c1143a6
#define KVM_INST_MTSPR_SPRG2	0x7c1243a6
#define KVM_INST_MTSPR_SPRG3	0x7c1343a6
#define KVM_INST_MTSPR_SRR0	0x7c1a03a6
#define KVM_INST_MTSPR_SRR1	0x7c1b03a6
#define KVM_INST_MTSPR_DAR	0x7c1303a6
#define KVM_INST_MTSPR_DSISR	0x7c1203a6
#define KVM_INST_TLBSYNC	0x7c00046c
#define KVM_INST_MTMSRD_L0	0x7c000164
#define KVM_INST_MTMSRD_L1	0x7c010164
#define KVM_INST_MTMSR		0x7c000124
#define KVM_INST_WRTEEI_0	0x7c000146
#define KVM_INST_WRTEEI_1	0x7c008146
#define KVM_INST_MTSRIN		0x7c0001e4
static bool kvm_patching_worked = true;
static char kvm_tmp[1024 * 1024];
static int kvm_tmp_index;
static inline void kvm_patch_ins(u32 *inst, u32 new_inst)
static void kvm_patch_ins_ll(u32 *inst, long addr, u32 rt)
static void kvm_patch_ins_ld(u32 *inst, long addr, u32 rt)
static void kvm_patch_ins_lwz(u32 *inst, long addr, u32 rt)
static void kvm_patch_ins_std(u32 *inst, long addr, u32 rt)
static void kvm_patch_ins_stw(u32 *inst, long addr, u32 rt)
static void kvm_patch_ins_nop(u32 *inst)
static void kvm_patch_ins_b(u32 *inst, int addr)
static u32 *kvm_alloc(int len)
extern u32 kvm_emulate_mtmsrd_branch_offs;
extern u32 kvm_emulate_mtmsrd_reg_offs;
extern u32 kvm_emulate_mtmsrd_orig_ins_offs;
extern u32 kvm_emulate_mtmsrd_len;
extern u32 kvm_emulate_mtmsrd[];
static void kvm_patch_ins_mtmsrd(u32 *inst, u32 rt)
extern u32 kvm_emulate_mtmsr_branch_offs;
extern u32 kvm_emulate_mtmsr_reg1_offs;
extern u32 kvm_emulate_mtmsr_reg2_offs;
extern u32 kvm_emulate_mtmsr_orig_ins_offs;
extern u32 kvm_emulate_mtmsr_len;
extern u32 kvm_emulate_mtmsr[];
static void kvm_patch_ins_mtmsr(u32 *inst, u32 rt)
extern u32 kvm_emulate_wrteei_branch_offs;
extern u32 kvm_emulate_wrteei_ee_offs;
extern u32 kvm_emulate_wrteei_len;
extern u32 kvm_emulate_wrteei[];
static void kvm_patch_ins_wrteei(u32 *inst)
extern u32 kvm_emulate_mtsrin_branch_offs;
extern u32 kvm_emulate_mtsrin_reg1_offs;
extern u32 kvm_emulate_mtsrin_reg2_offs;
extern u32 kvm_emulate_mtsrin_orig_ins_offs;
extern u32 kvm_emulate_mtsrin_len;
extern u32 kvm_emulate_mtsrin[];
static void kvm_patch_ins_mtsrin(u32 *inst, u32 rt, u32 rb)
static void kvm_map_magic_page(void *data)
static void kvm_check_ins(u32 *inst, u32 features)
static void kvm_use_magic_page(void)
unsigned long kvm_hypercall(unsigned long *in,
unsigned long *out,
unsigned long nr)
EXPORT_SYMBOL_GPL(kvm_hypercall);
static int kvm_para_setup(void)
static __init void kvm_free_tmp(void)
static int __init kvm_guest_init(void)
postcore_initcall(kvm_guest_init);
