#define __I8254_H
struct kvm_kpit_channel_state ;
struct kvm_kpit_state ;
struct kvm_pit ;
#define KVM_PIT_BASE_ADDRESS	    0x40
#define KVM_SPEAKER_BASE_ADDRESS    0x61
#define KVM_PIT_MEM_LENGTH	    4
#define KVM_PIT_FREQ		    1193181
#define KVM_MAX_PIT_INTR_INTERVAL   HZ / 100
#define KVM_PIT_CHANNEL_MASK	    0x3
void kvm_pit_load_count(struct kvm *kvm, int channel, u32 val, int hpet_legacy_start);
struct kvm_pit *kvm_create_pit(struct kvm *kvm, u32 flags);
void kvm_free_pit(struct kvm *kvm);
void kvm_pit_reset(struct kvm_pit *pit);
