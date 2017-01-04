#define __LINUX_DCBNL_H__
#define IEEE_8021QAZ_MAX_TCS	8
#define IEEE_8021QAZ_TSA_STRICT		0
#define IEEE_8021QAZ_TSA_CB_SHAPER	1
#define IEEE_8021QAZ_TSA_ETS		2
#define IEEE_8021QAZ_TSA_VENDOR		255
struct ieee_ets ;
struct ieee_pfc ;
#define CEE_DCBX_MAX_PGS	8
#define CEE_DCBX_MAX_PRIO	8
struct cee_pg ;
struct cee_pfc ;
#define IEEE_8021QAZ_APP_SEL_ETHERTYPE	1
#define IEEE_8021QAZ_APP_SEL_STREAM	2
#define IEEE_8021QAZ_APP_SEL_DGRAM	3
#define IEEE_8021QAZ_APP_SEL_ANY	4
struct dcb_app ;
struct dcb_peer_app_info ;
struct dcbmsg ;
enum dcbnl_commands ;
enum dcbnl_attrs ;
enum ieee_attrs ;
#define DCB_ATTR_IEEE_MAX (__DCB_ATTR_IEEE_MAX - 1)
enum ieee_attrs_app ;
#define DCB_ATTR_IEEE_APP_MAX (__DCB_ATTR_IEEE_APP_MAX - 1)
enum cee_attrs ;
#define DCB_ATTR_CEE_MAX (__DCB_ATTR_CEE_MAX - 1)
enum peer_app_attr ;
#define DCB_ATTR_CEE_PEER_APP_MAX (__DCB_ATTR_CEE_PEER_APP_MAX - 1)
enum dcbnl_pfc_up_attrs ;
enum dcbnl_pg_attrs ;
enum dcbnl_tc_attrs ;
enum dcbnl_cap_attrs ;
#define DCB_CAP_DCBX_HOST		0x01
#define DCB_CAP_DCBX_LLD_MANAGED	0x02
#define DCB_CAP_DCBX_VER_CEE		0x04
#define DCB_CAP_DCBX_VER_IEEE		0x08
#define DCB_CAP_DCBX_STATIC		0x10
enum dcbnl_numtcs_attrs ;
enum dcbnl_bcn_attrs;
enum dcb_general_attr_values ;
#define DCB_APP_IDTYPE_ETHTYPE	0x00
#define DCB_APP_IDTYPE_PORTNUM	0x01
enum dcbnl_app_attrs ;
#define DCB_FEATCFG_ERROR	0x01
#define DCB_FEATCFG_ENABLE	0x02
#define DCB_FEATCFG_WILLING	0x04
#define DCB_FEATCFG_ADVERTISE	0x08
enum dcbnl_featcfg_attrs ;
