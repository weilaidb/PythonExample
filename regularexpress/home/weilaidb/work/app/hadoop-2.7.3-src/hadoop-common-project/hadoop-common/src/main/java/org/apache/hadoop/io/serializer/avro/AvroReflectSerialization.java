package org.apache.hadoop.io.serializer.avro;
import java.util.HashSet;
import java.util.Set;
import org.apache.avro.Schema;
import org.apache.avro.io.DatumReader;
import org.apache.avro.io.DatumWriter;
import org.apache.avro.reflect.ReflectData;
import org.apache.avro.reflect.ReflectDatumReader;
import org.apache.avro.reflect.ReflectDatumWriter;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@SuppressWarnings("unchecked")
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class AvroReflectSerialization extends AvroSerialization<Object>
