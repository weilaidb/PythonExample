#define pr_fmt(fmt) "pit: " fmt
#define mod_64(x, y) ((x) - (y) * div64_u64(x, y))
#define mod_64(x, y) ((x) % (y))
#define RW_STATE_LSB 1
#define RW_STATE_MSB 2
#define RW_STATE_WORD0 3
#define RW_STATE_WORD1 4
static u64 muldiv64(u64 a, u32 b, u32 c)
static void pit_set_gate(struct kvm *kvm, int channel, u32 val)
static int pit_get_gate(struct kvm *kvm, int channel)
static s64 __kpit_elapsed(struct kvm *kvm)
static s64 kpit_elapsed(struct kvm *kvm, struct kvm_kpit_channel_state *c,
int channel)
static int pit_get_count(struct kvm *kvm, int channel)
static int pit_get_out(struct kvm *kvm, int channel)
static void pit_latch_count(struct kvm *kvm, int channel)
static void pit_latch_status(struct kvm *kvm, int channel)
static void kvm_pit_ack_irq(struct kvm_irq_ack_notifier *kian)
void __kvm_migrate_pit_timer(struct kvm_vcpu *vcpu)
static void destroy_pit_timer(struct kvm_pit *pit)
static bool kpit_is_periodic(struct kvm_timer *ktimer)
static struct kvm_timer_ops kpit_ops = ;
static void pit_do_work(struct work_struct *work)
static enum hrtimer_restart pit_timer_fn(struct hrtimer *data)
static void create_pit_timer(struct kvm_kpit_state *ps, u32 val, int is_period)
static void pit_load_count(struct kvm *kvm, int channel, u32 val)
void kvm_pit_load_count(struct kvm *kvm, int channel, u32 val, int hpet_legacy_start)
static inline struct kvm_pit *dev_to_pit(struct kvm_io_device *dev)
static inline struct kvm_pit *speaker_to_pit(struct kvm_io_device *dev)
static inline int pit_in_range(gpa_t addr)
static int pit_ioport_write(struct kvm_io_device *this,
gpa_t addr, int len, const void *data)
static int pit_ioport_read(struct kvm_io_device *this,
gpa_t addr, int len, void *data)
static int speaker_ioport_write(struct kvm_io_device *this,
gpa_t addr, int len, const void *data)
static int speaker_ioport_read(struct kvm_io_device *this,
gpa_t addr, int len, void *data)
void kvm_pit_reset(struct kvm_pit *pit)
static void pit_mask_notifer(struct kvm_irq_mask_notifier *kimn, bool mask)
static const struct kvm_io_device_ops pit_dev_ops = ;
static const struct kvm_io_device_ops speaker_dev_ops = ;
struct kvm_pit *kvm_create_pit(struct kvm *kvm, u32 flags)
void kvm_free_pit(struct kvm *kvm)
