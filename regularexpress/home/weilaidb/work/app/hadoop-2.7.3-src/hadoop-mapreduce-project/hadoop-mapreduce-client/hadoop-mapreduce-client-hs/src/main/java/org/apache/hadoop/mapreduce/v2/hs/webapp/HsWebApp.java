package org.apache.hadoop.mapreduce.v2.hs.webapp;
import static org.apache.hadoop.yarn.util.StringHelper.pajoin;
import static org.apache.hadoop.yarn.webapp.YarnWebParams.APP_OWNER;
import static org.apache.hadoop.yarn.webapp.YarnWebParams.CONTAINER_ID;
import static org.apache.hadoop.yarn.webapp.YarnWebParams.CONTAINER_LOG_TYPE;
import static org.apache.hadoop.yarn.webapp.YarnWebParams.ENTITY_STRING;
import static org.apache.hadoop.yarn.webapp.YarnWebParams.NM_NODENAME;
import org.apache.hadoop.mapreduce.v2.app.AppContext;
import org.apache.hadoop.mapreduce.v2.app.webapp.AMParams;
import org.apache.hadoop.mapreduce.v2.hs.HistoryContext;
import org.apache.hadoop.yarn.webapp.GenericExceptionHandler;
import org.apache.hadoop.yarn.webapp.WebApp;
public class HsWebApp extends WebApp implements AMParams
