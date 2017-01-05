package org.apache.hadoop.yarn.client.cli;
import static org.junit.Assert.assertEquals;
import static org.mockito.Mockito.mock;
import static org.mockito.Mockito.spy;
import static org.mockito.Mockito.verify;
import static org.mockito.Mockito.when;
import java.io.ByteArrayOutputStream;
import java.io.PrintStream;
import java.io.PrintWriter;
import java.util.HashSet;
import org.apache.hadoop.yarn.client.api.YarnClient;
import org.apache.hadoop.yarn.nodelabels.CommonNodeLabelsManager;
import org.junit.Before;
import org.junit.Test;
import com.google.common.collect.ImmutableSet;
public class TestClusterCLI
