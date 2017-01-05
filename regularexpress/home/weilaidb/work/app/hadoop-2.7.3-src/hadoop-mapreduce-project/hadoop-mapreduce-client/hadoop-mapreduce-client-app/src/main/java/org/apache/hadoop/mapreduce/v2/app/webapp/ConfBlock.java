package org.apache.hadoop.mapreduce.v2.app.webapp;
import static org.apache.hadoop.mapreduce.v2.app.webapp.AMParams.JOB_ID;
import static org.apache.hadoop.yarn.webapp.view.JQueryUI._TH;
import java.io.IOException;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.mapreduce.v2.api.records.JobId;
import org.apache.hadoop.mapreduce.v2.app.AppContext;
import org.apache.hadoop.mapreduce.v2.app.job.Job;
import org.apache.hadoop.mapreduce.v2.app.webapp.dao.ConfEntryInfo;
import org.apache.hadoop.mapreduce.v2.app.webapp.dao.ConfInfo;
import org.apache.hadoop.mapreduce.v2.util.MRApps;
import org.apache.hadoop.yarn.webapp.hamlet.Hamlet;
import org.apache.hadoop.yarn.webapp.hamlet.Hamlet.TABLE;
import org.apache.hadoop.yarn.webapp.hamlet.Hamlet.TBODY;
import org.apache.hadoop.yarn.webapp.hamlet.HamletSpec.InputType;
import org.apache.hadoop.yarn.webapp.view.HtmlBlock;
import com.google.inject.Inject;
public class ConfBlock extends HtmlBlock
