package org.apache.hadoop.fs;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.conf.Configured;
import org.apache.hadoop.util.ReflectionUtils;
import java.io.IOException;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public abstract class TrashPolicy extends Configured
