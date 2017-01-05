package org.apache.hadoop.mapreduce.v2.app.webapp;
import static org.apache.hadoop.yarn.util.StringHelper.join;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI._PROGRESSBAR;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI._PROGRESSBAR_VALUE;
import org.apache.hadoop.mapreduce.v2.app.AppContext;
import org.apache.hadoop.mapreduce.v2.app.job.Job;
import org.apache.hadoop.mapreduce.v2.app.webapp.dao.JobInfo;
import org.apache.hadoop.yarn.webapp.hamlet.Hamlet;
import org.apache.hadoop.yarn.webapp.hamlet.Hamlet.TABLE;
import org.apache.hadoop.yarn.webapp.hamlet.Hamlet.TBODY;
import org.apache.hadoop.yarn.webapp.view.HtmlBlock;
import com.google.inject.Inject;
public class JobsBlock extends HtmlBlock
