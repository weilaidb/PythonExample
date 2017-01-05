package org.apache.hadoop.mapred;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.ipc.VersionedProtocol;
import org.apache.hadoop.mapred.JvmTask;
import org.apache.hadoop.mapreduce.security.token.JobTokenSelector;
import org.apache.hadoop.security.token.TokenInfo;
@TokenInfo(JobTokenSelector.class)
@InterfaceAudience.Private
@InterfaceStability.Stable
public interface TaskUmbilicalProtocol extends VersionedProtocol
