#define LINUX_HWRANDOM_H_
struct hwrng ;
extern int hwrng_register(struct hwrng *rng);
extern void hwrng_unregister(struct hwrng *rng);
