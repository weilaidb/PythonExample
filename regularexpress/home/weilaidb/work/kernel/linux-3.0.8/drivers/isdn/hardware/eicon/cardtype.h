#define _CARDTYPE_H_
#define CARDTYPE_H_WANT_DATA   0
#define CARDTYPE_H_WANT_IDI_DATA  0
#define CARDTYPE_H_WANT_RESOURCE_DATA 1
#define CARDTYPE_H_WANT_FILE_DATA  1
#define PROTTYPE_MINVAL     0
#define PROTTYPE_ETSI       0
#define PROTTYPE_1TR6       1
#define PROTTYPE_BELG       2
#define PROTTYPE_FRANC      3
#define PROTTYPE_ATEL       4
#define PROTTYPE_NI         5
#define PROTTYPE_5ESS       6
#define PROTTYPE_JAPAN      7
#define PROTTYPE_SWED       8
#define PROTTYPE_US         9
#define PROTTYPE_ITALY      10
#define PROTTYPE_TWAN       11
#define PROTTYPE_AUSTRAL    12
#define PROTTYPE_4ESDN      13
#define PROTTYPE_4ESDS      14
#define PROTTYPE_4ELDS      15
#define PROTTYPE_4EMGC      16
#define PROTTYPE_4EMGI      17
#define PROTTYPE_HONGKONG   18
#define PROTTYPE_RBSCAS     19
#define PROTTYPE_CORNETN    20
#define PROTTYPE_QSIG       21
#define PROTTYPE_NI_EWSD    22
#define PROTTYPE_5ESS_NI    23
#define PROTTYPE_T1CORNETN  24
#define PROTTYPE_CORNETNQ   25
#define PROTTYPE_T1CORNETNQ 26
#define PROTTYPE_T1QSIG     27
#define PROTTYPE_E1UNCH     28
#define PROTTYPE_T1UNCH     29
#define PROTTYPE_E1CHAN     30
#define PROTTYPE_T1CHAN     31
#define PROTTYPE_R2CAS      32
#define PROTTYPE_MAXVAL     32
#define CARD_UNKNOWN                      0
#define CARD_NONE                         0
#define CARDTYPE_DIVA_MCA                 0
#define CARDTYPE_DIVA_ISA                 1
#define CARDTYPE_DIVA_PCM                 2
#define CARDTYPE_DIVAPRO_ISA              3
#define CARDTYPE_DIVAPRO_PCM              4
#define CARDTYPE_DIVAPICO_ISA             5
#define CARDTYPE_DIVAPICO_PCM             6
#define CARDTYPE_DIVAPRO20_PCI            7
#define CARDTYPE_DIVA20_PCI               8
#define CARDTYPE_QUADRO_ISA               9
#define CARDTYPE_S_ISA                    10
#define CARDTYPE_S_MCA                    11
#define CARDTYPE_SX_ISA                   12
#define CARDTYPE_SX_MCA                   13
#define CARDTYPE_SXN_ISA                  14
#define CARDTYPE_SXN_MCA                  15
#define CARDTYPE_SCOM_ISA                 16
#define CARDTYPE_SCOM_MCA                 17
#define CARDTYPE_PR_ISA                   18
#define CARDTYPE_PR_MCA                   19
#define CARDTYPE_MAESTRA_ISA              20
#define CARDTYPE_MAESTRA_PCI              21
#define CARDTYPE_DIVASRV_Q_8M_PCI         22
#define CARDTYPE_DIVASRV_P_30M_PCI        23
#define CARDTYPE_DIVASRV_P_2M_PCI         24
#define CARDTYPE_DIVASRV_P_9M_PCI         25
#define CARDTYPE_DIVA20_ISA               26
#define CARDTYPE_DIVA20U_ISA              27
#define CARDTYPE_DIVA20U_PCI              28
#define CARDTYPE_DIVAPRO20_ISA            29
#define CARDTYPE_DIVAPRO20U_ISA           30
#define CARDTYPE_DIVAPRO20U_PCI           31
#define CARDTYPE_DIVAMOBILE_PCM           32
#define CARDTYPE_TDKGLOBALPRO_PCM         33
#define CARDTYPE_NMC_DIVAPRO_PCM          34
#define CARDTYPE_BT_EXLANE_PCI            35
#define CARDTYPE_BT_EXLANE_ISA            36
#define CARDTYPE_DIVALOW_ISA              37
#define CARDTYPE_DIVALOWU_ISA             38
#define CARDTYPE_DIVALOW_PCI              39
#define CARDTYPE_DIVALOWU_PCI             40
#define CARDTYPE_DIVAMOBILE_V90_PCM       41
#define CARDTYPE_TDKGLOBPRO_V90_PCM       42
#define CARDTYPE_DIVASRV_P_23M_PCI        43
#define CARDTYPE_DIVALOW_USB              44
#define CARDTYPE_DIVA_CT_ST               45
#define CARDTYPE_DIVA_CT_U                46
#define CARDTYPE_DIVA_CTLITE_ST           47
#define CARDTYPE_DIVA_CTLITE_U            48
#define CARDTYPE_DIVAISDN_V90_PCM         49
#define CARDTYPE_DIVAISDN_V90_PCI         50
#define CARDTYPE_DIVAISDN_TA              51
#define CARDTYPE_DIVASRV_VOICE_Q_8M_PCI   52
#define CARDTYPE_DIVASRV_Q_8M_V2_PCI      53
#define CARDTYPE_DIVASRV_P_30M_V2_PCI     54
#define CARDTYPE_DIVASRV_VOICE_Q_8M_V2_PCI 55
#define CARDTYPE_DIVASRV_VOICE_P_30M_V2_PCI 56
#define CARDTYPE_DIVAISDN_LAN             57
#define CARDTYPE_DIVA_202_PCI_ST          58
#define CARDTYPE_DIVA_202_PCI_U           59
#define CARDTYPE_DIVASRV_B_2M_V2_PCI      60
#define CARDTYPE_DIVASRV_B_2F_PCI         61
#define CARDTYPE_DIVALOW_USBV2            62
#define CARDTYPE_DIVASRV_VOICE_B_2M_V2_PCI 63
#define CARDTYPE_DIVA_PRO_30_PCI_ST       64
#define CARDTYPE_DIVA_CT_ST_V20           65
#define CARDTYPE_DIVAMOBILE_V2_PCM        66
#define CARDTYPE_DIVA_V2_PCM              67
#define CARDTYPE_DIVA_PC_CARD             68
#define CARDTYPE_MAX                      69
#define FAMILY_DIVA   1
#define FAMILY_S   2
#define FAMILY_MAESTRA  3
#define FAMILY_MAX   4
#define CARD_DIVA           1
#define CARD_PRO            2
#define CARD_PICO           3
#define CARD_S    4
#define CARD_SX    5
#define CARD_SXN   6
#define CARD_SCOM   7
#define CARD_QUAD   8
#define CARD_PR    9
#define CARD_MAE         10
#define CARD_MAEQ        11
#define CARD_MAEP        12
#define CARD_DIVALOW  13
#define CARD_CT    14
#define CARD_DIVATA   15
#define CARD_DIVALAN  16
#define CARD_MAE2         17
#define CARD_MAX   18
#define CARD_I_NONE   0
#define CARD_I_S   0
#define CARD_I_SX   1
#define CARD_I_SCOM   2
#define CARD_I_QUAD   3
#define CARD_I_PR   4
#define BUS_ISA             1
#define BUS_PCM             2
#define BUS_PCI             3
#define BUS_MCA             4
#define BUS_USB             5
#define BUS_COM    6
#define BUS_LAN    7
#define CHIP_NONE           0
#define CHIP_DSP            1
#define CHIP_HSCX           2
#define CHIP_IPAC           3
#define CHIP_SCOUT          4
#define CHIP_EXTERN         5
#define CHIP_IPACX          6
typedef struct CARD_PROPERTIES
CARD_PROPERTIES;
typedef struct CARD_RESOURCE
CARD_RESOURCE;
#define IS_PNP(t) \
( \
( \
CardProperties[t].Bus != BUS_ISA \
&& \
CardProperties[t].Bus != BUS_MCA \
) \
|| \
( \
CardProperties[t].Family != FAMILY_S \
&& \
CardProperties[t].Card != CARD_DIVA \
) \
)
#define IDI_PROP(t,p) (CardProperties[t].p)
#if CARDTYPE_H_WANT_DATA
#if CARDTYPE_H_WANT_IDI_DATA
#define IDI_ADAPTER_S           1
#define IDI_ADAPTER_PR          2
#define IDI_ADAPTER_DIVA        3
#define IDI_ADAPTER_MAESTRA     4
#define DI_VOICE          0x0
#define DI_FAX3           0x1
#define DI_MODEM          0x2
#define DI_POST           0x4
#define DI_V110           0x8
#define DI_V120           0x10
#define DI_POTS           0x20
#define DI_CODEC          0x40
#define DI_MANAGE         0x80
#define DI_V_42           0x0100
#define DI_EXTD_FAX       0x0200
#define DI_AT_PARSER      0x0400
#define DI_VOICE_OVER_IP  0x0800
#define DI_V1x0         (DI_V110 | DI_V120)
#define DI_NULL         0x0000
#if defined(SOFT_DSP_SUPPORT)
#define SOFT_DSP_ADD_FEATURES  (DI_MODEM | DI_FAX3 | DI_AT_PARSER)
#define SOFT_DSP_ADD_FEATURES  0
#if defined(SOFT_V110_SUPPORT)
#define DI_SOFT_V110  DI_V110
#define DI_SOFT_V110  0
CARD_PROPERTIES CardProperties [ ] =
;
#if CARDTYPE_H_WANT_RESOURCE_DATA
CARD_RESOURCE CardResource [ ] =  ;
extern CARD_PROPERTIES  CardProperties [] ;
extern CARD_RESOURCE  CardResource [] ;
#define CARD_DSP_CNT  5
#define CARD_PROT_CNT  9
#define CARD_FT_UNKNOWN     0
#define CARD_FT_B   1
#define CARD_FT_D   2
#define CARD_FT_S   3
#define CARD_FT_M   4
#define CARD_FT_NEW_DSP_COMBIFILE 5
#define CARD_FILE_NONE      0
#define CARD_B_S   1
#define CARD_B_P   2
#define CARD_D_K1   3
#define CARD_D_K2   4
#define CARD_D_H   5
#define CARD_D_V   6
#define CARD_D_M   7
#define CARD_D_F   8
#define CARD_P_S_E   9
#define CARD_P_S_1   10
#define CARD_P_S_B   11
#define CARD_P_S_F   12
#define CARD_P_S_A   13
#define CARD_P_S_N   14
#define CARD_P_S_5   15
#define CARD_P_S_J   16
#define CARD_P_SX_E   17
#define CARD_P_SX_1   18
#define CARD_P_SX_B   19
#define CARD_P_SX_F   20
#define CARD_P_SX_A   21
#define CARD_P_SX_N   22
#define CARD_P_SX_5   23
#define CARD_P_SX_J   24
#define CARD_P_SY_E   25
#define CARD_P_SY_1   26
#define CARD_P_SY_B   27
#define CARD_P_SY_F   28
#define CARD_P_SY_A   29
#define CARD_P_SY_N   30
#define CARD_P_SY_5   31
#define CARD_P_SY_J   32
#define CARD_P_SQ_E   33
#define CARD_P_SQ_1   34
#define CARD_P_SQ_B   35
#define CARD_P_SQ_F   36
#define CARD_P_SQ_A   37
#define CARD_P_SQ_N   38
#define CARD_P_SQ_5   39
#define CARD_P_SQ_J   40
#define CARD_P_P_E   41
#define CARD_P_P_1   42
#define CARD_P_P_B   43
#define CARD_P_P_F   44
#define CARD_P_P_A   45
#define CARD_P_P_N   46
#define CARD_P_P_5   47
#define CARD_P_P_J   48
#define CARD_P_M_E   49
#define CARD_P_M_1   50
#define CARD_P_M_B   51
#define CARD_P_M_F   52
#define CARD_P_M_A   53
#define CARD_P_M_N   54
#define CARD_P_M_5   55
#define CARD_P_M_J   56
#define CARD_P_S_S   57
#define CARD_P_SX_S   58
#define CARD_P_SY_S   59
#define CARD_P_SQ_S   60
#define CARD_P_P_S   61
#define CARD_P_M_S   62
#define CARD_D_NEW_DSP_COMBIFILE 63
typedef struct CARD_FILES_DATA
CARD_FILES_DATA;
typedef struct CARD_FILES
CARD_FILES;
#if CARDTYPE_H_WANT_DATA
#if CARDTYPE_H_WANT_FILE_DATA
CARD_FILES_DATA CardFData [] =  ;
CARD_FILES CardFiles [] =
;
extern CARD_FILES_DATA  CardFData [] ;
extern CARD_FILES   CardFiles [] ;
