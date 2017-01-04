#define __ASM_SH_VMLINUX_LDS_H
#define DWARF_EH_FRAME							\
.eh_frame : AT(ADDR(.eh_frame) - LOAD_OFFSET)
#define DWARF_EH_FRAME
#define EXTRA_TEXT		\
*(.text64)		\
*(.text..SHmedia32)
#define EXTRA_TEXT
