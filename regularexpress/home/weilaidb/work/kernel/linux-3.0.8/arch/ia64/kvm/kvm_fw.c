#define INIT_PAL_STATUS_UNIMPLEMENTED(x)		\
#define INIT_PAL_STATUS_SUCCESS(x)			\
static void kvm_get_pal_call_data(struct kvm_vcpu *vcpu,
u64 *gr28, u64 *gr29, u64 *gr30, u64 *gr31)
static void set_pal_result(struct kvm_vcpu *vcpu,
struct ia64_pal_retval result)
static void set_sal_result(struct kvm_vcpu *vcpu,
struct sal_ret_values result)
struct cache_flush_args ;
cpumask_t cpu_cache_coherent_map;
static void remote_pal_cache_flush(void *data)
static struct ia64_pal_retval pal_cache_flush(struct kvm_vcpu *vcpu)
struct ia64_pal_retval pal_cache_summary(struct kvm_vcpu *vcpu)
static struct ia64_pal_retval pal_freq_base(struct kvm_vcpu *vcpu)
static void sn2_patch_itc_freq_ratios(struct ia64_pal_retval *result)
static struct ia64_pal_retval pal_freq_ratios(struct kvm_vcpu *vcpu)
static struct ia64_pal_retval pal_logical_to_physica(struct kvm_vcpu *vcpu)
static struct ia64_pal_retval pal_platform_addr(struct kvm_vcpu *vcpu)
static struct ia64_pal_retval pal_proc_get_features(struct kvm_vcpu *vcpu)
static struct ia64_pal_retval pal_register_info(struct kvm_vcpu *vcpu)
static struct ia64_pal_retval pal_cache_info(struct kvm_vcpu *vcpu)
#define GUEST_IMPL_VA_MSB	59
#define GUEST_RID_BITS		18
static struct ia64_pal_retval pal_vm_summary(struct kvm_vcpu *vcpu)
static struct ia64_pal_retval pal_vm_info(struct kvm_vcpu *vcpu)
static  u64 kvm_get_pal_call_index(struct kvm_vcpu *vcpu)
static void prepare_for_halt(struct kvm_vcpu *vcpu)
static struct ia64_pal_retval pal_perf_mon_info(struct kvm_vcpu *vcpu)
static struct ia64_pal_retval pal_halt_info(struct kvm_vcpu *vcpu)
static struct ia64_pal_retval pal_mem_attrib(struct kvm_vcpu *vcpu)
static void remote_pal_prefetch_visibility(void *v)
static struct ia64_pal_retval pal_prefetch_visibility(struct kvm_vcpu *vcpu)
static void remote_pal_mc_drain(void *v)
static struct ia64_pal_retval pal_get_brand_info(struct kvm_vcpu *vcpu)
int kvm_pal_emul(struct kvm_vcpu *vcpu, struct kvm_run *run)
static struct sal_ret_values sal_emulator(struct kvm *kvm,
long index, unsigned long in1,
unsigned long in2, unsigned long in3,
unsigned long in4, unsigned long in5,
unsigned long in6, unsigned long in7)
static void kvm_get_sal_call_data(struct kvm_vcpu *vcpu, u64 *in0, u64 *in1,
u64 *in2, u64 *in3, u64 *in4, u64 *in5, u64 *in6, u64 *in7)
void kvm_sal_emul(struct kvm_vcpu *vcpu)
