#define __KERNEL_SYSCALLS__
#define BIN_DL 0
#if BIN_DL
#define VALID_PARAM(C) \
void wl_isr_handler( unsigned long p );
static p_u16    irq_mask                = 0xdeb8;
static p_s8     irq_list[4]             = ;
static p_u8     PARM_AUTHENTICATION        	= PARM_DEFAULT_AUTHENTICATION;
static p_u16    PARM_AUTH_KEY_MGMT_SUITE   	= PARM_DEFAULT_AUTH_KEY_MGMT_SUITE;
static p_u16    PARM_BRSC_2GHZ             	= PARM_DEFAULT_BRSC_2GHZ;
static p_u16    PARM_BRSC_5GHZ             	= PARM_DEFAULT_BRSC_5GHZ;
static p_u16    PARM_COEXISTENCE           	= PARM_DEFAULT_COEXISTENCE;
static p_u16    PARM_CONNECTION_CONTROL    	= PARM_DEFAULT_CONNECTION_CONTROL;
static p_char  *PARM_CREATE_IBSS           	= PARM_DEFAULT_CREATE_IBSS_STR;
static p_char  *PARM_DESIRED_SSID          	= PARM_DEFAULT_SSID;
static p_char  *PARM_DOWNLOAD_FIRMWARE      = "";
static p_u16    PARM_ENABLE_ENCRYPTION     	= PARM_DEFAULT_ENABLE_ENCRYPTION;
static p_char  *PARM_EXCLUDE_UNENCRYPTED   	= PARM_DEFAULT_EXCLUDE_UNENCRYPTED_STR;
static p_char  *PARM_INTRA_BSS_RELAY       	= PARM_DEFAULT_INTRA_BSS_RELAY_STR;
static p_char  *PARM_KEY1                  	= "";
static p_char  *PARM_KEY2                  	= "";
static p_char  *PARM_KEY3                  	= "";
static p_char  *PARM_KEY4                  	= "";
static p_char  *PARM_LOAD_BALANCING        	= PARM_DEFAULT_LOAD_BALANCING_STR;
static p_u16    PARM_MAX_SLEEP             	= PARM_DEFAULT_MAX_PM_SLEEP;
static p_char  *PARM_MEDIUM_DISTRIBUTION   	= PARM_DEFAULT_MEDIUM_DISTRIBUTION_STR;
static p_char  *PARM_MICROWAVE_ROBUSTNESS  	= PARM_DEFAULT_MICROWAVE_ROBUSTNESS_STR;
static p_char  *PARM_MULTICAST_PM_BUFFERING	= PARM_DEFAULT_MULTICAST_PM_BUFFERING_STR;
static p_u16    PARM_MULTICAST_RATE        	= PARM_DEFAULT_MULTICAST_RATE_2GHZ;
static p_char  *PARM_MULTICAST_RX          	= PARM_DEFAULT_MULTICAST_RX_STR;
static p_u8     PARM_NETWORK_ADDR[ETH_ALEN]	= PARM_DEFAULT_NETWORK_ADDR;
static p_u16    PARM_OWN_ATIM_WINDOW       	= PARM_DEFAULT_OWN_ATIM_WINDOW;
static p_u16    PARM_OWN_BEACON_INTERVAL   	= PARM_DEFAULT_OWN_BEACON_INTERVAL;
static p_u8     PARM_OWN_CHANNEL           	= PARM_DEFAULT_OWN_CHANNEL;
static p_u8     PARM_OWN_DTIM_PERIOD       	= PARM_DEFAULT_OWN_DTIM_PERIOD;
static p_char  *PARM_OWN_NAME              	= PARM_DEFAULT_OWN_NAME;
static p_char  *PARM_OWN_SSID              	= PARM_DEFAULT_SSID;
static p_u16	PARM_PM_ENABLED            	= WVLAN_PM_STATE_DISABLED;
static p_u16    PARM_PM_HOLDOVER_DURATION  	= PARM_DEFAULT_PM_HOLDOVER_DURATION;
static p_u8     PARM_PORT_TYPE             	= PARM_DEFAULT_PORT_TYPE;
static p_char  *PARM_PROMISCUOUS_MODE      	= PARM_DEFAULT_PROMISCUOUS_MODE_STR;
static p_char  *PARM_REJECT_ANY            	= PARM_DEFAULT_REJECT_ANY_STR;
static p_u16    PARM_RTS_THRESHOLD1        	= PARM_DEFAULT_RTS_THRESHOLD;
static p_u16    PARM_RTS_THRESHOLD2        	= PARM_DEFAULT_RTS_THRESHOLD;
static p_u16    PARM_RTS_THRESHOLD3        	= PARM_DEFAULT_RTS_THRESHOLD;
static p_u16    PARM_RTS_THRESHOLD4        	= PARM_DEFAULT_RTS_THRESHOLD;
static p_u16    PARM_RTS_THRESHOLD5        	= PARM_DEFAULT_RTS_THRESHOLD;
static p_u16    PARM_RTS_THRESHOLD6        	= PARM_DEFAULT_RTS_THRESHOLD;
static p_u16    PARM_RTS_THRESHOLD         	= PARM_DEFAULT_RTS_THRESHOLD;
static p_u16    PARM_SRSC_2GHZ             	= PARM_DEFAULT_SRSC_2GHZ;
static p_u16    PARM_SRSC_5GHZ             	= PARM_DEFAULT_SRSC_5GHZ;
static p_u8     PARM_SYSTEM_SCALE          	= PARM_DEFAULT_SYSTEM_SCALE;
static p_u8     PARM_TX_KEY                	= PARM_DEFAULT_TX_KEY;
static p_u16    PARM_TX_POW_LEVEL          	= PARM_DEFAULT_TX_POW_LEVEL;
static p_u16    PARM_TX_RATE1              	= PARM_DEFAULT_TX_RATE_2GHZ;
static p_u16    PARM_TX_RATE2              	= PARM_DEFAULT_TX_RATE_2GHZ;
static p_u16    PARM_TX_RATE3              	= PARM_DEFAULT_TX_RATE_2GHZ;
static p_u16    PARM_TX_RATE4              	= PARM_DEFAULT_TX_RATE_2GHZ;
static p_u16    PARM_TX_RATE5              	= PARM_DEFAULT_TX_RATE_2GHZ;
static p_u16    PARM_TX_RATE6              	= PARM_DEFAULT_TX_RATE_2GHZ;
static p_u16    PARM_TX_RATE               	= PARM_DEFAULT_TX_RATE_2GHZ;
static p_u8     PARM_WDS_ADDRESS1[ETH_ALEN]	= PARM_DEFAULT_NETWORK_ADDR;
static p_u8     PARM_WDS_ADDRESS2[ETH_ALEN]	= PARM_DEFAULT_NETWORK_ADDR;
static p_u8     PARM_WDS_ADDRESS3[ETH_ALEN]	= PARM_DEFAULT_NETWORK_ADDR;
static p_u8     PARM_WDS_ADDRESS4[ETH_ALEN]	= PARM_DEFAULT_NETWORK_ADDR;
static p_u8     PARM_WDS_ADDRESS5[ETH_ALEN]	= PARM_DEFAULT_NETWORK_ADDR;
static p_u8     PARM_WDS_ADDRESS6[ETH_ALEN]	= PARM_DEFAULT_NETWORK_ADDR;
#if 1
MODULE_PARM(PARM_OWN_DTIM_PERIOD,       "b");
MODULE_PARM_DESC(PARM_OWN_DTIM_PERIOD,          "DTIM Period (0 - 255) [1]");
MODULE_PARM(PARM_REJECT_ANY,            "s");
MODULE_PARM_DESC(PARM_REJECT_ANY,               "Closed System (<string> N or Y) [N]");
MODULE_PARM(PARM_EXCLUDE_UNENCRYPTED,   "s");
MODULE_PARM_DESC(PARM_EXCLUDE_UNENCRYPTED,      "Deny non-encrypted (<string> N or Y) [Y]");
MODULE_PARM(PARM_MULTICAST_PM_BUFFERING,"s");
MODULE_PARM_DESC(PARM_MULTICAST_PM_BUFFERING,   "Buffer MAC frames for Tx after DTIM (<string> Y or N) [Y]");
MODULE_PARM(PARM_INTRA_BSS_RELAY,       "s");
MODULE_PARM_DESC(PARM_INTRA_BSS_RELAY,          "IntraBSS Relay (<string> N or Y) [Y]");
MODULE_PARM(PARM_RTS_THRESHOLD1,        "h");
MODULE_PARM_DESC(PARM_RTS_THRESHOLD1,           "RTS Threshold, WDS Port 1 (256 - 2347) [2347]");
MODULE_PARM(PARM_RTS_THRESHOLD2,        "h");
MODULE_PARM_DESC(PARM_RTS_THRESHOLD2,           "RTS Threshold, WDS Port 2 (256 - 2347) [2347]");
MODULE_PARM(PARM_RTS_THRESHOLD3,        "h");
MODULE_PARM_DESC(PARM_RTS_THRESHOLD3,           "RTS Threshold, WDS Port 3 (256 - 2347) [2347]");
MODULE_PARM(PARM_RTS_THRESHOLD4,        "h");
MODULE_PARM_DESC(PARM_RTS_THRESHOLD4,           "RTS Threshold, WDS Port 4 (256 - 2347) [2347]");
MODULE_PARM(PARM_RTS_THRESHOLD5,        "h");
MODULE_PARM_DESC(PARM_RTS_THRESHOLD5,           "RTS Threshold, WDS Port 5 (256 - 2347) [2347]");
MODULE_PARM(PARM_RTS_THRESHOLD6,        "h");
MODULE_PARM_DESC(PARM_RTS_THRESHOLD6,           "RTS Threshold, WDS Port 6 (256 - 2347) [2347]");
MODULE_PARM(PARM_TX_RATE1,              "b");
MODULE_PARM_DESC(PARM_TX_RATE1,                 "Transmit Rate Control, WDS Port 1 (1 - 7) [3]");
MODULE_PARM(PARM_TX_RATE2,              "b");
MODULE_PARM_DESC(PARM_TX_RATE2,                 "Transmit Rate Control, WDS Port 2 (1 - 7) [3]");
MODULE_PARM(PARM_TX_RATE3,              "b");
MODULE_PARM_DESC(PARM_TX_RATE3,                 "Transmit Rate Control, WDS Port 3 (1 - 7) [3]");
MODULE_PARM(PARM_TX_RATE4,              "b");
MODULE_PARM_DESC(PARM_TX_RATE4,                 "Transmit Rate Control, WDS Port 4 (1 - 7) [3]");
MODULE_PARM(PARM_TX_RATE5,              "b");
MODULE_PARM_DESC(PARM_TX_RATE5,                 "Transmit Rate Control, WDS Port 5 (1 - 7) [3]");
MODULE_PARM(PARM_TX_RATE6,              "b");
MODULE_PARM_DESC(PARM_TX_RATE6,                 "Transmit Rate Control, WDS Port 6 (1 - 7) [3]");
MODULE_PARM(PARM_WDS_ADDRESS1,          "6b");
MODULE_PARM_DESC(PARM_WDS_ADDRESS1,             "MAC Address, WDS Port 1 ([0x00-0xff],[0x00-0xff],[0x00-0xff],[0x00-0xff],[0x00-0xff],[0x00-0xff]) []");
MODULE_PARM(PARM_WDS_ADDRESS2,          "6b");
MODULE_PARM_DESC(PARM_WDS_ADDRESS2,             "MAC Address, WDS Port 2 ([0x00-0xff],[0x00-0xff],[0x00-0xff],[0x00-0xff],[0x00-0xff],[0x00-0xff]) []");
MODULE_PARM(PARM_WDS_ADDRESS3,          "6b");
MODULE_PARM_DESC(PARM_WDS_ADDRESS3,             "MAC Address, WDS Port 3 ([0x00-0xff],[0x00-0xff],[0x00-0xff],[0x00-0xff],[0x00-0xff],[0x00-0xff]) []");
MODULE_PARM(PARM_WDS_ADDRESS4,          "6b");
MODULE_PARM_DESC(PARM_WDS_ADDRESS4,             "MAC Address, WDS Port 4 ([0x00-0xff],[0x00-0xff],[0x00-0xff],[0x00-0xff],[0x00-0xff],[0x00-0xff]) []");
MODULE_PARM(PARM_WDS_ADDRESS5,          "6b");
MODULE_PARM_DESC(PARM_WDS_ADDRESS5,             "MAC Address, WDS Port 5 ([0x00-0xff],[0x00-0xff],[0x00-0xff],[0x00-0xff],[0x00-0xff],[0x00-0xff]) []");
MODULE_PARM(PARM_WDS_ADDRESS6,          "6b");
MODULE_PARM_DESC(PARM_WDS_ADDRESS6,             "MAC Address, WDS Port 6 ([0x00-0xff],[0x00-0xff],[0x00-0xff],[0x00-0xff],[0x00-0xff],[0x00-0xff]) []");
MODULE_PARM(PARM_OWN_BEACON_INTERVAL,   "b");
MODULE_PARM_DESC(PARM_OWN_BEACON_INTERVAL,      "Own Beacon Interval (20 - 200) [100]");
MODULE_PARM(PARM_COEXISTENCE,   "b");
MODULE_PARM_DESC(PARM_COEXISTENCE,      "Coexistence (0-7) [0]");
#if DBG
static p_u32    pc_debug = DBG_LVL; p_u32    DebugFlag = ~0;
dbg_info_t   wl_info = ;
dbg_info_t  *DbgInfo = &wl_info;
static p_char  *useRTS = "N";
MODULE_PARM( useRTS, "s" );
MODULE_PARM_DESC( useRTS, "Use RTS test interface (<string> N or Y) [N]" );
extern struct CFG_RANGE2_STRCT BASED
cfg_drv_act_ranges_pri;
#if 1
extern memimage fw_image;
int wl_insert( struct net_device *dev )
memcpy( lp->dev->dev_addr, lp->MACAddress, ETH_ALEN );
dev->addr_len = ETH_ALEN;
lp->is_registered = TRUE;
parse_config( dev );
WL_WDS_NETDEV_REGISTER( lp );
lp->DownloadFirmware = WVLAN_DRV_MODE_STA;
if ( lp->useRTS == 1 )
wl_unlock( lp, &flags );
DBG_TRACE( DbgInfo, "%s: Wireless, io_addr %#03lx, irq %d, ""mac_address ",
dev->name, dev->base_addr, dev->irq );
for( i = 0; i < ETH_ALEN; i++ )
DBG_LEAVE( DbgInfo );
return result;
hcf_failed:
wl_hcf_error( dev, hcf_status );
failed:
DBG_ERROR( DbgInfo, "wl_insert() FAILED\n" );
if ( lp->is_registered == TRUE )
WL_WDS_NETDEV_DEREGISTER( lp );
result = -EFAULT;
DBG_LEAVE( DbgInfo );
return result;
}
int wl_reset(struct net_device *dev)
int wl_go( struct wl_private *lp )
void wl_set_wep_keys( struct wl_private *lp )
int wl_apply(struct wl_private *lp)
int wl_put_ltv_init( struct wl_private *lp )
int wl_put_ltv( struct wl_private *lp )
static int __init wl_module_init( void )
static void __exit wl_module_exit( void )
module_init(wl_module_init);
module_exit(wl_module_exit);
irqreturn_t wl_isr( int irq, void *dev_id, struct pt_regs *regs )
#define WVLAN_MAX_INT_SERVICES  50
void wl_isr_handler( unsigned long p )
void wl_remove( struct net_device *dev )
void wl_suspend( struct net_device *dev )
void wl_resume(struct net_device *dev)
void wl_release( struct net_device *dev )
p_u16 wl_get_irq_mask( void )
p_s8 * wl_get_irq_list( void )
int wl_enable( struct wl_private *lp )
void wl_enable_wds_ports( struct wl_private * lp )
int wl_connect( struct wl_private *lp )
int wl_disconnect( struct wl_private *lp )
int wl_disable( struct wl_private *lp )
void wl_disable_wds_ports( struct wl_private * lp )
int wl_mbx( struct wl_private *lp )
void wl_endian_translate_mailbox( ltv_t *ltv )
void wl_process_mailbox( struct wl_private *lp )
void wl_wds_netdev_register( struct wl_private *lp )
void wl_wds_netdev_deregister( struct wl_private *lp )
len += sprintf(buf+len,"IFB:                  0x%p\n", &lp->hcfCtx );
len += sprintf(buf+len,"flags:                %#.8lX\n", lp->flags );
len += sprintf(buf+len,"DebugFlag(wl_private) 0x%04X\n", lp->DebugFlag );
#if DBG
len += sprintf(buf+len,"DebugFlag (DbgInfo):   0x%08lX\n", DbgInfo->DebugFlag );
len += sprintf(buf+len,"is_registered:        0x%04X\n", lp->is_registered );
len += printf_strct( "driverInfo", &buf[len], (hcf_16*)&lp->driverInfo );
len += printf_strct( "driverIdentity", &buf[len], (hcf_16*)&lp->driverIdentity );
len += printf_strct( "StationIdentity", &buf[len], (hcf_16*)&lp->StationIdentity );
len += printf_strct( "PrimaryIdentity", &buf[len], (hcf_16*)&lp->hcfCtx.IFB_PRIIdentity );
len += printf_strct( "PrimarySupplier", &buf[len], (hcf_16*)&lp->hcfCtx.IFB_PRISup );
len += printf_strct( "NICIdentity", &buf[len], (hcf_16*)&lp->NICIdentity );
len += sprintf(buf+len,"txBytes:              0x%08lX\n", lp->txBytes );
len += sprintf(buf+len,"maxPort:              0x%04X\n", lp->maxPort );
len += sprintf(buf+len,"PortType:             0x%04X\n", lp->PortType );
len += sprintf(buf+len,"Channel:              0x%04X\n", lp->Channel );
len += sprintf(buf+len,"TxRateControl[2]:     0x%04X 0x%04X\n",
lp->TxRateControl[0], lp->TxRateControl[1] );
len += sprintf(buf+len,"DistanceBetweenAPs:   0x%04X\n", lp->DistanceBetweenAPs );
len += sprintf(buf+len,"RTSThreshold:         0x%04X\n", lp->RTSThreshold );
len += sprintf(buf+len,"PMEnabled:            0x%04X\n", lp->PMEnabled );
len += sprintf(buf+len,"MicrowaveRobustness:  0x%04X\n", lp->MicrowaveRobustness );
len += sprintf(buf+len,"CreateIBSS:           0x%04X\n", lp->CreateIBSS );
len += sprintf(buf+len,"MulticastReceive:     0x%04X\n", lp->MulticastReceive );
len += sprintf(buf+len,"MaxSleepDuration:     0x%04X\n", lp->MaxSleepDuration );
len += printf_hcf_8( "MACAddress", &buf[len], lp->MACAddress, ETH_ALEN );
len += sprintf(buf+len,"NetworkName:          %.32s\n", lp->NetworkName );
len += sprintf(buf+len,"EnableEncryption:     0x%04X\n", lp->EnableEncryption );
len += printf_hcf_8( "Key1", &buf[len], lp->Key1, MAX_KEY_LEN );
len += sprintf(buf+len,"TransmitKeyID:        0x%04X\n", lp->TransmitKeyID );
len += sprintf(buf+len,"driverEnable:         0x%04X\n", lp->driverEnable );
len += sprintf(buf+len,"wolasEnable:          0x%04X\n", lp->wolasEnable );
len += sprintf(buf+len,"atimWindow:           0x%04X\n", lp->atimWindow );
len += sprintf(buf+len,"holdoverDuration:     0x%04X\n", lp->holdoverDuration );
len += sprintf(buf+len,"authentication:       0x%04X\n", lp->authentication );
len += sprintf(buf+len,"promiscuousMode:      0x%04X\n", lp->promiscuousMode );
len += sprintf(buf+len,"DownloadFirmware:     0x%04X\n", lp->DownloadFirmware );
len += sprintf(buf+len,"AuthKeyMgmtSuite:     0x%04X\n", lp->AuthKeyMgmtSuite );
len += sprintf(buf+len,"loadBalancing:        0x%04X\n", lp->loadBalancing );
len += sprintf(buf+len,"mediumDistribution:   0x%04X\n", lp->mediumDistribution );
len += sprintf(buf+len,"txPowLevel:           0x%04X\n", lp->txPowLevel );
len += sprintf(buf+len,"connectionControl:    0x%04X\n", lp->connectionControl );
len += sprintf(buf+len,"ownBeaconInterval:    0x%04X\n", lp->ownBeaconInterval );
len += sprintf(buf+len,"coexistence:          0x%04X\n", lp->coexistence );
len += sprintf(buf+len,"netif_queue_on:       0x%04X\n", lp->netif_queue_on );
len += sprintf(buf+len,"txQ_count:            0x%04X\n", lp->txQ_count );
len += sprintf(buf+len,"probe_num_aps:        0x%04X\n", lp->probe_num_aps );
len += sprintf(buf+len,"use_dma:              0x%04X\n", lp->use_dma );
len += sprintf(buf+len,"useRTS:               0x%04X\n", lp->useRTS );
#if 1
len += sprintf(buf+len,"DTIMPeriod:           0x%04X\n", lp->DTIMPeriod );
len += sprintf(buf+len,"multicastPMBuffering: 0x%04X\n", lp->multicastPMBuffering );
len += sprintf(buf+len,"RejectAny:            0x%04X\n", lp->RejectAny );
len += sprintf(buf+len,"ExcludeUnencrypted:   0x%04X\n", lp->ExcludeUnencrypted );
len += sprintf(buf+len,"intraBSSRelay:        0x%04X\n", lp->intraBSSRelay );
len += sprintf(buf+len,"wlags49_type:             0x%08lX\n", lp->wlags49_type );
} else if ( lp->wlags49_type == 2 ) else if ( lp->wlags49_type & 0x8000 )  else
return len;
}
static void proc_write(const char *name, write_proc_t *w, void *data)
static int write_int(struct file *file, const char *buffer, unsigned long count, void *data)
#define RUN_AT(x)		(jiffies+(x))
#define DS_OOR	0x8000
lp->timer_oor_cnt = DS_OOR;
init_timer( &lp->timer_oor );
lp->timer_oor.function = timer_oor;
lp->timer_oor.data = (unsigned long)lp;
lp->timer_oor.expires = RUN_AT( 3 * HZ );
add_timer( &lp->timer_oor );
printk( "<5>wl_enable: %ld\n", jiffies );
void timer_oor( u_long arg )
MODULE_LICENSE("Dual BSD/GPL");
