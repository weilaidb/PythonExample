package org.apache.hadoop.io.serializer.avro;
import org.apache.avro.Schema;
import org.apache.avro.io.DatumReader;
import org.apache.avro.io.DatumWriter;
import org.apache.avro.specific.SpecificDatumReader;
import org.apache.avro.specific.SpecificDatumWriter;
import org.apache.avro.specific.SpecificRecord;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@SuppressWarnings("unchecked")
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class AvroSpecificSerialization
extends AvroSerialization<SpecificRecord>
