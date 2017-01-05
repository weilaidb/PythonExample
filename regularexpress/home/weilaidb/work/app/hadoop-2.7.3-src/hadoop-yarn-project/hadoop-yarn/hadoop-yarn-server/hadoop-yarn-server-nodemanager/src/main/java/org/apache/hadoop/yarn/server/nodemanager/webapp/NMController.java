package org.apache.hadoop.yarn.server.nodemanager.webapp;
import static org.apache.hadoop.yarn.util.StringHelper.join;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.server.nodemanager.Context;
import org.apache.hadoop.yarn.server.nodemanager.containermanager.application.Application;
import org.apache.hadoop.yarn.util.ConverterUtils;
import org.apache.hadoop.yarn.webapp.Controller;
import org.apache.hadoop.yarn.webapp.YarnWebParams;
import com.google.inject.Inject;
public class NMController extends Controller implements YarnWebParams
