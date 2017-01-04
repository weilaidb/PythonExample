#define _LINUX_AUTO_FS4_H
#undef AUTOFS_PROTO_VERSION
#undef AUTOFS_MIN_PROTO_VERSION
#undef AUTOFS_MAX_PROTO_VERSION
#define AUTOFS_PROTO_VERSION		5
#define AUTOFS_MIN_PROTO_VERSION	3
#define AUTOFS_MAX_PROTO_VERSION	5
#define AUTOFS_PROTO_SUBVERSION		2
#define AUTOFS_EXP_IMMEDIATE		1
#define AUTOFS_EXP_LEAVES		2
#define AUTOFS_TYPE_ANY			0U
#define AUTOFS_TYPE_INDIRECT		1U
#define AUTOFS_TYPE_DIRECT		2U
#define AUTOFS_TYPE_OFFSET		4U
static inline void set_autofs_type_indirect(unsigned int *type)
static inline unsigned int autofs_type_indirect(unsigned int type)
static inline void set_autofs_type_direct(unsigned int *type)
static inline unsigned int autofs_type_direct(unsigned int type)
static inline void set_autofs_type_offset(unsigned int *type)
static inline unsigned int autofs_type_offset(unsigned int type)
static inline unsigned int autofs_type_trigger(unsigned int type)
static inline void set_autofs_type_any(unsigned int *type)
static inline unsigned int autofs_type_any(unsigned int type)
enum autofs_notify ;
#define autofs_ptype_expire_multi	2
#define autofs_ptype_missing_indirect	3
#define autofs_ptype_expire_indirect	4
#define autofs_ptype_missing_direct	5
#define autofs_ptype_expire_direct	6
struct autofs_packet_expire_multi ;
union autofs_packet_union ;
struct autofs_v5_packet ;
typedef struct autofs_v5_packet autofs_packet_missing_indirect_t;
typedef struct autofs_v5_packet autofs_packet_expire_indirect_t;
typedef struct autofs_v5_packet autofs_packet_missing_direct_t;
typedef struct autofs_v5_packet autofs_packet_expire_direct_t;
union autofs_v5_packet_union ;
#define AUTOFS_IOC_EXPIRE_MULTI		_IOW(0x93,0x66,int)
#define AUTOFS_IOC_EXPIRE_INDIRECT	AUTOFS_IOC_EXPIRE_MULTI
#define AUTOFS_IOC_EXPIRE_DIRECT	AUTOFS_IOC_EXPIRE_MULTI
#define AUTOFS_IOC_PROTOSUBVER		_IOR(0x93,0x67,int)
#define AUTOFS_IOC_ASKUMOUNT		_IOR(0x93,0x70,int)
