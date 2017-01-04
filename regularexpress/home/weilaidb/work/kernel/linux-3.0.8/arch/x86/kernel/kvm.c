#define MMU_QUEUE_SIZE 1024
static int kvmapf = 1;
static int parse_no_kvmapf(char *arg)
early_param("no-kvmapf", parse_no_kvmapf);
struct kvm_para_state ;
static DEFINE_PER_CPU(struct kvm_para_state, para_state);
static DEFINE_PER_CPU(struct kvm_vcpu_pv_apf_data, apf_reason) __aligned(64);
static struct kvm_para_state *kvm_para_state(void)
static void kvm_io_delay(void)
#define KVM_TASK_SLEEP_HASHBITS 8
#define KVM_TASK_SLEEP_HASHSIZE (1<<KVM_TASK_SLEEP_HASHBITS)
struct kvm_task_sleep_node ;
static struct kvm_task_sleep_head  async_pf_sleepers[KVM_TASK_SLEEP_HASHSIZE];
static struct kvm_task_sleep_node *_find_apf_task(struct kvm_task_sleep_head *b,
u32 token)
void kvm_async_pf_task_wait(u32 token)
EXPORT_SYMBOL_GPL(kvm_async_pf_task_wait);
static void apf_task_wake_one(struct kvm_task_sleep_node *n)
static void apf_task_wake_all(void)
void kvm_async_pf_task_wake(u32 token)
EXPORT_SYMBOL_GPL(kvm_async_pf_task_wake);
u32 kvm_read_and_reset_pf_reason(void)
EXPORT_SYMBOL_GPL(kvm_read_and_reset_pf_reason);
dotraplinkage void __kprobes
do_async_page_fault(struct pt_regs *regs, unsigned long error_code)
static void kvm_mmu_op(void *buffer, unsigned len)
static void mmu_queue_flush(struct kvm_para_state *state)
static void kvm_deferred_mmu_op(void *buffer, int len)
static void kvm_mmu_write(void *dest, u64 val)
static void kvm_set_pte(pte_t *ptep, pte_t pte)
static void kvm_set_pte_at(struct mm_struct *mm, unsigned long addr,
pte_t *ptep, pte_t pte)
static void kvm_set_pmd(pmd_t *pmdp, pmd_t pmd)
#if PAGETABLE_LEVELS >= 3
static void kvm_set_pte_atomic(pte_t *ptep, pte_t pte)
static void kvm_pte_clear(struct mm_struct *mm,
unsigned long addr, pte_t *ptep)
static void kvm_pmd_clear(pmd_t *pmdp)
static void kvm_set_pud(pud_t *pudp, pud_t pud)
#if PAGETABLE_LEVELS == 4
static void kvm_set_pgd(pgd_t *pgdp, pgd_t pgd)
static void kvm_flush_tlb(void)
static void kvm_release_pt(unsigned long pfn)
static void kvm_enter_lazy_mmu(void)
static void kvm_leave_lazy_mmu(void)
static void __init paravirt_ops_setup(void)
void __cpuinit kvm_guest_cpu_init(void)
static void kvm_pv_disable_apf(void *unused)
static int kvm_pv_reboot_notify(struct notifier_block *nb,
unsigned long code, void *unused)
static struct notifier_block kvm_pv_reboot_nb = ;
static void __init kvm_smp_prepare_boot_cpu(void)
static void __cpuinit kvm_guest_cpu_online(void *dummy)
static void kvm_guest_cpu_offline(void *dummy)
static int __cpuinit kvm_cpu_notify(struct notifier_block *self,
unsigned long action, void *hcpu)
static struct notifier_block __cpuinitdata kvm_cpu_notifier = ;
static void __init kvm_apf_trap_init(void)
void __init kvm_guest_init(void)
