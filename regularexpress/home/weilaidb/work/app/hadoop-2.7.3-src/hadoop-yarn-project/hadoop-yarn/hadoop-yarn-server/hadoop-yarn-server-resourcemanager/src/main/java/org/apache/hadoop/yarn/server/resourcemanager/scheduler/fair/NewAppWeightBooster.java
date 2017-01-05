package org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.conf.Configured;
@Private
@Unstable
public class NewAppWeightBooster extends Configured implements WeightAdjuster
