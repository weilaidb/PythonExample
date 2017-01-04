#define mod_64(x, y) ((x) - (y) * div64_u64(x, y))
#define mod_64(x, y) ((x) % (y))
#define PRId64 "d"
#define PRIx64 "llx"
#define PRIu64 "u"
#define PRIo64 "o"
#define APIC_BUS_CYCLE_NS 1
#define apic_debug(fmt, arg...)
#define APIC_LVT_NUM			6
#define APIC_VERSION			(0x14UL | ((APIC_LVT_NUM - 1) << 16))
#define LAPIC_MMIO_LENGTH		(1 << 12)
#define APIC_SHORT_MASK			0xc0000
#define APIC_DEST_NOSHORT		0x0
#define APIC_DEST_MASK			0x800
#define MAX_APIC_VECTOR			256
#define VEC_POS(v) ((v) & (32 - 1))
#define REG_POS(v) (((v) >> 5) << 4)
static inline u32 apic_get_reg(struct kvm_lapic *apic, int reg_off)
static inline void apic_set_reg(struct kvm_lapic *apic, int reg_off, u32 val)
static inline int apic_test_and_set_vector(int vec, void *bitmap)
static inline int apic_test_and_clear_vector(int vec, void *bitmap)
static inline void apic_set_vector(int vec, void *bitmap)
static inline void apic_clear_vector(int vec, void *bitmap)
static inline int apic_hw_enabled(struct kvm_lapic *apic)
static inline int  apic_sw_enabled(struct kvm_lapic *apic)
static inline int apic_enabled(struct kvm_lapic *apic)
#define LVT_MASK	\
(APIC_LVT_MASKED | APIC_SEND_PENDING | APIC_VECTOR_MASK)
#define LINT_MASK	\
(LVT_MASK | APIC_MODE_MASK | APIC_INPUT_POLARITY | \
APIC_LVT_REMOTE_IRR | APIC_LVT_LEVEL_TRIGGER)
static inline int kvm_apic_id(struct kvm_lapic *apic)
static inline int apic_lvt_enabled(struct kvm_lapic *apic, int lvt_type)
static inline int apic_lvt_vector(struct kvm_lapic *apic, int lvt_type)
static inline int apic_lvtt_period(struct kvm_lapic *apic)
static inline int apic_lvt_nmi_mode(u32 lvt_val)
void kvm_apic_set_version(struct kvm_vcpu *vcpu)
static inline int apic_x2apic_mode(struct kvm_lapic *apic)
static unsigned int apic_lvt_mask[APIC_LVT_NUM] = ;
static int find_highest_vector(void *bitmap)
static inline int apic_test_and_set_irr(int vec, struct kvm_lapic *apic)
static inline int apic_search_irr(struct kvm_lapic *apic)
static inline int apic_find_highest_irr(struct kvm_lapic *apic)
static inline void apic_clear_irr(int vec, struct kvm_lapic *apic)
int kvm_lapic_find_highest_irr(struct kvm_vcpu *vcpu)
static int __apic_accept_irq(struct kvm_lapic *apic, int delivery_mode,
int vector, int level, int trig_mode);
int kvm_apic_set_irq(struct kvm_vcpu *vcpu, struct kvm_lapic_irq *irq)
static inline int apic_find_highest_isr(struct kvm_lapic *apic)
static void apic_update_ppr(struct kvm_lapic *apic)
static void apic_set_tpr(struct kvm_lapic *apic, u32 tpr)
int kvm_apic_match_physical_addr(struct kvm_lapic *apic, u16 dest)
int kvm_apic_match_logical_addr(struct kvm_lapic *apic, u8 mda)
int kvm_apic_match_dest(struct kvm_vcpu *vcpu, struct kvm_lapic *source,
int short_hand, int dest, int dest_mode)
static int __apic_accept_irq(struct kvm_lapic *apic, int delivery_mode,
int vector, int level, int trig_mode)
int kvm_apic_compare_prio(struct kvm_vcpu *vcpu1, struct kvm_vcpu *vcpu2)
static void apic_set_eoi(struct kvm_lapic *apic)
static void apic_send_ipi(struct kvm_lapic *apic)
static u32 apic_get_tmcct(struct kvm_lapic *apic)
static void __report_tpr_access(struct kvm_lapic *apic, bool write)
static inline void report_tpr_access(struct kvm_lapic *apic, bool write)
static u32 __apic_read(struct kvm_lapic *apic, unsigned int offset)
static inline struct kvm_lapic *to_lapic(struct kvm_io_device *dev)
static int apic_reg_read(struct kvm_lapic *apic, u32 offset, int len,
void *data)
static int apic_mmio_in_range(struct kvm_lapic *apic, gpa_t addr)
static int apic_mmio_read(struct kvm_io_device *this,
gpa_t address, int len, void *data)
static void update_divide_count(struct kvm_lapic *apic)
static void start_apic_timer(struct kvm_lapic *apic)
static void apic_manage_nmi_watchdog(struct kvm_lapic *apic, u32 lvt0_val)
static int apic_reg_write(struct kvm_lapic *apic, u32 reg, u32 val)
static int apic_mmio_write(struct kvm_io_device *this,
gpa_t address, int len, const void *data)
void kvm_free_lapic(struct kvm_vcpu *vcpu)
void kvm_lapic_set_tpr(struct kvm_vcpu *vcpu, unsigned long cr8)
u64 kvm_lapic_get_cr8(struct kvm_vcpu *vcpu)
void kvm_lapic_set_base(struct kvm_vcpu *vcpu, u64 value)
void kvm_lapic_reset(struct kvm_vcpu *vcpu)
bool kvm_apic_present(struct kvm_vcpu *vcpu)
int kvm_lapic_enabled(struct kvm_vcpu *vcpu)
static bool lapic_is_periodic(struct kvm_timer *ktimer)
int apic_has_pending_timer(struct kvm_vcpu *vcpu)
static int kvm_apic_local_deliver(struct kvm_lapic *apic, int lvt_type)
void kvm_apic_nmi_wd_deliver(struct kvm_vcpu *vcpu)
static struct kvm_timer_ops lapic_timer_ops = ;
static const struct kvm_io_device_ops apic_mmio_ops = ;
int kvm_create_lapic(struct kvm_vcpu *vcpu)
int kvm_apic_has_interrupt(struct kvm_vcpu *vcpu)
int kvm_apic_accept_pic_intr(struct kvm_vcpu *vcpu)
void kvm_inject_apic_timer_irqs(struct kvm_vcpu *vcpu)
int kvm_get_apic_interrupt(struct kvm_vcpu *vcpu)
void kvm_apic_post_state_restore(struct kvm_vcpu *vcpu)
void __kvm_migrate_apic_timer(struct kvm_vcpu *vcpu)
void kvm_lapic_sync_from_vapic(struct kvm_vcpu *vcpu)
void kvm_lapic_sync_to_vapic(struct kvm_vcpu *vcpu)
void kvm_lapic_set_vapic_addr(struct kvm_vcpu *vcpu, gpa_t vapic_addr)
int kvm_x2apic_msr_write(struct kvm_vcpu *vcpu, u32 msr, u64 data)
int kvm_x2apic_msr_read(struct kvm_vcpu *vcpu, u32 msr, u64 *data)
int kvm_hv_vapic_msr_write(struct kvm_vcpu *vcpu, u32 reg, u64 data)
int kvm_hv_vapic_msr_read(struct kvm_vcpu *vcpu, u32 reg, u64 *data)
