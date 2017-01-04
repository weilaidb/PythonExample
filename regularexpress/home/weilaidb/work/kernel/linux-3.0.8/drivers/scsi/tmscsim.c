#define C_NOP
# define DEBUG0(x) x
# define DEBUG0(x) C_NOP
# define DEBUG1(x) x
# define DEBUG1(x) C_NOP
# define DCBDEBUG(x) x
# define DCBDEBUG(x) C_NOP
# define PARSEDEBUG(x) x
# define PARSEDEBUG(x) C_NOP
# define REMOVABLEDEBUG(x) x
# define REMOVABLEDEBUG(x) C_NOP
#define DCBDEBUG1(x) C_NOP
#define DC390_BANNER "Tekram DC390/AM53C974"
#define DC390_VERSION "2.1d 2004-05-27"
#define PCI_DEVICE_ID_AMD53C974 	PCI_DEVICE_ID_AMD_SCSI
static void dc390_DataOut_0( struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus);
static void dc390_DataIn_0( struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus);
static void dc390_Command_0( struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus);
static void dc390_Status_0( struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus);
static void dc390_MsgOut_0( struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus);
static void dc390_MsgIn_0( struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus);
static void dc390_DataOutPhase( struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus);
static void dc390_DataInPhase( struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus);
static void dc390_CommandPhase( struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus);
static void dc390_StatusPhase( struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus);
static void dc390_MsgOutPhase( struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus);
static void dc390_MsgInPhase( struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus);
static void dc390_Nop_0( struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus);
static void dc390_Nop_1( struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus);
static void dc390_SetXferRate( struct dc390_acb* pACB, struct dc390_dcb* pDCB );
static void dc390_Disconnect( struct dc390_acb* pACB );
static void dc390_Reselect( struct dc390_acb* pACB );
static void dc390_SRBdone( struct dc390_acb* pACB, struct dc390_dcb* pDCB, struct dc390_srb* pSRB );
static void dc390_ScsiRstDetect( struct dc390_acb* pACB );
static void dc390_EnableMsgOut_Abort(struct dc390_acb*, struct dc390_srb*);
static void dc390_dumpinfo(struct dc390_acb* pACB, struct dc390_dcb* pDCB, struct dc390_srb* pSRB);
static void dc390_ResetDevParam(struct dc390_acb* pACB);
static u32	dc390_laststatus = 0;
static u8	dc390_adapterCnt = 0;
static int disable_clustering;
module_param(disable_clustering, int, S_IRUGO);
MODULE_PARM_DESC(disable_clustering, "If you experience problems with your devices, try setting to 1");
static int tmscsim[] = ;
module_param_array(tmscsim, int, NULL, 0);
MODULE_PARM_DESC(tmscsim, "Host SCSI ID, Speed (0=10MHz), Device Flags, Adapter Flags, Max Tags (log2(tags)-1), DelayReset (s)");
MODULE_AUTHOR("C.L. Huang / Kurt Garloff");
MODULE_DESCRIPTION("SCSI host adapter driver for Tekram DC390 and other AMD53C974A based PCI SCSI adapters");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("sd,sr,sg,st");
static void *dc390_phase0[]=;
static void *dc390_phase1[]=;
static char* dc390_p0_str[] = ;
static char* dc390_p1_str[] = ;
static u8  dc390_eepromBuf[MAX_ADAPTER_NUM][EE_LEN];
static u8  dc390_clock_period1[] = ;
static u8  dc390_clock_speed[] = ;
static void inline dc390_start_segment(struct dc390_srb* pSRB)
static unsigned long inline dc390_advance_segment(struct dc390_srb* pSRB, u32 residue)
static struct dc390_dcb __inline__ *dc390_findDCB ( struct dc390_acb* pACB, u8 id, u8 lun)
static __inline__ void dc390_Free_insert (struct dc390_acb* pACB, struct dc390_srb* pSRB)
static __inline__ void dc390_Going_append (struct dc390_dcb* pDCB, struct dc390_srb* pSRB)
static __inline__ void dc390_Going_remove (struct dc390_dcb* pDCB, struct dc390_srb* pSRB)
static struct scatterlist* dc390_sg_build_single(struct scatterlist *sg, void *addr, unsigned int length)
static int dc390_pci_map (struct dc390_srb* pSRB)
static void dc390_pci_unmap (struct dc390_srb* pSRB)
static void __inline__
dc390_freetag (struct dc390_dcb* pDCB, struct dc390_srb* pSRB)
static int
dc390_StartSCSI( struct dc390_acb* pACB, struct dc390_dcb* pDCB, struct dc390_srb* pSRB )
static void __inline__
dc390_InvalidCmd(struct dc390_acb* pACB)
static irqreturn_t __inline__
DC390_Interrupt(void *dev_id)
static irqreturn_t do_DC390_Interrupt(int irq, void *dev_id)
static void
dc390_DataOut_0(struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus)
static void
dc390_DataIn_0(struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus)
static void
dc390_Command_0( struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus)
static void
dc390_Status_0( struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus)
static void
dc390_MsgOut_0( struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus)
static void __inline__
dc390_reprog (struct dc390_acb* pACB, struct dc390_dcb* pDCB)
static void
dc390_printMsg (u8 *MsgBuf, u8 len)
#define DC390_ENABLE_MSGOUT DC390_write8 (ScsiCmd, SET_ATN_CMD)
static void __inline__
dc390_MsgIn_reject (struct dc390_acb* pACB, struct dc390_srb* pSRB)
static void
dc390_EnableMsgOut_Abort ( struct dc390_acb* pACB, struct dc390_srb* pSRB )
static struct dc390_srb*
dc390_MsgIn_QTag (struct dc390_acb* pACB, struct dc390_dcb* pDCB, s8 tag)
static void
dc390_MsgIn_set_async (struct dc390_acb* pACB, struct dc390_srb* pSRB)
static void
dc390_MsgIn_set_sync (struct dc390_acb* pACB, struct dc390_srb* pSRB)
static void
dc390_restore_ptr (struct dc390_acb* pACB, struct dc390_srb* pSRB)
static u8 __inline__
dc390_MsgIn_complete (u8 *msgbuf, u32 len)
static void
dc390_MsgIn_0( struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus)
static void
dc390_DataIO_Comm( struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 ioDir)
static void
dc390_DataOutPhase( struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus)
static void
dc390_DataInPhase( struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus)
static void
dc390_CommandPhase( struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus)
static void
dc390_StatusPhase( struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus)
static void
dc390_MsgOutPhase( struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus)
static void
dc390_MsgInPhase( struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus)
static void
dc390_Nop_0( struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus)
static void
dc390_Nop_1( struct dc390_acb* pACB, struct dc390_srb* pSRB, u8 *psstatus)
static void
dc390_SetXferRate( struct dc390_acb* pACB, struct dc390_dcb* pDCB )
static void
dc390_Disconnect( struct dc390_acb* pACB )
static void
dc390_Reselect( struct dc390_acb* pACB )
static int __inline__
dc390_RequestSense(struct dc390_acb* pACB, struct dc390_dcb* pDCB, struct dc390_srb* pSRB)
static void
dc390_SRBdone( struct dc390_acb* pACB, struct dc390_dcb* pDCB, struct dc390_srb* pSRB )
static void
dc390_DoingSRB_Done(struct dc390_acb* pACB, struct scsi_cmnd *cmd)
static void
dc390_ResetSCSIBus( struct dc390_acb* pACB )
static void
dc390_ScsiRstDetect( struct dc390_acb* pACB )
static int DC390_queuecommand_lck(struct scsi_cmnd *cmd,
void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(DC390_queuecommand)
static void dc390_dumpinfo (struct dc390_acb* pACB, struct dc390_dcb* pDCB, struct dc390_srb* pSRB)
static int DC390_abort(struct scsi_cmnd *cmd)
static void dc390_ResetDevParam( struct dc390_acb* pACB )
static int DC390_bus_reset (struct scsi_cmnd *cmd)
static int dc390_slave_alloc(struct scsi_device *scsi_device)
static void dc390_slave_destroy(struct scsi_device *scsi_device)
static int dc390_slave_configure(struct scsi_device *sdev)
static struct scsi_host_template driver_template = ;
static void __devinit dc390_eeprom_prepare_read(struct pci_dev *pdev, u8 cmd)
static u16 __devinit dc390_eeprom_get_data(struct pci_dev *pdev)
static void __devinit dc390_read_eeprom(struct pci_dev *pdev, u16 *ptr)
static void __devinit dc390_eeprom_override(u8 index)
static int __devinitdata tmscsim_def[] = ;
static void __devinit dc390_fill_with_defaults (void)
static void __devinit dc390_check_eeprom(struct pci_dev *pdev, u8 index)
static void __devinit dc390_init_hw(struct dc390_acb *pACB, u8 index)
static int __devinit dc390_probe_one(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit dc390_remove_one(struct pci_dev *dev)
static struct pci_device_id tmscsim_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, tmscsim_pci_tbl);
static struct pci_driver dc390_driver = ;
static int __init dc390_module_init(void)
static void __exit dc390_module_exit(void)
module_init(dc390_module_init);
module_exit(dc390_module_exit);
static int __init dc390_setup (char *str)
__setup("tmscsim=", dc390_setup);
