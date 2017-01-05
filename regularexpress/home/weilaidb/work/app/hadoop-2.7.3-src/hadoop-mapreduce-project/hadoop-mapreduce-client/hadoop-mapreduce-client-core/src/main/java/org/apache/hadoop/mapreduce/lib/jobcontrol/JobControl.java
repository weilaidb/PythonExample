package org.apache.hadoop.mapreduce.lib.jobcontrol;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.mapred.jobcontrol.Job;
import org.apache.hadoop.mapreduce.lib.jobcontrol.ControlledJob.State;
import org.apache.hadoop.util.StringUtils;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class JobControl implements Runnable
