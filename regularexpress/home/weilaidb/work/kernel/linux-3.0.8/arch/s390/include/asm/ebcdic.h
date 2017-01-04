#define _EBCDIC_H
extern __u8 _ascebc_500[256];
extern __u8 _ebcasc_500[256];
extern __u8 _ascebc[256];
extern __u8 _ebcasc[256];
extern __u8 _ebc_tolower[256];
extern __u8 _ebc_toupper[256];
static inline void
codepage_convert(const __u8 *codepage, volatile __u8 * addr, unsigned long nr)
#define ASCEBC(addr,nr) codepage_convert(_ascebc, addr, nr)
#define EBCASC(addr,nr) codepage_convert(_ebcasc, addr, nr)
#define ASCEBC_500(addr,nr) codepage_convert(_ascebc_500, addr, nr)
#define EBCASC_500(addr,nr) codepage_convert(_ebcasc_500, addr, nr)
#define EBC_TOLOWER(addr,nr) codepage_convert(_ebc_tolower, addr, nr)
#define EBC_TOUPPER(addr,nr) codepage_convert(_ebc_toupper, addr, nr)
