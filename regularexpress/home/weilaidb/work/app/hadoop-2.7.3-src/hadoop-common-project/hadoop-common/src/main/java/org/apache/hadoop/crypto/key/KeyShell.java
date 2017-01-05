package org.apache.hadoop.crypto.key;
import java.io.IOException;
import java.io.PrintStream;
import java.security.InvalidParameterException;
import java.security.NoSuchAlgorithmException;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.conf.Configured;
import org.apache.hadoop.crypto.key.KeyProvider.Metadata;
import org.apache.hadoop.crypto.key.KeyProvider.Options;
import org.apache.hadoop.util.Tool;
import org.apache.hadoop.util.ToolRunner;
public class KeyShell extends Configured implements Tool
