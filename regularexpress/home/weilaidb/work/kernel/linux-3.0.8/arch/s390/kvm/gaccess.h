#define __KVM_S390_GACCESS_H
static inline void __user *__guestaddr_to_user(struct kvm_vcpu *vcpu,
unsigned long guestaddr)
static inline int get_guest_u64(struct kvm_vcpu *vcpu, unsigned long guestaddr,
u64 *result)
static inline int get_guest_u32(struct kvm_vcpu *vcpu, unsigned long guestaddr,
u32 *result)
static inline int get_guest_u16(struct kvm_vcpu *vcpu, unsigned long guestaddr,
u16 *result)
static inline int get_guest_u8(struct kvm_vcpu *vcpu, unsigned long guestaddr,
u8 *result)
static inline int put_guest_u64(struct kvm_vcpu *vcpu, unsigned long guestaddr,
u64 value)
static inline int put_guest_u32(struct kvm_vcpu *vcpu, unsigned long guestaddr,
u32 value)
static inline int put_guest_u16(struct kvm_vcpu *vcpu, unsigned long guestaddr,
u16 value)
static inline int put_guest_u8(struct kvm_vcpu *vcpu, unsigned long guestaddr,
u8 value)
static inline int __copy_to_guest_slow(struct kvm_vcpu *vcpu,
unsigned long guestdest,
const void *from, unsigned long n)
static inline int copy_to_guest(struct kvm_vcpu *vcpu, unsigned long guestdest,
const void *from, unsigned long n)
static inline int __copy_from_guest_slow(struct kvm_vcpu *vcpu, void *to,
unsigned long guestsrc,
unsigned long n)
static inline int copy_from_guest(struct kvm_vcpu *vcpu, void *to,
unsigned long guestsrc, unsigned long n)
static inline int copy_to_guest_absolute(struct kvm_vcpu *vcpu,
unsigned long guestdest,
const void *from, unsigned long n)
static inline int copy_from_guest_absolute(struct kvm_vcpu *vcpu, void *to,
unsigned long guestsrc,
unsigned long n)
