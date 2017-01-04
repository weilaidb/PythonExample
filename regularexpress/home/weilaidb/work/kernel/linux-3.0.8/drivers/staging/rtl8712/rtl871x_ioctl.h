#define __IOCTL_H
#define OID_802_11_CAPABILITY                   0x0d010122
#define OID_802_11_PMKID                        0x0d010123
#define OID_NDIS_SEG1	0x00010100
#define OID_NDIS_SEG2	0x00010200
#define OID_NDIS_SEG3	0x00020100
#define OID_NDIS_SEG4	0x01010100
#define OID_NDIS_SEG5	0x01020100
#define OID_NDIS_SEG6	0x01020200
#define OID_NDIS_SEG7	0xFD010100
#define OID_NDIS_SEG8	0x0D010100
#define OID_NDIS_SEG9	0x0D010200
#define OID_NDIS_SEG10	0x0D020200
#define SZ_OID_NDIS_SEG1	23
#define SZ_OID_NDIS_SEG2	3
#define SZ_OID_NDIS_SEG3	6
#define SZ_OID_NDIS_SEG4	6
#define SZ_OID_NDIS_SEG5	4
#define SZ_OID_NDIS_SEG6	8
#define SZ_OID_NDIS_SEG7	7
#define SZ_OID_NDIS_SEG8	36
#define SZ_OID_NDIS_SEG9	24
#define SZ_OID_NDIS_SEG10	19
#define OID_MP_SEG1	0xFF871100
#define OID_MP_SEG2	0xFF818000
#define OID_MP_SEG3	0xFF818700
#define OID_MP_SEG4	0xFF011100
enum oid_type ;
struct oid_funs_node ;
struct oid_par_priv ;
struct oid_obj_priv ;
uint oid_null_function(struct oid_par_priv *poid_par_priv);
extern struct iw_handler_def  r871x_handlers_def;
extern	uint drv_query_info(
struct  net_device *MiniportAdapterContext,
uint Oid,
void *InformationBuffer,
u32 InformationBufferLength,
u32 *BytesWritten,
u32 *BytesNeeded
);
extern	uint drv_set_info(
struct  net_device *MiniportAdapterContext,
uint Oid,
void *InformationBuffer,
u32 InformationBufferLength,
u32 *BytesRead,
u32 *BytesNeeded
);
