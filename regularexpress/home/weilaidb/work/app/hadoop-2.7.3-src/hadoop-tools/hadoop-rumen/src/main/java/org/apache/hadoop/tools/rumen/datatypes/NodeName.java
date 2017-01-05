package org.apache.hadoop.tools.rumen.datatypes;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.tools.rumen.ParsedHost;
import org.apache.hadoop.tools.rumen.anonymization.WordList;
import org.apache.hadoop.tools.rumen.state.State;
import org.apache.hadoop.tools.rumen.state.StatePool;
import org.codehaus.jackson.annotate.JsonIgnore;
public class NodeName implements AnonymizableDataType<String>
