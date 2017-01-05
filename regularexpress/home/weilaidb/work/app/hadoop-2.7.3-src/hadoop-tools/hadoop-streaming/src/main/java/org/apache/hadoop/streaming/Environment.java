package org.apache.hadoop.streaming;
import java.io.*;
import java.net.InetAddress;
import java.nio.charset.Charset;
import java.util.*;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.io.IOUtils;
import org.apache.hadoop.util.StringUtils;
@InterfaceAudience.Private
public class Environment extends Properties
