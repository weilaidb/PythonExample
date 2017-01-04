#define RC_H
struct ath_softc;
#define ATH_RATE_MAX     30
#define RATE_TABLE_SIZE  72
#define MAX_TX_RATE_PHY  48
#define RC_INVALID	0x0000
#define RC_LEGACY	0x0001
#define RC_SS		0x0002
#define RC_DS		0x0004
#define RC_TS		0x0008
#define RC_HT_20	0x0010
#define RC_HT_40	0x0020
#define RC_STREAM_MASK	0xe
#define RC_DS_OR_LATER(f)	((((f) & RC_STREAM_MASK) == RC_DS) || \
(((f) & RC_STREAM_MASK) == (RC_DS | RC_TS)))
#define RC_TS_ONLY(f)		(((f) & RC_STREAM_MASK) == RC_TS)
#define RC_SS_OR_LEGACY(f)	((f) & (RC_SS | RC_LEGACY))
#define RC_HT_2040		(RC_HT_20 | RC_HT_40)
#define RC_ALL_STREAM		(RC_SS | RC_DS | RC_TS)
#define RC_L_SD			(RC_LEGACY | RC_SS | RC_DS)
#define RC_L_SDT		(RC_LEGACY | RC_SS | RC_DS | RC_TS)
#define RC_HT_S_20		(RC_HT_20 | RC_SS)
#define RC_HT_D_20		(RC_HT_20 | RC_DS)
#define RC_HT_T_20		(RC_HT_20 | RC_TS)
#define RC_HT_S_40		(RC_HT_40 | RC_SS)
#define RC_HT_D_40		(RC_HT_40 | RC_DS)
#define RC_HT_T_40		(RC_HT_40 | RC_TS)
#define RC_HT_SD_20		(RC_HT_20 | RC_SS | RC_DS)
#define RC_HT_DT_20		(RC_HT_20 | RC_DS | RC_TS)
#define RC_HT_SD_40		(RC_HT_40 | RC_SS | RC_DS)
#define RC_HT_DT_40		(RC_HT_40 | RC_DS | RC_TS)
#define RC_HT_SD_2040		(RC_HT_2040 | RC_SS | RC_DS)
#define RC_HT_SDT_2040		(RC_HT_2040 | RC_SS | RC_DS | RC_TS)
#define RC_HT_SDT_20		(RC_HT_20 | RC_SS | RC_DS | RC_TS)
#define RC_HT_SDT_40		(RC_HT_40 | RC_SS | RC_DS | RC_TS)
#define RC_ALL			(RC_LEGACY | RC_HT_2040 | RC_ALL_STREAM)
enum ;
#define WLAN_RC_PHY_DS(_phy)   ((_phy == WLAN_RC_PHY_HT_20_DS)		\
|| (_phy == WLAN_RC_PHY_HT_40_DS)	\
|| (_phy == WLAN_RC_PHY_HT_20_DS_HGI)	\
|| (_phy == WLAN_RC_PHY_HT_40_DS_HGI))
#define WLAN_RC_PHY_TS(_phy)   ((_phy == WLAN_RC_PHY_HT_20_TS)		\
|| (_phy == WLAN_RC_PHY_HT_40_TS)	\
|| (_phy == WLAN_RC_PHY_HT_20_TS_HGI)	\
|| (_phy == WLAN_RC_PHY_HT_40_TS_HGI))
#define WLAN_RC_PHY_20(_phy)   ((_phy == WLAN_RC_PHY_HT_20_SS)		\
|| (_phy == WLAN_RC_PHY_HT_20_DS)	\
|| (_phy == WLAN_RC_PHY_HT_20_TS)	\
|| (_phy == WLAN_RC_PHY_HT_20_SS_HGI)	\
|| (_phy == WLAN_RC_PHY_HT_20_DS_HGI)	\
|| (_phy == WLAN_RC_PHY_HT_20_TS_HGI))
#define WLAN_RC_PHY_40(_phy)   ((_phy == WLAN_RC_PHY_HT_40_SS)		\
|| (_phy == WLAN_RC_PHY_HT_40_DS)	\
|| (_phy == WLAN_RC_PHY_HT_40_TS)	\
|| (_phy == WLAN_RC_PHY_HT_40_SS_HGI)	\
|| (_phy == WLAN_RC_PHY_HT_40_DS_HGI)	\
|| (_phy == WLAN_RC_PHY_HT_40_TS_HGI))
#define WLAN_RC_PHY_SGI(_phy)  ((_phy == WLAN_RC_PHY_HT_20_SS_HGI)      \
|| (_phy == WLAN_RC_PHY_HT_20_DS_HGI)   \
|| (_phy == WLAN_RC_PHY_HT_20_TS_HGI)   \
|| (_phy == WLAN_RC_PHY_HT_40_SS_HGI)   \
|| (_phy == WLAN_RC_PHY_HT_40_DS_HGI)   \
|| (_phy == WLAN_RC_PHY_HT_40_TS_HGI))
#define WLAN_RC_PHY_HT(_phy)    (_phy >= WLAN_RC_PHY_HT_20_SS)
#define WLAN_RC_CAP_MODE(capflag) (((capflag & WLAN_RC_HT_FLAG) ?	\
((capflag & WLAN_RC_40_FLAG) ? RC_HT_40 : RC_HT_20) : RC_LEGACY))
#define WLAN_RC_CAP_STREAM(capflag) (((capflag & WLAN_RC_TS_FLAG) ?	\
(RC_TS) : ((capflag & WLAN_RC_DS_FLAG) ? RC_DS : RC_SS)))
#define WLAN_RC_PHY_HT_VALID(flag, capflag)			\
(((flag & RC_HT_20) && !(capflag & WLAN_RC_40_FLAG)) || \
((flag & RC_HT_40) && (capflag & WLAN_RC_40_FLAG)))
#define WLAN_RC_DS_FLAG         (0x01)
#define WLAN_RC_TS_FLAG         (0x02)
#define WLAN_RC_40_FLAG         (0x04)
#define WLAN_RC_SGI_FLAG        (0x08)
#define WLAN_RC_HT_FLAG         (0x10)
struct ath_rate_table ;
struct ath_rateset ;
struct ath_rc_stats ;
struct ath_rate_priv ;
enum ath9k_internal_frame_type ;
int ath_rate_control_register(void);
void ath_rate_control_unregister(void);
static inline int ath_rate_control_register(void)
static inline void ath_rate_control_unregister(void)
