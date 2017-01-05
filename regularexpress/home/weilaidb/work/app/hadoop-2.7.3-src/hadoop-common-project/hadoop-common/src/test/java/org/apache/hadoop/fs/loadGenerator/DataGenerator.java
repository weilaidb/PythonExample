package org.apache.hadoop.fs.loadGenerator;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.util.EnumSet;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.conf.Configured;
import org.apache.hadoop.fs.CreateFlag;
import org.apache.hadoop.fs.FSDataOutputStream;
import org.apache.hadoop.fs.FileContext;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.Options.CreateOpts;
import org.apache.hadoop.util.Tool;
import org.apache.hadoop.util.ToolRunner;
public class DataGenerator extends Configured implements Tool
