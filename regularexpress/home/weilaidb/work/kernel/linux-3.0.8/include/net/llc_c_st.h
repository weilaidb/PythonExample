#define LLC_C_ST_H
#define LLC_CONN_OUT_OF_SVC		 0
#define LLC_CONN_STATE_ADM		 1
#define LLC_CONN_STATE_SETUP		 2
#define LLC_CONN_STATE_NORMAL		 3
#define LLC_CONN_STATE_BUSY		 4
#define LLC_CONN_STATE_REJ		 5
#define LLC_CONN_STATE_AWAIT		 6
#define LLC_CONN_STATE_AWAIT_BUSY	 7
#define LLC_CONN_STATE_AWAIT_REJ	 8
#define LLC_CONN_STATE_D_CONN		 9
#define LLC_CONN_STATE_RESET		10
#define LLC_CONN_STATE_ERROR		11
#define LLC_CONN_STATE_TEMP		12
#define NBR_CONN_STATES			12
#define NO_STATE_CHANGE			100
struct llc_conn_state_trans ;
struct llc_conn_state ;
extern struct llc_conn_state llc_conn_state_table[];
