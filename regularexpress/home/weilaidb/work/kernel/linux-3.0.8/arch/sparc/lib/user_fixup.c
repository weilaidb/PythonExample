static unsigned long compute_size(unsigned long start, unsigned long size, unsigned long *offset)
unsigned long copy_from_user_fixup(void *to, const void __user *from, unsigned long size)
EXPORT_SYMBOL(copy_from_user_fixup);
unsigned long copy_to_user_fixup(void __user *to, const void *from, unsigned long size)
EXPORT_SYMBOL(copy_to_user_fixup);
unsigned long copy_in_user_fixup(void __user *to, void __user *from, unsigned long size)
EXPORT_SYMBOL(copy_in_user_fixup);
