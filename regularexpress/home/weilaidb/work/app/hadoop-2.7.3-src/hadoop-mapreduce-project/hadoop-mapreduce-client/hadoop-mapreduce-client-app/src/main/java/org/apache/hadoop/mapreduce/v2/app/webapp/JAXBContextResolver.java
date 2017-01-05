package org.apache.hadoop.mapreduce.v2.app.webapp;
import java.util.Set;
import java.util.HashSet;
import java.util.Arrays;
import com.sun.jersey.api.json.JSONConfiguration;
import com.sun.jersey.api.json.JSONJAXBContext;
import com.google.inject.Singleton;
import javax.ws.rs.ext.ContextResolver;
import javax.ws.rs.ext.Provider;
import javax.xml.bind.JAXBContext;
import org.apache.hadoop.mapreduce.v2.app.webapp.dao.AMAttemptInfo;
import org.apache.hadoop.mapreduce.v2.app.webapp.dao.AMAttemptsInfo;
import org.apache.hadoop.mapreduce.v2.app.webapp.dao.AppInfo;
import org.apache.hadoop.mapreduce.v2.app.webapp.dao.ConfInfo;
import org.apache.hadoop.mapreduce.v2.app.webapp.dao.ConfEntryInfo;
import org.apache.hadoop.mapreduce.v2.app.webapp.dao.CounterGroupInfo;
import org.apache.hadoop.mapreduce.v2.app.webapp.dao.CounterInfo;
import org.apache.hadoop.mapreduce.v2.app.webapp.dao.JobCounterInfo;
import org.apache.hadoop.mapreduce.v2.app.webapp.dao.JobInfo;
import org.apache.hadoop.mapreduce.v2.app.webapp.dao.JobsInfo;
import org.apache.hadoop.mapreduce.v2.app.webapp.dao.JobTaskAttemptCounterInfo;
import org.apache.hadoop.mapreduce.v2.app.webapp.dao.JobTaskCounterInfo;
import org.apache.hadoop.mapreduce.v2.app.webapp.dao.ReduceTaskAttemptInfo;
import org.apache.hadoop.mapreduce.v2.app.webapp.dao.TaskAttemptInfo;
import org.apache.hadoop.mapreduce.v2.app.webapp.dao.TaskAttemptsInfo;
import org.apache.hadoop.mapreduce.v2.app.webapp.dao.TaskCounterGroupInfo;
import org.apache.hadoop.mapreduce.v2.app.webapp.dao.TaskCounterInfo;
import org.apache.hadoop.mapreduce.v2.app.webapp.dao.TaskInfo;
import org.apache.hadoop.mapreduce.v2.app.webapp.dao.TasksInfo;
import org.apache.hadoop.yarn.webapp.RemoteExceptionData;
@Singleton
@Provider
public class JAXBContextResolver implements ContextResolver<JAXBContext>
