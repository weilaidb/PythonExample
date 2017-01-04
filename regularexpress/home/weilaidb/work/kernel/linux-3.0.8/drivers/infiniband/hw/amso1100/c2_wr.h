#define _C2_WR_H_
#define CCWR_MAGIC		0xb07700b0
#define C2_QP_NO_ATTR_CHANGE 0xFFFFFFFF
#define C2_MAX_PRIVATE_DATA_SIZE 200
enum c2_cq_notification_type ;
enum c2_setconfig_cmd ;
enum c2_getconfig_cmd ;
enum c2wr_ids ;
#define RDMA_SEND_OPCODE_FROM_WR_ID(x)   (x+2)
enum c2_wr_type ;
struct c2_netaddr ;
struct c2_route ;
struct c2_data_addr ;
enum c2_mm_flags ;
enum c2_acf ;
#define C2_FLASH_IMG_BITFILE 1
#define C2_FLASH_IMG_OPTION_ROM 2
#define C2_FLASH_IMG_VPD 3
#define C2_MAX_TERMINATE_MESSAGE_SIZE (72)
#define WR_BUILD_STR_LEN 64
struct c2wr_hdr  __attribute__((packed));
enum c2_rnic_flags ;
struct c2wr_rnic_open_req  __attribute__((packed));
struct c2wr_rnic_open_rep  __attribute__((packed));
union c2wr_rnic_open  __attribute__((packed));
struct c2wr_rnic_query_req  __attribute__((packed));
struct c2wr_rnic_query_rep  __attribute__((packed));
union c2wr_rnic_query  __attribute__((packed));
struct c2wr_rnic_getconfig_req  __attribute__((packed)) ;
struct c2wr_rnic_getconfig_rep  __attribute__((packed)) ;
union c2wr_rnic_getconfig  __attribute__((packed)) ;
struct c2wr_rnic_setconfig_req  __attribute__((packed)) ;
struct c2wr_rnic_setconfig_rep  __attribute__((packed)) ;
union c2wr_rnic_setconfig  __attribute__((packed)) ;
struct c2wr_rnic_close_req  __attribute__((packed)) ;
struct c2wr_rnic_close_rep  __attribute__((packed)) ;
union c2wr_rnic_close  __attribute__((packed)) ;
struct c2wr_cq_create_req  __attribute__((packed)) ;
struct c2wr_cq_create_rep  __attribute__((packed)) ;
union c2wr_cq_create  __attribute__((packed)) ;
struct c2wr_cq_modify_req  __attribute__((packed)) ;
struct c2wr_cq_modify_rep  __attribute__((packed)) ;
union c2wr_cq_modify  __attribute__((packed)) ;
struct c2wr_cq_destroy_req  __attribute__((packed)) ;
struct c2wr_cq_destroy_rep  __attribute__((packed)) ;
union c2wr_cq_destroy  __attribute__((packed)) ;
struct c2wr_pd_alloc_req  __attribute__((packed)) ;
struct c2wr_pd_alloc_rep  __attribute__((packed)) ;
union c2wr_pd_alloc  __attribute__((packed)) ;
struct c2wr_pd_dealloc_req  __attribute__((packed)) ;
struct c2wr_pd_dealloc_rep  __attribute__((packed)) ;
union c2wr_pd_dealloc  __attribute__((packed)) ;
struct c2wr_srq_create_req  __attribute__((packed)) ;
struct c2wr_srq_create_rep  __attribute__((packed)) ;
union c2wr_srq_create  __attribute__((packed)) ;
struct c2wr_srq_destroy_req  __attribute__((packed)) ;
struct c2wr_srq_destroy_rep  __attribute__((packed)) ;
union c2wr_srq_destroy  __attribute__((packed)) ;
enum c2wr_qp_flags ;
struct c2wr_qp_create_req  __attribute__((packed)) ;
struct c2wr_qp_create_rep  __attribute__((packed)) ;
union c2wr_qp_create  __attribute__((packed)) ;
struct c2wr_qp_query_req  __attribute__((packed)) ;
struct c2wr_qp_query_rep  __attribute__((packed)) ;
union c2wr_qp_query  __attribute__((packed)) ;
struct c2wr_qp_modify_req  __attribute__((packed)) ;
struct c2wr_qp_modify_rep  __attribute__((packed)) ;
union c2wr_qp_modify  __attribute__((packed)) ;
struct c2wr_qp_destroy_req  __attribute__((packed)) ;
struct c2wr_qp_destroy_rep  __attribute__((packed)) ;
union c2wr_qp_destroy  __attribute__((packed)) ;
struct c2wr_qp_connect_req  __attribute__((packed)) ;
struct c2wr_qp_connect  __attribute__((packed)) ;
struct c2wr_nsmr_stag_alloc_req  __attribute__((packed)) ;
struct c2wr_nsmr_stag_alloc_rep  __attribute__((packed)) ;
union c2wr_nsmr_stag_alloc  __attribute__((packed)) ;
struct c2wr_nsmr_register_req  __attribute__((packed)) ;
struct c2wr_nsmr_register_rep  __attribute__((packed)) ;
union c2wr_nsmr_register  __attribute__((packed)) ;
struct c2wr_nsmr_pbl_req  __attribute__((packed)) ;
struct c2wr_nsmr_pbl_rep  __attribute__((packed)) ;
union c2wr_nsmr_pbl  __attribute__((packed)) ;
struct c2wr_mr_query_req  __attribute__((packed)) ;
struct c2wr_mr_query_rep  __attribute__((packed)) ;
union c2wr_mr_query  __attribute__((packed)) ;
struct c2wr_mw_query_req  __attribute__((packed)) ;
struct c2wr_mw_query_rep  __attribute__((packed)) ;
union c2wr_mw_query  __attribute__((packed)) ;
struct c2wr_stag_dealloc_req  __attribute__((packed)) ;
struct c2wr_stag_dealloc_rep  __attribute__((packed)) ;
union c2wr_stag_dealloc  __attribute__((packed)) ;
struct c2wr_nsmr_reregister_req  __attribute__((packed)) ;
struct c2wr_nsmr_reregister_rep  __attribute__((packed)) ;
union c2wr_nsmr_reregister  __attribute__((packed)) ;
struct c2wr_smr_register_req  __attribute__((packed)) ;
struct c2wr_smr_register_rep  __attribute__((packed)) ;
union c2wr_smr_register  __attribute__((packed)) ;
struct c2wr_mw_alloc_req  __attribute__((packed)) ;
struct c2wr_mw_alloc_rep  __attribute__((packed)) ;
union c2wr_mw_alloc  __attribute__((packed)) ;
struct c2wr_user_hdr  __attribute__((packed)) ;
enum c2_qp_state ;
struct c2wr_ce  __attribute__((packed)) ;
enum ;
struct c2_sq_hdr  __attribute__((packed));
struct c2_rq_hdr  __attribute__((packed));
struct c2wr_send_req  __attribute__((packed));
union c2wr_send  __attribute__((packed));
struct c2wr_rdma_write_req  __attribute__((packed));
union c2wr_rdma_write  __attribute__((packed));
struct c2wr_rdma_read_req  __attribute__((packed));
union c2wr_rdma_read  __attribute__((packed));
struct c2wr_mw_bind_req  __attribute__((packed));
union c2wr_mw_bind  __attribute__((packed));
struct c2wr_nsmr_fastreg_req  __attribute__((packed));
union c2wr_nsmr_fastreg  __attribute__((packed));
struct c2wr_stag_invalidate_req  __attribute__((packed));
union c2wr_stag_invalidate  __attribute__((packed));
union c2wr_sqwr  __attribute__((packed));
struct c2wr_rqwr  __attribute__((packed));
union c2wr_recv  __attribute__((packed));
struct c2wr_ae_hdr  __attribute__((packed));
struct c2wr_ae_active_connect_results  __attribute__((packed));
struct c2wr_ae_connection_request  __attribute__((packed));
union c2wr_ae  __attribute__((packed));
struct c2wr_init_req  __attribute__((packed));
struct c2wr_init_rep  __attribute__((packed));
union c2wr_init  __attribute__((packed));
struct c2wr_flash_init_req  __attribute__((packed));
struct c2wr_flash_init_rep  __attribute__((packed));
union c2wr_flash_init  __attribute__((packed));
struct c2wr_flash_req  __attribute__((packed));
struct c2wr_flash_rep  __attribute__((packed));
union c2wr_flash  __attribute__((packed));
struct c2wr_buf_alloc_req  __attribute__((packed));
struct c2wr_buf_alloc_rep  __attribute__((packed));
union c2wr_buf_alloc  __attribute__((packed));
struct c2wr_buf_free_req  __attribute__((packed));
struct c2wr_buf_free_rep  __attribute__((packed));
union c2wr_buf_free  __attribute__((packed));
struct c2wr_flash_write_req  __attribute__((packed));
struct c2wr_flash_write_rep  __attribute__((packed));
union c2wr_flash_write  __attribute__((packed));
struct c2wr_ep_listen_create_req  __attribute__((packed));
struct c2wr_ep_listen_create_rep  __attribute__((packed));
union c2wr_ep_listen_create  __attribute__((packed));
struct c2wr_ep_listen_destroy_req  __attribute__((packed));
struct c2wr_ep_listen_destroy_rep  __attribute__((packed));
union c2wr_ep_listen_destroy  __attribute__((packed));
struct c2wr_ep_query_req  __attribute__((packed));
struct c2wr_ep_query_rep  __attribute__((packed));
union c2wr_ep_query  __attribute__((packed));
struct c2wr_cr_accept_req  __attribute__((packed));
struct c2wr_cr_accept_rep  __attribute__((packed));
union c2wr_cr_accept  __attribute__((packed));
struct  c2wr_cr_reject_req  __attribute__((packed));
struct  c2wr_cr_reject_rep  __attribute__((packed));
union c2wr_cr_reject  __attribute__((packed));
struct c2wr_console_req  __attribute__((packed));
enum c2_console_flags  __attribute__((packed));
struct c2wr_console_rep  __attribute__((packed));
union c2wr_console  __attribute__((packed));
union c2wr  __attribute__((packed));
static __inline__ u8 c2_wr_get_id(void *wr)
static __inline__ void c2_wr_set_id(void *wr, u8 id)
static __inline__ u8 c2_wr_get_result(void *wr)
static __inline__ void c2_wr_set_result(void *wr, u8 result)
static __inline__ u8 c2_wr_get_flags(void *wr)
static __inline__ void c2_wr_set_flags(void *wr, u8 flags)
static __inline__ u8 c2_wr_get_sge_count(void *wr)
static __inline__ void c2_wr_set_sge_count(void *wr, u8 sge_count)
static __inline__ __be32 c2_wr_get_wqe_count(void *wr)
static __inline__ void c2_wr_set_wqe_count(void *wr, u32 wqe_count)
