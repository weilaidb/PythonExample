#if defined(CONFIG_USB_STORAGE_REALTEK) || \
defined(CONFIG_USB_STORAGE_REALTEK_MODULE)
UNUSUAL_DEV(0x0bda, 0x0138, 0x0000, 0x9999,
"Realtek",
"USB Card Reader",
USB_SC_DEVICE, USB_PR_DEVICE, init_realtek_cr, 0),
UNUSUAL_DEV(0x0bda, 0x0158, 0x0000, 0x9999,
"Realtek",
"USB Card Reader",
USB_SC_DEVICE, USB_PR_DEVICE, init_realtek_cr, 0),
UNUSUAL_DEV(0x0bda, 0x0159, 0x0000, 0x9999,
"Realtek",
"USB Card Reader",
USB_SC_DEVICE, USB_PR_DEVICE, init_realtek_cr, 0),
