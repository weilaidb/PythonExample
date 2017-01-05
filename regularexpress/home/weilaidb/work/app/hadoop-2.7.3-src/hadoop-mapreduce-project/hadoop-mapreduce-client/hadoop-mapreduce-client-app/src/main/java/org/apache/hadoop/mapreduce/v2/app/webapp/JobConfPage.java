package org.apache.hadoop.mapreduce.v2.app.webapp;
import static org.apache.hadoop.mapreduce.v2.app.webapp.AMParams.JOB_ID;
import static org.apache.hadoop.yarn.util.StringHelper.join;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI.ACCORDION;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI.DATATABLES;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI.DATATABLES_ID;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI.initID;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI.postInitID;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI.tableInit;
import org.apache.hadoop.mapreduce.v2.app.webapp.ConfBlock;
import org.apache.hadoop.yarn.webapp.SubView;
public class JobConfPage extends AppView
private String confPostTableInit()
}
