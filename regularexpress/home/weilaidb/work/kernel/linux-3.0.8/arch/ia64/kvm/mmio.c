static void vlsapic_write_xtp(struct kvm_vcpu *v, uint8_t val)
#define PIB_LOW_HALF(ofst)     !(ofst & (1 << 20))
#define PIB_OFST_INTA          0x1E0000
#define PIB_OFST_XTP           0x1E0008
static void vlsapic_write_ipi(struct kvm_vcpu *vcpu,
uint64_t addr, uint64_t data)
void lsapic_write(struct kvm_vcpu *v, unsigned long addr,
unsigned long length, unsigned long val)
unsigned long lsapic_read(struct kvm_vcpu *v, unsigned long addr,
unsigned long length)
static void mmio_access(struct kvm_vcpu *vcpu, u64 src_pa, u64 *dest,
u16 s, int ma, int dir)
#define SL_INTEGER	0
#define SL_FLOATING	1
void emulate_io_inst(struct kvm_vcpu *vcpu, u64 padr, u64 ma)
