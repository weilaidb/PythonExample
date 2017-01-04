static char *initrd __initdata = NULL;
static int __init read_initrd(void)
__uml_postsetup(read_initrd);
static int __init uml_initrd_setup(char *line, int *add)
__uml_setup("initrd=", uml_initrd_setup,
"initrd=<initrd image>\n"
"    This is used to boot UML from an initrd image.  The argument is the\n"
"    name of the file containing the image.\n\n"
);
int load_initrd(char *filename, void *buf, int size)
