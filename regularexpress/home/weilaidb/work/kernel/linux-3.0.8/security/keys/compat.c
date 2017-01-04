long compat_keyctl_instantiate_key_iov(
key_serial_t id,
const struct compat_iovec __user *_payload_iov,
unsigned ioc,
key_serial_t ringid)
asmlinkage long compat_sys_keyctl(u32 option,
u32 arg2, u32 arg3, u32 arg4, u32 arg5)
