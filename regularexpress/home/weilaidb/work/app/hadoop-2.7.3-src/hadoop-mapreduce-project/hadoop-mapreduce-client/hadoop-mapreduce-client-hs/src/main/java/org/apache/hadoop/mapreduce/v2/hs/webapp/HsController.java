package org.apache.hadoop.mapreduce.v2.hs.webapp;
import java.io.IOException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.mapreduce.v2.app.webapp.App;
import org.apache.hadoop.mapreduce.v2.app.webapp.AppController;
import org.apache.hadoop.yarn.webapp.View;
import org.apache.hadoop.yarn.webapp.log.AggregatedLogsPage;
import com.google.inject.Inject;
public class HsController extends AppController
