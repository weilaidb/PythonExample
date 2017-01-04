#define _XTENSA_SHMBUF_H
#if defined (__XTENSA_EL__)
struct shmid64_ds ;
#elif defined (__XTENSA_EB__)
struct shmid64_ds ;
# error endian order not defined
struct shminfo64 ;
