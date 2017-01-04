#define _ASM_X86_HWEIGHT_H
#define POPCNT32 ".byte 0xf3,0x40,0x0f,0xb8,0xc7"
#define POPCNT64 ".byte 0xf3,0x48,0x0f,0xb8,0xc7"
#define REG_IN "D"
#define REG_OUT "a"
#define POPCNT32 ".byte 0xf3,0x0f,0xb8,0xc0"
#define REG_IN "a"
#define REG_OUT "a"
static inline unsigned int __arch_hweight32(unsigned int w)
static inline unsigned int __arch_hweight16(unsigned int w)
static inline unsigned int __arch_hweight8(unsigned int w)
static inline unsigned long __arch_hweight64(__u64 w)
