package org.apache.hadoop.tools.rumen.datatypes;
import java.net.URI;
import java.net.URISyntaxException;
import java.util.StringTokenizer;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.tools.rumen.anonymization.WordList;
import org.apache.hadoop.tools.rumen.anonymization.WordListAnonymizerUtility;
import org.apache.hadoop.tools.rumen.state.State;
import org.apache.hadoop.tools.rumen.state.StatePool;
import org.apache.hadoop.util.StringUtils;
public class FileName implements AnonymizableDataType<String>
