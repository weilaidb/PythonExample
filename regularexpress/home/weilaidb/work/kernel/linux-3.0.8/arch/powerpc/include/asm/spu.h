#define _SPU_H
#define LS_SIZE (256 * 1024)
#define LS_ADDR_MASK (LS_SIZE - 1)
#define MFC_PUT_CMD             0x20
#define MFC_PUTS_CMD            0x28
#define MFC_PUTR_CMD            0x30
#define MFC_PUTF_CMD            0x22
#define MFC_PUTB_CMD            0x21
#define MFC_PUTFS_CMD           0x2A
#define MFC_PUTBS_CMD           0x29
#define MFC_PUTRF_CMD           0x32
#define MFC_PUTRB_CMD           0x31
#define MFC_PUTL_CMD            0x24
#define MFC_PUTRL_CMD           0x34
#define MFC_PUTLF_CMD           0x26
#define MFC_PUTLB_CMD           0x25
#define MFC_PUTRLF_CMD          0x36
#define MFC_PUTRLB_CMD          0x35
#define MFC_GET_CMD             0x40
#define MFC_GETS_CMD            0x48
#define MFC_GETF_CMD            0x42
#define MFC_GETB_CMD            0x41
#define MFC_GETFS_CMD           0x4A
#define MFC_GETBS_CMD           0x49
#define MFC_GETL_CMD            0x44
#define MFC_GETLF_CMD           0x46
#define MFC_GETLB_CMD           0x45
#define MFC_SDCRT_CMD           0x80
#define MFC_SDCRTST_CMD         0x81
#define MFC_SDCRZ_CMD           0x89
#define MFC_SDCRS_CMD           0x8D
#define MFC_SDCRF_CMD           0x8F
#define MFC_GETLLAR_CMD         0xD0
#define MFC_PUTLLC_CMD          0xB4
#define MFC_PUTLLUC_CMD         0xB0
#define MFC_PUTQLLUC_CMD        0xB8
#define MFC_SNDSIG_CMD          0xA0
#define MFC_SNDSIGB_CMD         0xA1
#define MFC_SNDSIGF_CMD         0xA2
#define MFC_BARRIER_CMD         0xC0
#define MFC_EIEIO_CMD           0xC8
#define MFC_SYNC_CMD            0xCC
#define MFC_MIN_DMA_SIZE_SHIFT  4
#define MFC_MAX_DMA_SIZE_SHIFT  14
#define MFC_MIN_DMA_SIZE        (1 << MFC_MIN_DMA_SIZE_SHIFT)
#define MFC_MAX_DMA_SIZE        (1 << MFC_MAX_DMA_SIZE_SHIFT)
#define MFC_MIN_DMA_SIZE_MASK   (MFC_MIN_DMA_SIZE - 1)
#define MFC_MAX_DMA_SIZE_MASK   (MFC_MAX_DMA_SIZE - 1)
#define MFC_MIN_DMA_LIST_SIZE   0x0008
#define MFC_MAX_DMA_LIST_SIZE   0x4000
#define MFC_TAGID_TO_TAGMASK(tag_id)  (1 << (tag_id & 0x1F))
#define MFC_DMA_TAG_STATUS_UPDATE_EVENT     0x00000001
#define MFC_DMA_TAG_CMD_STALL_NOTIFY_EVENT  0x00000002
#define MFC_DMA_QUEUE_AVAILABLE_EVENT       0x00000008
#define MFC_SPU_MAILBOX_WRITTEN_EVENT       0x00000010
#define MFC_DECREMENTER_EVENT               0x00000020
#define MFC_PU_INT_MAILBOX_AVAILABLE_EVENT  0x00000040
#define MFC_PU_MAILBOX_AVAILABLE_EVENT      0x00000080
#define MFC_SIGNAL_2_EVENT                  0x00000100
#define MFC_SIGNAL_1_EVENT                  0x00000200
#define MFC_LLR_LOST_EVENT                  0x00000400
#define MFC_PRIV_ATTN_EVENT                 0x00000800
#define MFC_MULTI_SRC_EVENT                 0x00001000
#define SPU_CONTEXT_SWITCH_PENDING	0UL
#define SPU_CONTEXT_FAULT_PENDING	1UL
struct spu_context;
struct spu_runqueue;
struct spu_lscsa;
struct device_node;
enum spu_utilization_state ;
struct spu ;
struct cbe_spu_info ;
extern struct cbe_spu_info cbe_spu_info[];
void spu_init_channels(struct spu *spu);
void spu_irq_setaffinity(struct spu *spu, int cpu);
void spu_setup_kernel_slbs(struct spu *spu, struct spu_lscsa *lscsa,
void *code, int code_size);
extern void spu_invalidate_slbs(struct spu *spu);
extern void spu_associate_mm(struct spu *spu, struct mm_struct *mm);
int spu_64k_pages_available(void);
struct mm_struct;
extern void spu_flush_all_slbs(struct mm_struct *mm);
void spu_set_profile_private_kref(struct spu_context *ctx,
struct kref *prof_info_kref,
void ( * prof_info_release) (struct kref *kref));
void *spu_get_profile_private_kref(struct spu_context *ctx);
struct spu_syscall_block ;
extern long spu_sys_callback(struct spu_syscall_block *s);
struct file;
struct spufs_calls ;
#define SPE_EVENT_DMA_ALIGNMENT		0x0008
#define SPE_EVENT_SPE_ERROR		0x0010
#define SPE_EVENT_SPE_DATA_SEGMENT	0x0020
#define SPE_EVENT_SPE_DATA_STORAGE	0x0040
#define SPE_EVENT_INVALID_DMA		0x0800
#define SPU_CREATE_EVENTS_ENABLED	0x0001
#define SPU_CREATE_GANG			0x0002
#define SPU_CREATE_NOSCHED		0x0004
#define SPU_CREATE_ISOLATE		0x0008
#define SPU_CREATE_AFFINITY_SPU		0x0010
#define SPU_CREATE_AFFINITY_MEM		0x0020
#define SPU_CREATE_FLAG_ALL		0x003f
int register_spu_syscalls(struct spufs_calls *calls);
void unregister_spu_syscalls(struct spufs_calls *calls);
int spu_add_sysdev_attr(struct sysdev_attribute *attr);
void spu_remove_sysdev_attr(struct sysdev_attribute *attr);
int spu_add_sysdev_attr_group(struct attribute_group *attrs);
void spu_remove_sysdev_attr_group(struct attribute_group *attrs);
int spu_handle_mm_fault(struct mm_struct *mm, unsigned long ea,
unsigned long dsisr, unsigned *flt);
struct notifier_block;
int spu_switch_event_register(struct notifier_block * n);
int spu_switch_event_unregister(struct notifier_block * n);
extern void notify_spus_active(void);
extern void do_notify_spus_active(void);
union mfc_tag_size_class_cmd ;
struct mfc_cq_sr ;
struct spu_problem  __attribute__ ((aligned(0x20000)));
struct spu_priv2  __attribute__ ((aligned(0x20000)));
struct spu_priv1  __attribute__ ((aligned(0x2000)));
