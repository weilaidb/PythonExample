package org.apache.hadoop.tools.rumen.datatypes;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.tools.rumen.anonymization.WordList;
import org.apache.hadoop.tools.rumen.anonymization.WordListAnonymizerUtility;
import org.apache.hadoop.tools.rumen.state.StatePool;
public abstract class DefaultAnonymizableDataType
implements AnonymizableDataType<String>
