package org.apache.hadoop.examples.terasort;
import java.io.File;
import java.io.IOException;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.mapred.FileAlreadyExistsException;
import org.apache.hadoop.mapred.HadoopTestCase;
import org.apache.hadoop.util.ToolRunner;
public class TestTeraSort extends HadoopTestCase
