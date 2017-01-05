package org.apache.hadoop.mapreduce.lib.fieldsel;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapreduce.Mapper;
import org.apache.hadoop.mapreduce.lib.input.TextInputFormat;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class FieldSelectionMapper<K, V>
extends Mapper<K, V, Text, Text>
