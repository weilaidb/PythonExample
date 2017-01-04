int copy_to_user_fromio(void __user *dst, const volatile void __iomem *src, size_t count)
EXPORT_SYMBOL(copy_to_user_fromio);
int copy_from_user_toio(volatile void __iomem *dst, const void __user *src, size_t count)
EXPORT_SYMBOL(copy_from_user_toio);
