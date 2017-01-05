package org.apache.hadoop.yarn.server.sharedcachemanager.webapp;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI.ACCORDION;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI.ACCORDION_ID;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI.initID;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.server.sharedcachemanager.SharedCacheManager;
import org.apache.hadoop.yarn.server.sharedcachemanager.metrics.CleanerMetrics;
import org.apache.hadoop.yarn.server.sharedcachemanager.metrics.ClientSCMMetrics;
import org.apache.hadoop.yarn.server.sharedcachemanager.metrics.SharedCacheUploaderMetrics;
import org.apache.hadoop.yarn.util.Times;
import org.apache.hadoop.yarn.webapp.SubView;
import org.apache.hadoop.yarn.webapp.view.HtmlBlock;
import org.apache.hadoop.yarn.webapp.view.InfoBlock;
import org.apache.hadoop.yarn.webapp.view.TwoColumnLayout;
import com.google.inject.Inject;
@Private
@Unstable
public class SCMOverviewPage extends TwoColumnLayout
