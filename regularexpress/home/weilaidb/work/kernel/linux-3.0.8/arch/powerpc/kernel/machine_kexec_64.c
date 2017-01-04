int default_machine_kexec_prepare(struct kimage *image)
#define IND_FLAGS (IND_DESTINATION | IND_INDIRECTION | IND_DONE | IND_SOURCE)
static void copy_segments(unsigned long ind)
void kexec_copy_flush(struct kimage *image)
static int kexec_all_irq_disabled = 0;
static void kexec_smp_down(void *arg)
static void kexec_prepare_cpus_wait(int wait_state)
static void wake_offline_cpus(void)
static void kexec_prepare_cpus(void)
static void kexec_prepare_cpus(void)
static union thread_union kexec_stack __init_task_data =
;
struct paca_struct kexec_paca;
extern NORET_TYPE void kexec_sequence(void *newstack, unsigned long start,
void *image, void *control,
void (*clear_all)(void)) ATTRIB_NORET;
void default_machine_kexec(struct kimage *image)
static unsigned long htab_base;
static struct property htab_base_prop = ;
static struct property htab_size_prop = ;
static int __init export_htab_values(void)
late_initcall(export_htab_values);
