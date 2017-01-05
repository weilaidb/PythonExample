package org.apache.hadoop.io.compress;
import static org.junit.Assert.assertEquals;
import java.util.concurrent.Callable;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.LinkedBlockingDeque;
import java.util.concurrent.TimeUnit;
import org.apache.hadoop.conf.Configuration;
import org.junit.Before;
import org.junit.Test;
import java.util.HashSet;
import java.util.Set;
public class TestCodecPool
