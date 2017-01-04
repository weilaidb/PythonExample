#define _LINUX_XFRM_H
typedef union  xfrm_address_t;
struct xfrm_id ;
struct xfrm_sec_ctx ;
#define XFRM_SC_DOI_RESERVED 0
#define XFRM_SC_DOI_LSM 1
#define XFRM_SC_ALG_RESERVED 0
#define XFRM_SC_ALG_SELINUX 1
struct xfrm_selector ;
#define XFRM_INF (~(__u64)0)
struct xfrm_lifetime_cfg ;
struct xfrm_lifetime_cur ;
struct xfrm_replay_state ;
struct xfrm_replay_state_esn ;
struct xfrm_algo ;
struct xfrm_algo_auth ;
struct xfrm_algo_aead ;
struct xfrm_stats ;
enum ;
enum ;
enum ;
#define XFRM_MODE_TRANSPORT 0
#define XFRM_MODE_TUNNEL 1
#define XFRM_MODE_ROUTEOPTIMIZATION 2
#define XFRM_MODE_IN_TRIGGER 3
#define XFRM_MODE_BEET 4
#define XFRM_MODE_MAX 5
enum ;
#define XFRM_MSG_MAX (__XFRM_MSG_MAX - 1)
#define XFRM_NR_MSGTYPES (XFRM_MSG_MAX + 1 - XFRM_MSG_BASE)
struct xfrm_user_sec_ctx ;
struct xfrm_user_tmpl ;
struct xfrm_encap_tmpl ;
enum xfrm_ae_ftype_t ;
struct xfrm_userpolicy_type ;
enum xfrm_attr_type_t ;
struct xfrm_mark ;
enum xfrm_sadattr_type_t ;
struct xfrmu_sadhinfo ;
enum xfrm_spdattr_type_t ;
struct xfrmu_spdinfo ;
struct xfrmu_spdhinfo ;
struct xfrm_usersa_info ;
struct xfrm_usersa_id ;
struct xfrm_aevent_id ;
struct xfrm_userspi_info ;
struct xfrm_userpolicy_info ;
struct xfrm_userpolicy_id ;
struct xfrm_user_acquire ;
struct xfrm_user_expire ;
struct xfrm_user_polexpire ;
struct xfrm_usersa_flush ;
struct xfrm_user_report ;
struct xfrm_user_kmaddress ;
struct xfrm_user_migrate ;
struct xfrm_user_mapping ;
#define XFRMGRP_ACQUIRE		1
#define XFRMGRP_EXPIRE		2
#define XFRMGRP_SA		4
#define XFRMGRP_POLICY		8
#define XFRMGRP_REPORT		0x20
enum xfrm_nlgroups ;
#define XFRMNLGRP_MAX	(__XFRMNLGRP_MAX - 1)
