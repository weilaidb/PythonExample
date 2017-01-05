package org.apache.hadoop.cli;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.cli.util.*;
import org.apache.hadoop.cli.util.CommandExecutor.Result;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.util.Shell;
import org.apache.hadoop.util.StringUtils;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.fail;
import org.xml.sax.Attributes;
import org.xml.sax.SAXException;
import org.xml.sax.helpers.DefaultHandler;
import javax.xml.parsers.SAXParser;
import javax.xml.parsers.SAXParserFactory;
import java.io.File;
import java.util.ArrayList;
public class CLITestHelper
