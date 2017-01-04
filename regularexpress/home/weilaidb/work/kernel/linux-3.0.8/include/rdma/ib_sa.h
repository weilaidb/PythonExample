#define IB_SA_H
enum ;
enum ;
enum ib_sa_selector ;
#define IB_SA_PATH_REC_SERVICE_ID		       (IB_SA_COMP_MASK( 0) |\
IB_SA_COMP_MASK( 1))
#define IB_SA_PATH_REC_DGID				IB_SA_COMP_MASK( 2)
#define IB_SA_PATH_REC_SGID				IB_SA_COMP_MASK( 3)
#define IB_SA_PATH_REC_DLID				IB_SA_COMP_MASK( 4)
#define IB_SA_PATH_REC_SLID				IB_SA_COMP_MASK( 5)
#define IB_SA_PATH_REC_RAW_TRAFFIC			IB_SA_COMP_MASK( 6)
#define IB_SA_PATH_REC_FLOW_LABEL       		IB_SA_COMP_MASK( 8)
#define IB_SA_PATH_REC_HOP_LIMIT			IB_SA_COMP_MASK( 9)
#define IB_SA_PATH_REC_TRAFFIC_CLASS			IB_SA_COMP_MASK(10)
#define IB_SA_PATH_REC_REVERSIBLE			IB_SA_COMP_MASK(11)
#define IB_SA_PATH_REC_NUMB_PATH			IB_SA_COMP_MASK(12)
#define IB_SA_PATH_REC_PKEY				IB_SA_COMP_MASK(13)
#define IB_SA_PATH_REC_QOS_CLASS			IB_SA_COMP_MASK(14)
#define IB_SA_PATH_REC_SL				IB_SA_COMP_MASK(15)
#define IB_SA_PATH_REC_MTU_SELECTOR			IB_SA_COMP_MASK(16)
#define IB_SA_PATH_REC_MTU				IB_SA_COMP_MASK(17)
#define IB_SA_PATH_REC_RATE_SELECTOR			IB_SA_COMP_MASK(18)
#define IB_SA_PATH_REC_RATE				IB_SA_COMP_MASK(19)
#define IB_SA_PATH_REC_PACKET_LIFE_TIME_SELECTOR	IB_SA_COMP_MASK(20)
#define IB_SA_PATH_REC_PACKET_LIFE_TIME			IB_SA_COMP_MASK(21)
#define IB_SA_PATH_REC_PREFERENCE			IB_SA_COMP_MASK(22)
struct ib_sa_path_rec ;
#define IB_SA_MCMEMBER_REC_MGID				IB_SA_COMP_MASK( 0)
#define IB_SA_MCMEMBER_REC_PORT_GID			IB_SA_COMP_MASK( 1)
#define IB_SA_MCMEMBER_REC_QKEY				IB_SA_COMP_MASK( 2)
#define IB_SA_MCMEMBER_REC_MLID				IB_SA_COMP_MASK( 3)
#define IB_SA_MCMEMBER_REC_MTU_SELECTOR			IB_SA_COMP_MASK( 4)
#define IB_SA_MCMEMBER_REC_MTU				IB_SA_COMP_MASK( 5)
#define IB_SA_MCMEMBER_REC_TRAFFIC_CLASS		IB_SA_COMP_MASK( 6)
#define IB_SA_MCMEMBER_REC_PKEY				IB_SA_COMP_MASK( 7)
#define IB_SA_MCMEMBER_REC_RATE_SELECTOR		IB_SA_COMP_MASK( 8)
#define IB_SA_MCMEMBER_REC_RATE				IB_SA_COMP_MASK( 9)
#define IB_SA_MCMEMBER_REC_PACKET_LIFE_TIME_SELECTOR	IB_SA_COMP_MASK(10)
#define IB_SA_MCMEMBER_REC_PACKET_LIFE_TIME		IB_SA_COMP_MASK(11)
#define IB_SA_MCMEMBER_REC_SL				IB_SA_COMP_MASK(12)
#define IB_SA_MCMEMBER_REC_FLOW_LABEL			IB_SA_COMP_MASK(13)
#define IB_SA_MCMEMBER_REC_HOP_LIMIT			IB_SA_COMP_MASK(14)
#define IB_SA_MCMEMBER_REC_SCOPE			IB_SA_COMP_MASK(15)
#define IB_SA_MCMEMBER_REC_JOIN_STATE			IB_SA_COMP_MASK(16)
#define IB_SA_MCMEMBER_REC_PROXY_JOIN			IB_SA_COMP_MASK(17)
struct ib_sa_mcmember_rec ;
#define IB_SA_SERVICE_REC_SERVICE_ID			IB_SA_COMP_MASK( 0)
#define IB_SA_SERVICE_REC_SERVICE_GID			IB_SA_COMP_MASK( 1)
#define IB_SA_SERVICE_REC_SERVICE_PKEY			IB_SA_COMP_MASK( 2)
#define IB_SA_SERVICE_REC_SERVICE_LEASE			IB_SA_COMP_MASK( 4)
#define IB_SA_SERVICE_REC_SERVICE_KEY			IB_SA_COMP_MASK( 5)
#define IB_SA_SERVICE_REC_SERVICE_NAME			IB_SA_COMP_MASK( 6)
#define IB_SA_SERVICE_REC_SERVICE_DATA8_0		IB_SA_COMP_MASK( 7)
#define IB_SA_SERVICE_REC_SERVICE_DATA8_1		IB_SA_COMP_MASK( 8)
#define IB_SA_SERVICE_REC_SERVICE_DATA8_2		IB_SA_COMP_MASK( 9)
#define IB_SA_SERVICE_REC_SERVICE_DATA8_3		IB_SA_COMP_MASK(10)
#define IB_SA_SERVICE_REC_SERVICE_DATA8_4		IB_SA_COMP_MASK(11)
#define IB_SA_SERVICE_REC_SERVICE_DATA8_5		IB_SA_COMP_MASK(12)
#define IB_SA_SERVICE_REC_SERVICE_DATA8_6		IB_SA_COMP_MASK(13)
#define IB_SA_SERVICE_REC_SERVICE_DATA8_7		IB_SA_COMP_MASK(14)
#define IB_SA_SERVICE_REC_SERVICE_DATA8_8		IB_SA_COMP_MASK(15)
#define IB_SA_SERVICE_REC_SERVICE_DATA8_9		IB_SA_COMP_MASK(16)
#define IB_SA_SERVICE_REC_SERVICE_DATA8_10		IB_SA_COMP_MASK(17)
#define IB_SA_SERVICE_REC_SERVICE_DATA8_11		IB_SA_COMP_MASK(18)
#define IB_SA_SERVICE_REC_SERVICE_DATA8_12		IB_SA_COMP_MASK(19)
#define IB_SA_SERVICE_REC_SERVICE_DATA8_13		IB_SA_COMP_MASK(20)
#define IB_SA_SERVICE_REC_SERVICE_DATA8_14		IB_SA_COMP_MASK(21)
#define IB_SA_SERVICE_REC_SERVICE_DATA8_15		IB_SA_COMP_MASK(22)
#define IB_SA_SERVICE_REC_SERVICE_DATA16_0		IB_SA_COMP_MASK(23)
#define IB_SA_SERVICE_REC_SERVICE_DATA16_1		IB_SA_COMP_MASK(24)
#define IB_SA_SERVICE_REC_SERVICE_DATA16_2		IB_SA_COMP_MASK(25)
#define IB_SA_SERVICE_REC_SERVICE_DATA16_3		IB_SA_COMP_MASK(26)
#define IB_SA_SERVICE_REC_SERVICE_DATA16_4		IB_SA_COMP_MASK(27)
#define IB_SA_SERVICE_REC_SERVICE_DATA16_5		IB_SA_COMP_MASK(28)
#define IB_SA_SERVICE_REC_SERVICE_DATA16_6		IB_SA_COMP_MASK(29)
#define IB_SA_SERVICE_REC_SERVICE_DATA16_7		IB_SA_COMP_MASK(30)
#define IB_SA_SERVICE_REC_SERVICE_DATA32_0		IB_SA_COMP_MASK(31)
#define IB_SA_SERVICE_REC_SERVICE_DATA32_1		IB_SA_COMP_MASK(32)
#define IB_SA_SERVICE_REC_SERVICE_DATA32_2		IB_SA_COMP_MASK(33)
#define IB_SA_SERVICE_REC_SERVICE_DATA32_3		IB_SA_COMP_MASK(34)
#define IB_SA_SERVICE_REC_SERVICE_DATA64_0		IB_SA_COMP_MASK(35)
#define IB_SA_SERVICE_REC_SERVICE_DATA64_1		IB_SA_COMP_MASK(36)
#define IB_DEFAULT_SERVICE_LEASE 	0xFFFFFFFF
struct ib_sa_service_rec ;
struct ib_sa_client ;
void ib_sa_register_client(struct ib_sa_client *client);
void ib_sa_unregister_client(struct ib_sa_client *client);
struct ib_sa_query;
void ib_sa_cancel_query(int id, struct ib_sa_query *query);
int ib_sa_path_rec_get(struct ib_sa_client *client,
struct ib_device *device, u8 port_num,
struct ib_sa_path_rec *rec,
ib_sa_comp_mask comp_mask,
int timeout_ms, gfp_t gfp_mask,
void (*callback)(int status,
struct ib_sa_path_rec *resp,
void *context),
void *context,
struct ib_sa_query **query);
int ib_sa_service_rec_query(struct ib_sa_client *client,
struct ib_device *device, u8 port_num,
u8 method,
struct ib_sa_service_rec *rec,
ib_sa_comp_mask comp_mask,
int timeout_ms, gfp_t gfp_mask,
void (*callback)(int status,
struct ib_sa_service_rec *resp,
void *context),
void *context,
struct ib_sa_query **sa_query);
struct ib_sa_multicast ;
struct ib_sa_multicast *ib_sa_join_multicast(struct ib_sa_client *client,
struct ib_device *device, u8 port_num,
struct ib_sa_mcmember_rec *rec,
ib_sa_comp_mask comp_mask, gfp_t gfp_mask,
int (*callback)(int status,
struct ib_sa_multicast
*multicast),
void *context);
void ib_sa_free_multicast(struct ib_sa_multicast *multicast);
int ib_sa_get_mcmember_rec(struct ib_device *device, u8 port_num,
union ib_gid *mgid, struct ib_sa_mcmember_rec *rec);
int ib_init_ah_from_mcmember(struct ib_device *device, u8 port_num,
struct ib_sa_mcmember_rec *rec,
struct ib_ah_attr *ah_attr);
int ib_init_ah_from_path(struct ib_device *device, u8 port_num,
struct ib_sa_path_rec *rec,
struct ib_ah_attr *ah_attr);
void ib_sa_unpack_path(void *attribute, struct ib_sa_path_rec *rec);
