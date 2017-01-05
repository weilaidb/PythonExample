package org.apache.hadoop.security.alias;
import java.io.Console;
import java.io.IOException;
import java.io.PrintStream;
import java.security.InvalidParameterException;
import java.security.NoSuchAlgorithmException;
import java.util.Arrays;
import java.util.List;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.conf.Configured;
import org.apache.hadoop.util.Tool;
import org.apache.hadoop.util.ToolRunner;
public class CredentialShell extends Configured implements Tool
