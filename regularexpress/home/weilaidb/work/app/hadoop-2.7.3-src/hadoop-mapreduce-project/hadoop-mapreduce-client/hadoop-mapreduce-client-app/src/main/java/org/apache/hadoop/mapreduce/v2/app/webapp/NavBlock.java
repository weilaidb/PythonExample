package org.apache.hadoop.mapreduce.v2.app.webapp;
import static org.apache.hadoop.mapreduce.v2.app.webapp.AMParams.RM_WEB;
import java.util.List;
import org.apache.hadoop.mapreduce.v2.api.records.AMInfo;
import org.apache.hadoop.mapreduce.v2.util.MRApps;
import org.apache.hadoop.mapreduce.v2.util.MRWebAppUtil;
import org.apache.hadoop.yarn.webapp.hamlet.Hamlet;
import org.apache.hadoop.yarn.webapp.hamlet.Hamlet.DIV;
import org.apache.hadoop.yarn.webapp.view.HtmlBlock;
import com.google.inject.Inject;
public class NavBlock extends HtmlBlock
