static int umid_inited = 0;
static int __init set_umid_arg(char *name, int *add)
__uml_setup("umid=", set_umid_arg,
"umid=<name>\n"
"    This is used to assign a unique identity to this UML machine and\n"
"    is used for naming the pid file and management console socket.\n\n"
);
