#define _IB_CACHE_H
int ib_get_cached_gid(struct ib_device    *device,
u8                   port_num,
int                  index,
union ib_gid        *gid);
int ib_find_cached_gid(struct ib_device *device,
union ib_gid	*gid,
u8               *port_num,
u16              *index);
int ib_get_cached_pkey(struct ib_device    *device_handle,
u8                   port_num,
int                  index,
u16                 *pkey);
int ib_find_cached_pkey(struct ib_device    *device,
u8                   port_num,
u16                  pkey,
u16                 *index);
int ib_get_cached_lmc(struct ib_device *device,
u8                port_num,
u8                *lmc);
