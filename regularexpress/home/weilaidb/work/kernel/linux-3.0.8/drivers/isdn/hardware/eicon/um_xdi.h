#define __DIVA_USER_MODE_XDI_H__
typedef struct _diva_um_idi_adapter_features  diva_um_idi_adapter_features_t;
#define DIVA_UM_IDI_REQ_MASK			0x0000FFFF
#define DIVA_UM_IDI_REQ_TYPE_MASK		(~(DIVA_UM_IDI_REQ_MASK))
#define DIVA_UM_IDI_GET_FEATURES		1
#define DIVA_UM_IDI_REQ				2
#define DIVA_UM_IDI_REQ_TYPE_MAN		0x10000000
#define DIVA_UM_IDI_REQ_TYPE_SIG		0x20000000
#define DIVA_UM_IDI_REQ_TYPE_NET		0x30000000
#define DIVA_UM_IDI_REQ_MAN			(DIVA_UM_IDI_REQ | DIVA_UM_IDI_REQ_TYPE_MAN)
#define DIVA_UM_IDI_REQ_SIG			(DIVA_UM_IDI_REQ | DIVA_UM_IDI_REQ_TYPE_SIG)
#define DIVA_UM_IDI_REQ_NET			(DIVA_UM_IDI_REQ | DIVA_UM_IDI_REQ_TYPE_NET)
typedef struct _diva_um_idi_req_hdr  diva_um_idi_req_hdr_t;
typedef struct _diva_um_idi_ind_parameters  diva_um_idi_ind_parameters_t;
typedef struct _diva_um_idi_rc_parameters  diva_um_idi_rc_parameters_t;
typedef union _diva_um_idi_ind  diva_um_idi_ind_t;
#define DIVA_UM_IDI_IND_FEATURES  1
#define DIVA_UM_IDI_IND           2
#define DIVA_UM_IDI_IND_RC        3
typedef struct _diva_um_idi_ind_hdr  diva_um_idi_ind_hdr_t;
