package org.apache.hadoop.yarn.server.applicationhistoryservice.webapp;
import static org.apache.hadoop.yarn.util.StringHelper.sjoin;
import static org.apache.hadoop.yarn.webapp.YarnWebParams.APP_STATE;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI.ACCORDION;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI.ACCORDION_ID;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI.DATATABLES;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI.DATATABLES_ID;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI.initID;
import org.apache.hadoop.yarn.server.webapp.AppsBlock;
import org.apache.hadoop.yarn.server.webapp.WebPageUtils;
import org.apache.hadoop.yarn.webapp.SubView;
import org.apache.hadoop.yarn.webapp.view.TwoColumnLayout;
public class AHSView extends TwoColumnLayout
