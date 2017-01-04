#if defined(CONFIG_FRAME_POINTER) && !defined(CONFIG_ARM_UNWIND)
struct return_address_data ;
static int save_return_addr(struct stackframe *frame, void *d)
void *return_address(unsigned int level)
#if defined(CONFIG_ARM_UNWIND)
#warning "TODO: return_address should use unwind tables"
void *return_address(unsigned int level)
EXPORT_SYMBOL_GPL(return_address);
