package org.apache.hadoop.yarn.webapp.log;
import static org.apache.hadoop.yarn.webapp.YarnWebParams.APP_OWNER;
import static org.apache.hadoop.yarn.webapp.YarnWebParams.CONTAINER_ID;
import static org.apache.hadoop.yarn.webapp.YarnWebParams.CONTAINER_LOG_TYPE;
import static org.apache.hadoop.yarn.webapp.YarnWebParams.ENTITY_STRING;
import static org.apache.hadoop.yarn.webapp.YarnWebParams.NM_NODENAME;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Map;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileContext;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.RemoteIterator;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.yarn.api.records.ApplicationAccessType;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.NodeId;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.logaggregation.AggregatedLogFormat;
import org.apache.hadoop.yarn.logaggregation.LogAggregationUtils;
import org.apache.hadoop.yarn.server.security.ApplicationACLsManager;
import org.apache.hadoop.yarn.util.ConverterUtils;
import org.apache.hadoop.yarn.util.Times;
import org.apache.hadoop.yarn.webapp.hamlet.Hamlet;
import org.apache.hadoop.yarn.webapp.hamlet.Hamlet.PRE;
import org.apache.hadoop.yarn.webapp.view.HtmlBlock;
import com.google.inject.Inject;
@InterfaceAudience.LimitedPrivate()
public class AggregatedLogsBlock extends HtmlBlock