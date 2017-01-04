long __weak probe_kernel_read(void *dst, const void *src, size_t size)
__attribute__((alias("__probe_kernel_read")));
long __probe_kernel_read(void *dst, const void *src, size_t size)
EXPORT_SYMBOL_GPL(probe_kernel_read);
long __weak probe_kernel_write(void *dst, const void *src, size_t size)
__attribute__((alias("__probe_kernel_write")));
long __probe_kernel_write(void *dst, const void *src, size_t size)
EXPORT_SYMBOL_GPL(probe_kernel_write);
