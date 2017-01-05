package org.apache.hadoop.hdfs.server.namenode.startupprogress;
import static org.apache.hadoop.hdfs.server.namenode.startupprogress.Phase.*;
import static org.apache.hadoop.hdfs.server.namenode.startupprogress.StartupProgressTestHelper.*;
import static org.apache.hadoop.hdfs.server.namenode.startupprogress.Status.*;
import static org.apache.hadoop.hdfs.server.namenode.startupprogress.StepType.*;
import static org.junit.Assert.*;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.EnumSet;
import java.util.List;
import java.util.concurrent.Callable;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;
import org.junit.Before;
import org.junit.Test;
public class TestStartupProgress
