package org.apache.hadoop.mapreduce.v2.hs.webapp;
import static org.apache.hadoop.mapreduce.v2.app.webapp.AMParams.TASK_ID;
import static org.apache.hadoop.mapreduce.v2.app.webapp.AMParams.TASK_TYPE;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI.ACCORDION;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI.DATATABLES;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI.DATATABLES_ID;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI.initID;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI.postInitID;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI.tableInit;
import java.util.Collection;
import org.apache.commons.lang.StringEscapeUtils;
import org.apache.hadoop.mapreduce.v2.api.records.TaskId;
import org.apache.hadoop.mapreduce.v2.api.records.TaskType;
import org.apache.hadoop.mapreduce.v2.app.job.TaskAttempt;
import org.apache.hadoop.mapreduce.v2.app.webapp.App;
import org.apache.hadoop.mapreduce.v2.app.webapp.dao.TaskAttemptInfo;
import org.apache.hadoop.mapreduce.v2.util.MRApps;
import org.apache.hadoop.mapreduce.v2.util.MRWebAppUtil;
import org.apache.hadoop.yarn.util.Times;
import org.apache.hadoop.yarn.webapp.SubView;
import org.apache.hadoop.yarn.webapp.hamlet.Hamlet;
import org.apache.hadoop.yarn.webapp.hamlet.Hamlet.TABLE;
import org.apache.hadoop.yarn.webapp.hamlet.Hamlet.TBODY;
import org.apache.hadoop.yarn.webapp.hamlet.Hamlet.TFOOT;
import org.apache.hadoop.yarn.webapp.hamlet.Hamlet.THEAD;
import org.apache.hadoop.yarn.webapp.hamlet.Hamlet.TR;
import org.apache.hadoop.yarn.webapp.hamlet.HamletSpec.InputType;
import org.apache.hadoop.yarn.webapp.view.HtmlBlock;
import com.google.common.base.Joiner;
import com.google.inject.Inject;
public class HsTaskPage extends HsView
private String attemptsPostTableInit()
}
