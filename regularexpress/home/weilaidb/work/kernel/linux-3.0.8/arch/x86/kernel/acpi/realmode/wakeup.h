#define ARCH_X86_KERNEL_ACPI_RM_WAKEUP_H
struct wakeup_header  __attribute__((__packed__));
extern struct wakeup_header wakeup_header;
#define WAKEUP_HEADER_OFFSET	8
#define WAKEUP_HEADER_SIGNATURE 0x51ee1111
#define WAKEUP_END_SIGNATURE	0x65a22c82
#define WAKEUP_BEHAVIOR_RESTORE_MISC_ENABLE     0
