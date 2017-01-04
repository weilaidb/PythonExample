#define _DBGLOG_H_
#define DBGLOG_TIMESTAMP_OFFSET          0
#define DBGLOG_TIMESTAMP_MASK            0x0000FFFF
#define DBGLOG_DBGID_OFFSET              16
#define DBGLOG_DBGID_MASK                0x03FF0000
#define DBGLOG_DBGID_NUM_MAX             256
#define DBGLOG_MODULEID_OFFSET           26
#define DBGLOG_MODULEID_MASK             0x3C000000
#define DBGLOG_MODULEID_NUM_MAX          16
#define DBGLOG_MODULEID_START
#define DBGLOG_MODULEID_INF                   0
#define DBGLOG_MODULEID_WMI                   1
#define DBGLOG_MODULEID_MISC                  2
#define DBGLOG_MODULEID_PM                    3
#define DBGLOG_MODULEID_TXRX_MGMTBUF          4
#define DBGLOG_MODULEID_TXRX_TXBUF            5
#define DBGLOG_MODULEID_TXRX_RXBUF            6
#define DBGLOG_MODULEID_WOW                   7
#define DBGLOG_MODULEID_WHAL                  8
#define DBGLOG_MODULEID_DC                    9
#define DBGLOG_MODULEID_CO                    10
#define DBGLOG_MODULEID_RO                    11
#define DBGLOG_MODULEID_CM                    12
#define DBGLOG_MODULEID_MGMT                  13
#define DBGLOG_MODULEID_TMR                   14
#define DBGLOG_MODULEID_BTCOEX                15
#define DBGLOG_MODULEID_END
#define DBGLOG_NUM_ARGS_OFFSET             30
#define DBGLOG_NUM_ARGS_MASK               0xC0000000
#define DBGLOG_NUM_ARGS_MAX                2
#define DBGLOG_MODULE_LOG_ENABLE_OFFSET    0
#define DBGLOG_MODULE_LOG_ENABLE_MASK      0x0000FFFF
#define DBGLOG_REPORTING_ENABLED_OFFSET    16
#define DBGLOG_REPORTING_ENABLED_MASK      0x00010000
#define DBGLOG_TIMESTAMP_RESOLUTION_OFFSET 17
#define DBGLOG_TIMESTAMP_RESOLUTION_MASK   0x000E0000
#define DBGLOG_REPORT_SIZE_OFFSET          20
#define DBGLOG_REPORT_SIZE_MASK            0x3FF00000
#define DBGLOG_LOG_BUFFER_SIZE             1500
#define DBGLOG_DBGID_DEFINITION_LEN_MAX    90
PREPACK struct dbglog_buf_s  POSTPACK;
PREPACK struct dbglog_hdr_s  POSTPACK;
PREPACK struct dbglog_config_s  POSTPACK;
#define cfgmmask                   u.dbglog_config.mmask
#define cfgrep                     u.dbglog_config.rep
#define cfgtsr                     u.dbglog_config.tsr
#define cfgsize                    u.dbglog_config.size
#define cfgvalue                   u.value
