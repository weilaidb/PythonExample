#define _CRYPTO_B128OPS_H
typedef struct  u128;
typedef struct  be128;
typedef struct  le128;
static inline void u128_xor(u128 *r, const u128 *p, const u128 *q)
static inline void be128_xor(be128 *r, const be128 *p, const be128 *q)
static inline void le128_xor(le128 *r, const le128 *p, const le128 *q)
