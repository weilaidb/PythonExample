package org.apache.hadoop.yarn.server.resourcemanager.webapp;
import org.apache.hadoop.yarn.server.webapp.WebPageUtils;
import org.apache.hadoop.yarn.webapp.SubView;
import org.apache.hadoop.yarn.webapp.view.TwoColumnLayout;
import static org.apache.hadoop.yarn.util.StringHelper.sjoin;
import static org.apache.hadoop.yarn.webapp.YarnWebParams.APP_STATE;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI.*;
public class RmView extends TwoColumnLayout
