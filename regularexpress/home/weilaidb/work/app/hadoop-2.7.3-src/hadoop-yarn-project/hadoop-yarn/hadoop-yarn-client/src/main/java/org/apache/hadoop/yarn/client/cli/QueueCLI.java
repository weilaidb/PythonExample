package org.apache.hadoop.yarn.client.cli;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.nio.charset.Charset;
import java.text.DecimalFormat;
import java.util.Set;
import org.apache.commons.cli.CommandLine;
import org.apache.commons.cli.GnuParser;
import org.apache.commons.cli.HelpFormatter;
import org.apache.commons.cli.MissingArgumentException;
import org.apache.commons.cli.Options;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.util.ToolRunner;
import org.apache.hadoop.yarn.api.records.QueueInfo;
import org.apache.hadoop.yarn.exceptions.YarnException;
import com.google.common.annotations.VisibleForTesting;
@Private
@Unstable
public class QueueCLI extends YarnCLI
