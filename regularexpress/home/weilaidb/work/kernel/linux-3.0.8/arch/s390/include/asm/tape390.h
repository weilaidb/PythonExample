#define _TAPE390_H
#define TAPE390_DISPLAY _IOW('d', 1, struct display_struct)
typedef struct display_struct  display_struct;
struct tape390_crypt_info  __attribute__ ((packed));
#define TAPE390_CRYPT_SUPPORTED_MASK 0x01
#define TAPE390_CRYPT_SUPPORTED(x) \
((x.capability & TAPE390_CRYPT_SUPPORTED_MASK))
#define TAPE390_CRYPT_ON_MASK 0x01
#define TAPE390_CRYPT_ON(x) (((x.status) & TAPE390_CRYPT_ON_MASK))
#define TAPE390_MEDIUM_LOADED_MASK 0x01
#define TAPE390_MEDIUM_ENCRYPTED_MASK 0x02
#define TAPE390_MEDIUM_ENCRYPTED(x) \
(((x.medium_status) & TAPE390_MEDIUM_ENCRYPTED_MASK))
#define TAPE390_MEDIUM_LOADED(x) \
(((x.medium_status) & TAPE390_MEDIUM_LOADED_MASK))
#define TAPE390_CRYPT_SET _IOW('d', 2, struct tape390_crypt_info)
#define TAPE390_CRYPT_QUERY _IOR('d', 3, struct tape390_crypt_info)
#define TAPE390_KEKL_TYPE_NONE 0
#define TAPE390_KEKL_TYPE_LABEL 1
#define TAPE390_KEKL_TYPE_HASH 2
struct tape390_kekl  __attribute__ ((packed));
struct tape390_kekl_pair  __attribute__ ((packed));
#define TAPE390_KEKL_SET _IOW('d', 4, struct tape390_kekl_pair)
#define TAPE390_KEKL_QUERY _IOR('d', 5, struct tape390_kekl_pair)
