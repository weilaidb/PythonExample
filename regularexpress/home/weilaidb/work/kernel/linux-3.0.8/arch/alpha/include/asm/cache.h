#define __ARCH_ALPHA_CACHE_H
#if defined(CONFIG_ALPHA_GENERIC) || defined(CONFIG_ALPHA_EV6)
# define L1_CACHE_BYTES     64
# define L1_CACHE_SHIFT     6
# define L1_CACHE_BYTES     32
# define L1_CACHE_SHIFT     5
#define SMP_CACHE_BYTES    L1_CACHE_BYTES
