#define __ASM_PARISC_LINKAGE_H
#define __ALIGN         .align 4
#define __ALIGN_STR     ".align 4"
#define ENTRY(name) \
.export name !\
ALIGN !\
name:
#define ENDPROC(name) \
END(name)
#define ENDPROC(name) \
.type name, @function !\
END(name)
