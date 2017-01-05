package org.apache.hadoop.yarn.client.cli;
import java.io.PrintStream;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.conf.Configured;
import org.apache.hadoop.util.Tool;
import org.apache.hadoop.yarn.client.api.YarnClient;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
@Private
@Unstable
public abstract class YarnCLI extends Configured implements Tool
