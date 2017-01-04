#define _ASM_BYTEORDER_H
#if defined(__MIPSEB__)
#elif defined(__MIPSEL__)
# error "MIPS, but neither __MIPSEB__, nor __MIPSEL__???"
