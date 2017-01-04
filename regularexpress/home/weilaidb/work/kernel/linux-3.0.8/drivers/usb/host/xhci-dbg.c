#define XHCI_INIT_VALUE 0x0
void xhci_dbg_regs(struct xhci_hcd *xhci)
static void xhci_print_cap_regs(struct xhci_hcd *xhci)
static void xhci_print_command_reg(struct xhci_hcd *xhci)
static void xhci_print_status(struct xhci_hcd *xhci)
static void xhci_print_op_regs(struct xhci_hcd *xhci)
static void xhci_print_ports(struct xhci_hcd *xhci)
void xhci_print_ir_set(struct xhci_hcd *xhci, int set_num)
void xhci_print_run_regs(struct xhci_hcd *xhci)
void xhci_print_registers(struct xhci_hcd *xhci)
void xhci_print_trb_offsets(struct xhci_hcd *xhci, union xhci_trb *trb)
void xhci_debug_trb(struct xhci_hcd *xhci, union xhci_trb *trb)
void xhci_debug_segment(struct xhci_hcd *xhci, struct xhci_segment *seg)
void xhci_dbg_ring_ptrs(struct xhci_hcd *xhci, struct xhci_ring *ring)
void xhci_debug_ring(struct xhci_hcd *xhci, struct xhci_ring *ring)
void xhci_dbg_ep_rings(struct xhci_hcd *xhci,
unsigned int slot_id, unsigned int ep_index,
struct xhci_virt_ep *ep)
void xhci_dbg_erst(struct xhci_hcd *xhci, struct xhci_erst *erst)
void xhci_dbg_cmd_ptrs(struct xhci_hcd *xhci)
static void dbg_rsvd64(struct xhci_hcd *xhci, u64 *ctx, dma_addr_t dma)
char *xhci_get_slot_state(struct xhci_hcd *xhci,
struct xhci_container_ctx *ctx)
static void xhci_dbg_slot_ctx(struct xhci_hcd *xhci, struct xhci_container_ctx *ctx)
static void xhci_dbg_ep_ctx(struct xhci_hcd *xhci,
struct xhci_container_ctx *ctx,
unsigned int last_ep)
void xhci_dbg_ctx(struct xhci_hcd *xhci,
struct xhci_container_ctx *ctx,
unsigned int last_ep)
