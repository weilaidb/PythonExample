#define _ASM_TILE_LINKAGE_H
#define __ALIGN .align 8
#define STD_ENTRY(name) \
.pushsection .text.##name, "ax"; \
ENTRY(name); \
FEEDBACK_ENTER(name)
#define STD_ENTRY_SECTION(name, section) \
.pushsection section, "ax"; \
ENTRY(name); \
FEEDBACK_ENTER_EXPLICIT(name, section, .Lend_##name - name)
#define STD_ENDPROC(name) \
ENDPROC(name); \
.Lend_##name:; \
.popsection
#define STD_ENTRY_LOCAL(name) \
.pushsection .text.##name, "ax"; \
ALIGN; \
name:; \
FEEDBACK_ENTER(name)
