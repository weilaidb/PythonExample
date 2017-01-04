#define IB_USER_MAD_H
#define IB_USER_MAD_ABI_VERSION	5
struct ib_user_mad_hdr_old ;
struct ib_user_mad_hdr ;
struct ib_user_mad ;
typedef unsigned long __attribute__((aligned(4))) packed_ulong;
#define IB_USER_MAD_LONGS_PER_METHOD_MASK (128 / (8 * sizeof (long)))
struct ib_user_mad_reg_req ;
#define IB_IOCTL_MAGIC		0x1b
#define IB_USER_MAD_REGISTER_AGENT	_IOWR(IB_IOCTL_MAGIC, 1, \
struct ib_user_mad_reg_req)
#define IB_USER_MAD_UNREGISTER_AGENT	_IOW(IB_IOCTL_MAGIC, 2, __u32)
#define IB_USER_MAD_ENABLE_PKEY		_IO(IB_IOCTL_MAGIC, 3)
