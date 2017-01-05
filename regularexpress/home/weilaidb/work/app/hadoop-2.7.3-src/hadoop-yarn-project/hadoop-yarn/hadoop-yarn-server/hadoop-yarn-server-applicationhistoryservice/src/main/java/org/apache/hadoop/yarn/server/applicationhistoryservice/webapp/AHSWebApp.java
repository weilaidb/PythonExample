package org.apache.hadoop.yarn.server.applicationhistoryservice.webapp;
import static org.apache.hadoop.yarn.util.StringHelper.pajoin;
import org.apache.hadoop.yarn.api.ApplicationBaseProtocol;
import org.apache.hadoop.yarn.server.applicationhistoryservice.ApplicationHistoryClientService;
import org.apache.hadoop.yarn.server.timeline.TimelineDataManager;
import org.apache.hadoop.yarn.server.timeline.webapp.TimelineWebServices;
import org.apache.hadoop.yarn.webapp.GenericExceptionHandler;
import org.apache.hadoop.yarn.webapp.WebApp;
import org.apache.hadoop.yarn.webapp.YarnJacksonJaxbJsonProvider;
import org.apache.hadoop.yarn.webapp.YarnWebParams;
public class AHSWebApp extends WebApp implements YarnWebParams
