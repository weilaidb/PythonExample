bool vmw_fifo_have_3d(struct vmw_private *dev_priv)
bool vmw_fifo_have_pitchlock(struct vmw_private *dev_priv)
int vmw_fifo_init(struct vmw_private *dev_priv, struct vmw_fifo_state *fifo)
void vmw_fifo_ping_host(struct vmw_private *dev_priv, uint32_t reason)
void vmw_fifo_release(struct vmw_private *dev_priv, struct vmw_fifo_state *fifo)
static bool vmw_fifo_is_full(struct vmw_private *dev_priv, uint32_t bytes)
static int vmw_fifo_wait_noirq(struct vmw_private *dev_priv,
uint32_t bytes, bool interruptible,
unsigned long timeout)
static int vmw_fifo_wait(struct vmw_private *dev_priv,
uint32_t bytes, bool interruptible,
unsigned long timeout)
void *vmw_fifo_reserve(struct vmw_private *dev_priv, uint32_t bytes)
static void vmw_fifo_res_copy(struct vmw_fifo_state *fifo_state,
__le32 __iomem *fifo_mem,
uint32_t next_cmd,
uint32_t max, uint32_t min, uint32_t bytes)
static void vmw_fifo_slow_copy(struct vmw_fifo_state *fifo_state,
__le32 __iomem *fifo_mem,
uint32_t next_cmd,
uint32_t max, uint32_t min, uint32_t bytes)
void vmw_fifo_commit(struct vmw_private *dev_priv, uint32_t bytes)
int vmw_fifo_send_fence(struct vmw_private *dev_priv, uint32_t *sequence)
static int vmw_fifo_vm_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static struct vm_operations_struct vmw_fifo_vm_ops = ;
int vmw_fifo_mmap(struct file *filp, struct vm_area_struct *vma)
