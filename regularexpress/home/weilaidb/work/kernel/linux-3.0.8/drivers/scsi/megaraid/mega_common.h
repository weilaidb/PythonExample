#define _MEGA_COMMON_H_
#define LSI_MAX_CHANNELS		16
#define LSI_MAX_LOGICAL_DRIVES_64LD	(64+1)
#define HBA_SIGNATURE_64_BIT		0x299
#define PCI_CONF_AMISIG64		0xa4
#define MEGA_SCSI_INQ_EVPD		1
#define MEGA_INVALID_FIELD_IN_CDB	0x24
typedef struct  scb_t;
#define SCB_FREE	0x0000
#define SCB_ACTIVE	0x0001
#define SCB_PENDQ	0x0002
#define SCB_ISSUED	0x0004
#define SCB_ABORT	0x0008
#define SCB_RESET	0x0010
#define MRAID_DMA_NONE	0x0000
#define MRAID_DMA_WSG	0x0001
#define MRAID_DMA_WBUF	0x0002
#define VERSION_SIZE	16
typedef struct  adapter_t;
#define SCSI_FREE_LIST_LOCK(adapter)	(&adapter->kscb_pool_lock)
#define USER_FREE_LIST_LOCK(adapter)	(&adapter->uscb_pool_lock)
#define PENDING_LIST_LOCK(adapter)	(&adapter->pend_list_lock)
#define COMPLETED_LIST_LOCK(adapter)	(&adapter->completed_list_lock)
#define SCP2HOST(scp)			(scp)->device->host
#define SCP2HOSTDATA(scp)		SCP2HOST(scp)->hostdata
#define SCP2CHANNEL(scp)		(scp)->device->channel
#define SCP2TARGET(scp)			(scp)->device->id
#define SCP2LUN(scp)			(scp)->device->lun
#define SCSIHOST2ADAP(host)	(((caddr_t *)(host->hostdata))[0])
#define SCP2ADAPTER(scp)	(adapter_t *)SCSIHOST2ADAP(SCP2HOST(scp))
#define MRAID_IS_LOGICAL(adp, scp)	\
(SCP2CHANNEL(scp) == (adp)->max_channel) ? 1 : 0
#define MRAID_IS_LOGICAL_SDEV(adp, sdev)	\
(sdev->channel == (adp)->max_channel) ? 1 : 0
#define MRAID_GET_DEVICE_MAP(adp, scp, p_chan, target, islogical)	\								\
islogical = MRAID_IS_LOGICAL(adp, scp);				\
\								\
if (islogical) 								\
else
#define LSI_DBGLVL mraid_debug_level
#if defined (_ASSERT_PANIC)
#define ASSERT_ACTION	panic
#define ASSERT_ACTION	printk
#define ASSERT(expression)						\
if (!(expression))
#define ASSERT(expression)
struct mraid_pci_blk ;
