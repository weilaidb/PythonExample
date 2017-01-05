package org.apache.hadoop.mapreduce.v2.hs;
import java.util.Map;
import org.apache.hadoop.mapreduce.v2.app.AppContext;
import org.apache.hadoop.mapreduce.v2.app.job.Job;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.mapreduce.v2.api.records.JobId;
import org.apache.hadoop.mapreduce.v2.api.records.JobState;
import org.apache.hadoop.mapreduce.v2.hs.webapp.dao.JobsInfo;
public interface HistoryContext extends AppContext
