#define _ASM_X86_XEN_INTERFACE_H
#define __DEFINE_GUEST_HANDLE(name, type) \
typedef struct  __guest_handle_ ## name
#define __DEFINE_GUEST_HANDLE(name, type) \
typedef type * __guest_handle_ ## name
#define DEFINE_GUEST_HANDLE_STRUCT(name) \
__DEFINE_GUEST_HANDLE(name, struct name)
#define DEFINE_GUEST_HANDLE(name) __DEFINE_GUEST_HANDLE(name, name)
#define GUEST_HANDLE(name)        __guest_handle_ ## name
#if defined(__i386__)
#define set_xen_guest_handle(hnd, val)			\
do  while (0)
#elif defined(__x86_64__)
#define set_xen_guest_handle(hnd, val)	do  while (0)
#if defined(__i386__)
#define set_xen_guest_handle(hnd, val)			\
do  while (0)
#elif defined(__x86_64__)
#define set_xen_guest_handle(hnd, val)	do  while (0)
__DEFINE_GUEST_HANDLE(uchar, unsigned char);
__DEFINE_GUEST_HANDLE(uint,  unsigned int);
__DEFINE_GUEST_HANDLE(ulong, unsigned long);
DEFINE_GUEST_HANDLE(char);
DEFINE_GUEST_HANDLE(int);
DEFINE_GUEST_HANDLE(long);
DEFINE_GUEST_HANDLE(void);
#define HYPERVISOR_VIRT_START mk_unsigned_long(__HYPERVISOR_VIRT_START)
#define MACH2PHYS_VIRT_START  mk_unsigned_long(__MACH2PHYS_VIRT_START)
#define MACH2PHYS_VIRT_END    mk_unsigned_long(__MACH2PHYS_VIRT_END)
#define MACH2PHYS_NR_ENTRIES  ((MACH2PHYS_VIRT_END-MACH2PHYS_VIRT_START)>>__MACH2PHYS_SHIFT)
#define MAX_VIRT_CPUS 32
#define FIRST_RESERVED_GDT_PAGE  14
#define FIRST_RESERVED_GDT_BYTE  (FIRST_RESERVED_GDT_PAGE * 4096)
#define FIRST_RESERVED_GDT_ENTRY (FIRST_RESERVED_GDT_BYTE / 8)
#define TI_GET_DPL(_ti)		((_ti)->flags & 3)
#define TI_GET_IF(_ti)		((_ti)->flags & 4)
#define TI_SET_DPL(_ti, _dpl)	((_ti)->flags |= (_dpl))
#define TI_SET_IF(_ti, _if)	((_ti)->flags |= ((!!(_if))<<2))
struct trap_info ;
DEFINE_GUEST_HANDLE_STRUCT(trap_info);
struct arch_shared_info ;
struct vcpu_guest_context ;
DEFINE_GUEST_HANDLE_STRUCT(vcpu_guest_context);
#define XEN_EMULATE_PREFIX .byte 0x0f,0x0b,0x78,0x65,0x6e ;
#define XEN_CPUID          XEN_EMULATE_PREFIX cpuid
#define XEN_EMULATE_PREFIX ".byte 0x0f,0x0b,0x78,0x65,0x6e ; "
#define XEN_CPUID          XEN_EMULATE_PREFIX "cpuid"
