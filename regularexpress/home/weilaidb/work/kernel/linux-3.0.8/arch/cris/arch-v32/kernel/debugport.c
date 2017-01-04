struct dbg_port
;
struct dbg_port ports[] =
;
static struct dbg_port *port =
#if defined(CONFIG_ETRAX_DEBUG_PORT0)
&ports[0];
#elif defined(CONFIG_ETRAX_DEBUG_PORT1)
&ports[1];
#elif defined(CONFIG_ETRAX_DEBUG_PORT2)
&ports[2];
#elif defined(CONFIG_ETRAX_DEBUG_PORT3)
&ports[3];
#elif defined(CONFIG_ETRAX_DEBUG_PORT4)
&ports[4];
NULL;
static struct dbg_port *kgdb_port =
#if defined(CONFIG_ETRAX_KGDB_PORT0)
&ports[0];
#elif defined(CONFIG_ETRAX_KGDB_PORT1)
&ports[1];
#elif defined(CONFIG_ETRAX_KGDB_PORT2)
&ports[2];
#elif defined(CONFIG_ETRAX_KGDB_PORT3)
&ports[3];
#elif defined(CONFIG_ETRAX_KGDB_PORT4)
&ports[4];
NULL;
static void
start_port(struct dbg_port* p)
int
getDebugChar(void)
void
putDebugChar(int val)
int __init
init_etrax_debug(void)
